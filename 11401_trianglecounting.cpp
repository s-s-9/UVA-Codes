#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, n, layers, lby2, tr[1000001];
    tr[0] = 0; tr[1] = 0; tr[2] = 0; tr[3] = 0;
    for(i = 4; i<=1000000; i++){
        layers = i-3;
        if(layers%2==0){
            lby2 = layers/2;
            tr[i] = tr[i-1] + (lby2*(lby2+1));
        }
        else{
            lby2 = layers/2;
            tr[i] = tr[i-1] + (lby2*(lby2+1)) + (lby2+1);
        }
    }
    while(scanf("%lld", &n)==1){
        if(n<3){
            break;
        }
        printf("%lld\n", tr[n]);
    }
    return 0;
}
