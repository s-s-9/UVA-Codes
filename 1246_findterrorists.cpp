#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sieve[10000], i, j, k, current, n, l, h;
    map<int, int> dupli;
    vector<int> terr, factors;
    for(i = 0; i<10000; i++){
        sieve[i] = 0;
    }
    sieve[0] = 1;    sieve[1] = 1;
    for(i = 2; i<10000; i++){
        if(sieve[i]==0){
            for(j = i+i; j<10000; j+=i){
                sieve[j] = 1;
            }
        }
    }
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d %d", &l, &h);
        if(l>h){
            swap(l, h);
        }
        terr.clear();
        for(j = l; j<=h; j++){
            dupli.clear();
            factors.clear();
            current = j;
            for(k = 1; k<=sqrt(current); k++){
                if(current%k==0){
                    if(dupli[k]==0){
                        dupli[k] = 1;
                        factors.push_back(k);
                    }
                    if(dupli[current/k]==0){
                        dupli[current/k] = 1;
                        factors.push_back(current/k);
                    }
                }
            }
            if(sieve[factors.size()]==0){
                terr.push_back(current);
            }
        }
        if(terr.size()==0){
            printf("-1\n");
        }
        else{
            for(j = 0; j<terr.size(); j++){
                if(j==0){
                    printf("%d", terr[j]);
                }
                else{
                    printf(" %d", terr[j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
