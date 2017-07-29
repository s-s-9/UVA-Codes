#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, result, temp;
    while(scanf("%d %d", &a, &b)==2){
        result = a;
        while(a>=b){
            result+=(a/b);
            temp = a;
            a = (temp/b) + (temp%b);
        }
        printf("%d\n", result);
    }
    return 0;
}
