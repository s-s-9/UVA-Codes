#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p1, p2, round;
    while(scanf("%d %d %d", &n, &p1, &p2)==3){
        round = 0;
        while(p1!=p2){
            if(p1%2==1){
                p1++;
            }
            if(p2%2==1){
                p2++;
            }
            p1/=2;
            p2/=2;
            round++;
        }
        printf("%d\n", round);
    }
    return 0;
}
