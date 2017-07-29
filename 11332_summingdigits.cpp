#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, counter;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        counter = 0;
        do{
            counter = 0;
            while(n>0){
                counter+=(n%10);
                n/=10;
            }
            n = counter;
        }while(counter>=10);
        printf("%d\n", counter);
    }
    return 0;
}
