#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> coins;
    int dp[10000], n, i, j, current, flag;

    coins.push_back(1);
    coins.push_back(5);
    coins.push_back(10);
    coins.push_back(25);
    coins.push_back(50);

    for(i = 0; i<10000; i++){
        dp[i] = 0;
    }

    for(i = 0; i<coins.size(); i++){
        current = coins[i];
        flag = 0;
        for(j = current; j<10000; j++){
            if(flag==1){
                dp[j] += dp[j-current];
            }
            else{
                dp[j] += (dp[j-current] + 1);
                flag = 1;
            }
        }
    }

    while(scanf("%d", &n)==1){
        if(n==0){
            printf("1\n");
        }
        else{
            printf("%d\n", dp[n]);
        }
    }

    return 0;
}
