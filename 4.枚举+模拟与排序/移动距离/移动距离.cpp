#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	int w, m, n;
	cin >> w >> m >> n;
	m--, n--;
	
	//���кš��к� 
	int x1 = m/w, x2 = n/w;
	int y1 = m%w, y2 = n%w;
	if(x1%2)	y1 = w-1-y1;	//����������У���ׯ 
	if(x2%2)	y2 = w-1-y2;
	
	cout << abs(x1 - x2) + abs(y1 - y2) << endl;	//�������پ��� 
	
	return 0;
}
