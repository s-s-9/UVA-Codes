#include<bits/stdc++.h>

using namespace std;

long long int bigmod(long long int n, long long int m, long long int d)
{
    if(m==0){
        return 1;
    }
    if(m%2==0){
        long long int i = bigmod(n, m/2, d);
        return ((i%d)*(i%d))%d;
    }
    else{
        return ((n%d)*(bigmod(n, m-1, d)%d))%d;
    }
}

int main()
{
    long long int n, m, d;
    while(scanf("%lld %lld %lld", &n, &m, &d)==3){
        cout<<bigmod(n, m, d)<<endl;
    }
    return 0;
}
