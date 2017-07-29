#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, a, b, counter;
    while(scanf("%lld %lld", &a, &b)==2){
        if(a==0 && b==0){
            break;
        }
        counter = 0;
        for(i = 1; i<=b; i++){
            if(((i*i)>=a) && ((i*i)<=b)){
                counter++;
            }
        }
        printf("%lld\n", counter);
    }
    return 0;
}
