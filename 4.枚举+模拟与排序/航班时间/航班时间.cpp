#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio> 

using namespace std;

int get_seconds(int h, int m, int s){
	return h*3600 + m*60 + s;
}

int get_time(){
	string line;
	getline(cin, line);	//	读取一行字符串 
	
	if (line.back() != ')') line += "(+0)";	//	如果字符串末尾未加标识信息，手动加上 +0. 
	
	int h1, m1, s1, h2, m2, s2, d;
	sscanf(line.c_str(), "%d:%d:%d %d:%d:%d (+%d)", &h1, &m1, &s1, &h2, &m2, &s2, &d);
	
	return get_seconds(h2, m2, s2) - get_seconds(h1, m1, s1) + d*24*3600;	//转换为秒 
}

int main(){
	int T;
	cin >> T;
	string line;
	getline(cin, line);	//	切记，先忽略掉第一行的回车 
	while (T--){
		int time = (get_time() + get_time()) / 2;	//	为了防止负溢出，如此处理！ 
		int hour = time/3600, minute = time%3600/60, second = time%60;	//	常用套路：秒 -> 时、分、秒 
		printf("%02d:%02d:%02d\n", hour, minute, second);
	}
	return 0;
}
