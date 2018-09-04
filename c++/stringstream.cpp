#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> myVec;
	stringstream ss(str);

	while(ss) {
		int v;
		char c;

		ss >> v >> c;
		myVec.push_back(v);
	}

#if 0
	auto print_vec = [](const int &v){cout << v << " ";};
	for_each(myVec.begin(), myVec.end(), print_vec);
#endif

	return myVec;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for(int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}
