#include <iostream>
#include <algorithm>

using namespace std;

int is_match(int x){
	static int match[10]={6,2,5,5,4,5,6,3,7,6};
	int num=0;
	
	if(x==0)
		return match[0];	
	while(x>0){
		num+=match[x%10];
		x/=10;
	}
	
	return num;
}

int main(int argc, char** argv){
	int n, res;
	cin>>n;
	n-=4;
	
	for(int i=0; i<1111; i++)
		for(int j=0; j<1111; j++){
			if(is_match(i)+is_match(j)+is_match(i+j)==n){
				cout<<i<<"+"<<j<<"="<<i+j<<endl;
				res++;
			}
		}
	
	cout<<res;
}
