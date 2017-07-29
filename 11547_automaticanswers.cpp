#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, p, result;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &p);
        result = ((((((((p*567)/9)+7492)*235)/47)-498)/10))%10;
        if(result<0){
            printf("%d\n", result*(-1));
        }
        else{
            printf("%d\n", result);
        }
    }
    return 0;
}
