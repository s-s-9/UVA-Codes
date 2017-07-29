#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, i, j, counter;
    scanf("%d", &t);
    for(i = 1; i<=t; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        counter = 0;
        for(j = a; j<=b; j++){
            if((j%2)==1){
                counter+=j;
            }
        }
        printf("Case %d: %d\n", i, counter);
    }
    return 0;
}
