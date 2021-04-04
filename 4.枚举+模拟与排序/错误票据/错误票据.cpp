#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10010;
int n, a[N];

int main(){
	int cnt;
	cin >> cnt;
	string line;
	
	getline(cin, line);
	while (cnt -- ){
		getline(cin, line);
		stringstream ssin(line);	//将字符串分割为数字 
		
		while (ssin >> a[n]) n++;
	}
	
	sort(a, a+n);	//将数组 a 排序
	
	int res1, res2;
	for (int i=0; i<n; i++){
		if (a[i] == a[i-1]) res2 = a[i];	//res2 表示连号的
		else if (a[i] >= a[i-1] + 2) res1 = a[i] - 1;	//断号 
	}
	
	cout << res1 << " " << res2;
}







