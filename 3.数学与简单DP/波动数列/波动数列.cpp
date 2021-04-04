/*
输入格式
共一行，包含四个整数 n,s,a,b，含义如前面所述。

输出格式
共一行，包含一个整数，表示满足条件的方案数。

由于这个数很大，请输出方案数除以 100000007 的余数。
*/
#include <bits/stdc++.h>

using namespace std;

const int N=1010, MOD=100000007;
int f[N][N];

int get_mod(int a, int b){
    return (a%b+b)%b;
}

int main(){
    int n, s, a, b;
    cin>>n>>s>>a>>b;

    f[0][0]=1;

    for(int i=1; i<n; i++)
        for(int j=0; j<=n; j++)
            f[i][j] = (f[i-1][get_mod(j-i*a, n)] + f[i-1][get_mod(j+b*i, n)]) % MOD;

    cout << f[n-1][s%n] << endl;    
}
