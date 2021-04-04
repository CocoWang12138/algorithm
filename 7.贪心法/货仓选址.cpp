#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

typedef long long LL;

const int N = 10010;

int n, a[N];

int main(){
	scanf("%d", &n);
	for (int i=0; i<n; i++) scanf("%d", &a[i]);
	sort(a, a+n);	//¶Ô a ÅÅÐò
	
	int mid = a[n / 2];
	LL res = 0;
	for (int i=0; i<n; i++) res += abs(a[i] - mid);
	
	printf("%lld\n", res);
	
	return 0;
}
