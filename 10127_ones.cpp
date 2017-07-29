#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int counter, div, n, i;
    while(scanf("%lld", &n)==1){
        if(n==0){
            printf("0\n");
            continue;
        }
        div = 1;
        counter = 1;
        while((div%n)!=0){
            div = ((div%n)*10) + 1;
            counter++;
        }
        printf("%lld\n", counter);
    }
    return 0;
}
