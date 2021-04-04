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
		stringstream ssin(line);	//���ַ����ָ�Ϊ���� 
		
		while (ssin >> a[n]) n++;
	}
	
	sort(a, a+n);	//������ a ����
	
	int res1, res2;
	for (int i=0; i<n; i++){
		if (a[i] == a[i-1]) res2 = a[i];	//res2 ��ʾ���ŵ�
		else if (a[i] >= a[i-1] + 2) res1 = a[i] - 1;	//�Ϻ� 
	}
	
	cout << res1 << " " << res2;
}







