#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int num, lim, originalnum, c, counter;
    c = 1;
    while(scanf("%lld %lld", &num, &lim)==2){
        if(num<0 && lim<0){
            break;
        }
        counter = 0;
        originalnum = num;
        while((num<=lim) && (num>1)){
            counter++;
            if(num%2==0){
                num/=2;
            }
            else{
                num = (num*3)+1;
            }
        }
        if(num==1){
            counter++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", c, originalnum, lim, counter);
        c++;
    }
    return 0;
}
