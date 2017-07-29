#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, m, n, result;
    scanf("%d", &t);
    for(i = 0; i<t; i++){
        scanf("%d %d", &m, &n);
        m-=2;
        n-=2;
        result = 0;
        if(m%3==0){
            result+=(m/3);
        }
        else{
            result+=((m/3)+1);
        }
        if(n%3==0){
            result*=(n/3);
        }
        else{
            result*=((n/3)+1);
        }
        printf("%d\n", result);
    }
    return 0;
}
