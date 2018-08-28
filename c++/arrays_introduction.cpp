#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int i, n;
	vector<int> myvector;
	
	cin >> n;
	for (i = 0; i < n; i++){
		int v;
		cin >> v;
		myvector.push_back(v);
	}

	vector<int>::reverse_iterator riter = myvector.rbegin();
	for ( ; riter != myvector.rend(); riter++)
		cout << *riter << ' ';

	return 0;
}

