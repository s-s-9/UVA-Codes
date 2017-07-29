#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int h, o;
    while(scanf("%lld %lld", &h, &o)==2){
        if(h>o){
            printf("%lld\n", h - o);
        }
        else{
            printf("%lld\n", o-h);
        }
    }
    return 0;
}
