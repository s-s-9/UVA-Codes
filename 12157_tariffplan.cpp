#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, p, seconds, mile, juice;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        scanf("%d", &p);
        mile = 0;
        juice = 0;
        for(j = 0; j<p; j++){
            scanf("%d", &seconds);
            mile+=((seconds/30)*10);
            mile+=10;
            juice+=((seconds/60)*15);
            juice+=15;
        }
        if(mile==juice){
            printf("Case %d: Mile Juice %d\n", i, juice);
        }
        else if(mile<juice){
            printf("Case %d: Mile %d\n", i, mile);
        }
        else{
            printf("Case %d: Juice %d\n", i, juice);
        }
    }
    return 0;
}
