#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, current, a, b, c, temp, result;
    while(scanf("%d", &n)==1){
        current = n;
        result = n;
        if(n==2){
            result = 3;
        }
        while(current>=3){
            result+=(current/3);
            temp = current;
            current = (temp/3) + (temp%3);
            if(current==2){
                current++;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}

