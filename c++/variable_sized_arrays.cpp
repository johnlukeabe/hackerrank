#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#undef DEBUG

void print(vector<vector<int>> myVec);

int main()
{
	int i, j;
	int r_n, q_n;

	cin >> r_n >> q_n;

	vector<vector<int>> myVec(r_n);

	for (i = 0; i < r_n; i++){
		int c_n;
		cin >> c_n;

		for (j = 0; j < c_n; j++){
			int v;
			cin >> v;
			myVec[i].push_back(v);
		}
	}

	int *pArr = new int[q_n];
	for (i = 0; i < q_n; i++){
		int x, y;
		cin >> x >> y;
		pArr[i] = myVec[x][y];
	}
	for (i = 0; i < q_n; i++)
		cout << pArr[i] << endl;

#ifdef DEBUG
	print(myVec);
#endif

	return 0;
}

void print(vector<vector<int>> myVec){
	vector<vector<int>>::iterator row;
	vector<int>::iterator col;
	for (row = myVec.begin(); row != myVec.end(); row++) { 
		for (col = row->begin(); col != row->end(); col++)
			cout << *col << " ";

		cout << endl;
	}
}
