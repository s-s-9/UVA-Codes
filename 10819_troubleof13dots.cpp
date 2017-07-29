#include<bits/stdc++.h>

using namespace std;

vector<int> prices, priorities;
int dp[101][11001], budget, itsdone, totalprice;

int knapsack(int index, int pricesofar)
{

    if(pricesofar>budget && budget<=1800){
        return -10000;
    }
    if(pricesofar>(budget+200)){
        return -10000;
    }
    if(index==priorities.size()){
        if(pricesofar>budget && pricesofar<=2000){
            return -10000;
        }
        return 0;
    }
    if(dp[index][pricesofar]!=-1){
        return dp[index][pricesofar];
    }
    int option1, option2;

        option1 = priorities[index] + knapsack(index+1, pricesofar+prices[index]);
        option2 = knapsack(index+1, pricesofar);
        dp[index][pricesofar] = max(option1, option2);

    return dp[index][pricesofar];
}

int main()
{
    //freopen("13dots.txt", "w", stdout);
    int things, i, price, priority;
    while(scanf("%d %d", &budget, &things)==2){
        prices.clear();
        priorities.clear();
        for(i = 0; i<things; i++){
            scanf("%d %d", &price, &priority);
            prices.push_back(price);
            priorities.push_back(priority);
        }
        memset(dp, -1, sizeof(dp));
        int result = knapsack(0, 0);

        cout<<result<<endl;
    }
    return 0;
}
