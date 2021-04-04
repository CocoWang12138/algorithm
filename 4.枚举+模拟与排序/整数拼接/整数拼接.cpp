#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long LL;

const int N = 1e6+10;
int cmp[N],q[N];
long long int res=0;

void merge_sort(int q[], int l, int r){
	if (l>=r)	return;
	int mid = l+r>>1;
	merge_sort(q,l,mid);
	merge_sort(q,mid+1,r);
	int i=l,j=mid+1,k=0;
	
	while(i<=mid&&j<=r){
		if(q[i]<=q[j]){
			cmp[k++]=a[i++];
		}
		else{
			res+=mid-i+1;	//[i,mid]之间的所有数都可以构成逆序对 
			cmp[k++]=q[j++];
		}
	}
	
	while(i<=mid) cmp[k++]=q[i++];
	while(j<=r) cmp[k++]=q[j++];
	
	for(int i=l,j=0;i<=r;i++,j++) q[i]=cmp[j];
}

int main(){
	int n;
	cin >> n;
	
	for (int i=0; i<n; i++)	//	读入Ai 
		cin >> q[i];
	
	merge_sort(q,0,n-1);
	cout<<res;
	
	return 0;
}
