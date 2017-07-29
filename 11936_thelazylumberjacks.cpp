#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    long long int a, b, c;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%lld %lld %lld", &a, &b, &c);
        if(((a+b)>c) && ((a+c)>b) && ((b+c)>a)){
            printf("OK\n");
        }
        else{
            printf("Wrong!!\n");
        }
    }
    return 0;
}
