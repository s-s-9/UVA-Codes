#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    long long int money, tax;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        scanf("%lld", &money);
        tax = 0;
        if(money<=180000){
            printf("Case %d: 0\n", i);
            continue;
        }
        if(money>180000){
            tax+=0;
            money-=180000;
        }
        if(money<300000){
            if(money%10==0){
                tax+=(money/10);
            }
            else{
                tax+=((money/10)+1);
            }
            money = 0;
        }
        else{
            tax+=(30000);
            money-=300000;
        }
        if(money<400000){
            if(((money*15)%100)==0){
                tax+=((money*15)/100);
            }
            else{
                tax+=(((money*15)/100)+1);
            }
            money = 0;
        }
        else{
            tax+=((400000*15)/100);
            money-=400000;
        }
        if(money<300000){
            if(money%5==0){
                tax+=(money/5);
            }
            else{
                tax+=((money/5) + 1);
            }
            money = 0;
        }
        else{
            tax+=(300000/5);
            money-=300000;
        }
        if(money>0){
            if(money%4==0){
                tax+=(money/4);
            }
            else{
                tax+=((money/4) + 1);
            }
            money = 0;
        }
        if(tax<2000){
            printf("Case %d: 2000\n", i);
        }
        else{
            printf("Case %d: %lld\n", i, tax);
        }
    }
    return 0;
}
