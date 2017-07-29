#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int nminusm, n, i;
    vector<unsigned long long int> result;
    while(scanf("%llu", &nminusm)==1){
        if(nminusm==0){
            break;
        }
        result.clear();
        n = (nminusm/9)*10;
        for(i = n-10; i<=n+10; i++){
            if((i - (i/10))==nminusm){
                result.push_back(i);
            }
        }
        printf("%llu", result[0]);
        for(i = 1; i<result.size(); i++){
            printf(" %llu", result[i]);
        }
        printf("\n");
    }
    return 0;
}
