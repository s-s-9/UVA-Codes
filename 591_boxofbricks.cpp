#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s, n, p[200], i, avg, counter, result;
    s = 0;
    while(scanf("%d", &n)==1){
        s++;
        if(n==0){
            break;
        }
        counter = 0;
        result = 0;
        for(i = 0; i<n; i++){
            scanf("%d", &p[i]);
            counter+=p[i];
        }
        avg = counter/n;
        for(i = 0; i<n; i++){
            if(p[i]>avg){
                result+=(p[i]-avg);
            }
            else{
                result+=(avg-p[i]);
            }
        }
        printf("Set #%d\n", s);
        printf("The minimum number of moves is %d.\n\n", result/2);
    }
    return 0;
}
