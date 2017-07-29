#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, current, a, b, c, temp, result;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d %d %d", &a, &b, &c);
        current = a+b;
        result = 0;
        while(current>=c){
            result+=(current/c);
            temp = current;
            current = (temp/c) + (temp%c);
        }
        printf("%d\n", result);
    }
    return 0;
}
