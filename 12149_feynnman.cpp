#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, result;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        result = 0;
        for(i = 1; i<=n; i++){
            result+=(i*i);
        }
        printf("%d\n", result);
    }
    return 0;
}
