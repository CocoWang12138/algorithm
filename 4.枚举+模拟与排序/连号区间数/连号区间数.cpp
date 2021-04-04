#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10010, INF = 100000000;
int n, a[N];
int res=0;

int main(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=0; i<n; i++){ //枚举区间左端点 
        int minv = INF, maxv = -INF;
        for(int j=i; j<n; j++){ //枚举区间右端点，起始点为左端点i 
            minv=min(minv, a[j]);
            maxv=max(maxv, a[j]);
            if (maxv - minv == j-i) res++;  //如果递增排序后的区间跨度恰好等于区间的长度 
        }
    }

    cout << res <<endl;
}
