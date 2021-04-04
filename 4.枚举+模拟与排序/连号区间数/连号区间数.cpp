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

    for(int i=0; i<n; i++){ //ö��������˵� 
        int minv = INF, maxv = -INF;
        for(int j=i; j<n; j++){ //ö�������Ҷ˵㣬��ʼ��Ϊ��˵�i 
            minv=min(minv, a[j]);
            maxv=max(maxv, a[j]);
            if (maxv - minv == j-i) res++;  //�������������������ǡ�õ�������ĳ��� 
        }
    }

    cout << res <<endl;
}
