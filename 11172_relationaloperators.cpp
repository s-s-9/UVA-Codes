#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int f, s;
    int n, i;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%lld %lld", &f, &s);
        if(f<s){
            printf("<\n");
        }
        else if(f>s){
            printf(">\n");
        }
        else if(f==s){
            printf("=\n");
        }
    }
    return 0;
}
