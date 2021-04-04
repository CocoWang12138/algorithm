#include <iostream>
#include <algorithm>

using namespace std;

const int N = 55;

int n, x[N];

int main(){
	cin >> n;
	for (int i=0; i<n; i++)	cin >> x[i];
	
	int left = 0, right = 0;	//向左向右走的蚂蚁的数量
	for (int i=1; i<n; i++){
		if (abs(x[i]) < abs(x[0]) && x[i] > 0) left++;	//向右走遇到感冒的蚂蚁
		if (abs(x[i]) > abs(x[0]) && x[i] < 0) right++;	//向左走会遇到感冒的蚂蚁 
	}
	
	if(x[0] > 0 && right == 0 || x[0] < 0 && left ==0) cout << 1;
	else cout << left + right + 1 << endl; 
}
