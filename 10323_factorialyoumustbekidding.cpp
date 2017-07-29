#include<bits/stdc++.h>

using namespace std;

long long int fact(long long int n)
{
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    long long int i;
    while(scanf("%lld", &i)==1){
        if(i<0 && i%-2==0){
            printf("Underflow!\n");
        }
        else if(i<0 && i%2==-1){
            printf("Overflow!\n");
        }
        else if(i<8){
            printf("Underflow!\n");
        }
        else if(i>13){
            printf("Overflow!\n");
        }
        else{
            printf("%lld\n", fact(i));
        }
    }
    return 0;
}
