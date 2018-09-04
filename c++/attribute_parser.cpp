#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

void print_map(map<string, string> &m);

int main(){
	int hrml_n, q_n;
	int i;
	string line;
	map<string, string> tagMap;

	cin >> hrml_n >> q_n;
	cin.ignore();

	string gtag="";
	for(i=0; i<hrml_n; i++){
		getline(cin, line);

		/* Parsing each field and save into tagMap */
		stringstream ss(line);
		string t, field="";
		while(getline(ss, t, ' ')){
			if(t[0] == '<'){
				if(t[1] == '/'){
					gtag = (gtag.find('.') == string::npos)? "" : gtag.substr(0, gtag.find_last_of('.'));
					break;
				}
				else{
					int off = 1;
					if(t.find(">") != string::npos)
						off++;
					gtag = (gtag.empty())? t.substr(1, t.length()-off) : 
										   gtag + "." + t.substr(1, t.length()-off);
				}
			}
			else{
				if(t[0] == '=') continue;

				if(t[0] != '"')
					field = gtag + "~" + t;
				else{
					if(t.find(">") != string::npos)
						tagMap[field] = t.substr(1, t.length() - 3);
					else
						tagMap[field] = t.substr(1, t.length() - 2);
				}
			}
		}
#if 0
		cout << "gtag : " << gtag << endl;
		print_map(tagMap);
#endif
	}


	for(i=0; i<q_n; i++){
		string key;
		getline(cin, key);
		if (tagMap.find(key) == tagMap.end())
			cout << "Not Found!" << endl;
		else
			cout << tagMap[key] << endl;
	}
}

void print_map(map<string, string> &m) {
	map<string, string>::const_iterator iter;
	for (iter = m.begin(); iter != m.end() ; iter++) {
		cout << iter->first << " " << iter->second << endl;
	}
}
