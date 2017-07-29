#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, e, counter1, counter2, c;
    c = 1;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        counter1 = 0;
        counter2 = 0;
        for(i = 0; i<n; i++){
            scanf("%d", &e);
            if(e==0){
                counter1++;
            }
            else{
                counter2++;
            }
        }
        printf("Case %d: %d\n", c, counter2-counter1);
        c++;
    }
    return 0;
}
