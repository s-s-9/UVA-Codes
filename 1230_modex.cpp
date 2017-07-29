#include<bits/stdc++.h>

using namespace std;

long long int bigmod(long long int n, long long int m, long long int d)
{
    if(m==0){
        return 1;
    }
    if(m%2==0){
        long long int ans = bigmod(n, m/2, d);
        return ((ans%d)*(ans%d))%d;
    }
    else{
        return ((n%d)*(bigmod(n, m-1, d)%d))%d;
    }
}

int main()
{
    int t, zero;
    long long int m, n, d;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%lld %lld %lld", &n, &m, &d);
        cout<<bigmod(n, m, d)<<endl;
    }
    scanf("%d", &zero);
    return 0;
}
