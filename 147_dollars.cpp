#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> coins;
    long long int i, j, n, done, current, dp[40000];
    double fn;

    for(i = 0; i<40000; i++){
        dp[i] = 0;
    }

    coins.push_back(5);
    coins.push_back(10);
    coins.push_back(20);
    coins.push_back(50);
    coins.push_back(100);
    coins.push_back(200);
    coins.push_back(500);
    coins.push_back(1000);
    coins.push_back(2000);
    coins.push_back(5000);
    coins.push_back(10000);



    for(i = 0; i<coins.size(); i++){
        current = coins[i];
        done = 0;
        for(j = 0; j<40000; j++){
            n = j;
            if(current>n){
                continue;
            }
            else{
                if(done==0){
                    dp[n] += (dp[n - current] + 1);
                    done = 1;
                }
                else{
                    dp[n] += (dp[n - current]);
                }
                //printf("dp[%d] (%d): dp[%d] (%d) + 1\n", n, dp[n], n-current, dp[n-current]);
            }
        }
    }

    while(scanf("%lf", &fn)==1){
        if(fn==0.0){
            break;
        }
        n = int(fn*100.00 + 0.00001);
        //printf("%lld\n", n);
        printf("%6.2f%17lld\n", fn, dp[n]);
    }
    return 0;
}
