#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int s, e;
	string str[]={"one","two","three","four","five",
		"six","seven","eight","nine"};
	int i; 

	cin >> s >> e;
	for (i=s; i<=e; i++){
		if (i > 9)
			cout << ((i%2)?"odd":"even") << endl;
		else
			cout << str[i-1] << endl;        
	}
	return 0;
}
