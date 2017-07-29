#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b, c, d, l, counter, i, fx;
    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &l)==5){
        if(a==0 && b==0 && c==0 && d==0 && l==0){
            break;
        }
        counter = 0;
        for(i = 0; i<=l; i++){
            fx = (a*i*i) + (b*i) + c;
            if((fx%d)==0){
                counter++;
            }
        }
        printf("%lld\n", counter);
    }
    return 0;
}
