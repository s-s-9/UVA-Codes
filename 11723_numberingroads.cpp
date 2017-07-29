#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter, r, n;
    counter = 1;
    while(scanf("%d %d", &r, &n)==2){
        if(r==0 && n==0){
            break;
        }
        if(r<=n){
            printf("Case %d: 0\n", counter);
        }
        else if(r%n==0){
            if(((r/n)-1)>26){
                printf("Case %d: impossible\n", counter);
            }
            else{
                printf("Case %d: %d\n", counter, ((r/n)-1) );
            }
        }
        else{
            if(r/n>26){
                printf("Case %d: impossible\n", counter);
            }
            else{
                printf("Case %d: %d\n", counter, (r/n) );
            }
        }
        counter++;
    }
    return 0;
}
