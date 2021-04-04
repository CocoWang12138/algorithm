/*
输入格式
输入一行包含两个整数 n,m。

输出格式
输出一个整数，表示答案。
*/
/*
输入格式
输入一行包含两个整数 n,m。

输出格式
输出一个整数，表示答案。
*/
#include <iostream>

using namespace std;

const int N=35;

int f[N][N];

int main(){
	int n, m;
	cin>>n>>m;
	f[1][1] = 1;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(i==1 && j==1) continue;
			if(i%2 || j%2)
				f[i][j] = f[i-1][j] + f[i][j-1];
		}
	}
	
	cout << f[n][m] <<endl;
}
