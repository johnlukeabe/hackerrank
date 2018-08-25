#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string str[]={"one","two","three","four","five","six",
				  "seven","eight","nine"};

	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (n > 9)
		cout << "Greater than 9" << endl;
	else 
		cout << str[n-1] << endl;

	return 0;
}
