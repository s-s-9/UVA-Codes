
#include<bits/stdc++.h>

using namespace std;

int coins[21], n, recursions;
long long int dp[21][10001];

long long int coinchange(int index, int currentsum)
{
    recursions++;
    if(index==21){
        return 0;
    }
    if(currentsum==0){
        return 1;
    }
    if(dp[index][currentsum]!=-1){
        return dp[index][currentsum];
    }
    if((currentsum-coins[index])<0){
        return dp[index][currentsum] = coinchange(index+1, currentsum);
    }
    long long int option1 = coinchange(index, currentsum-coins[index]);
    long long int option2 = coinchange(index+1, currentsum);
    return dp[index][currentsum] = option1+option2;
}

int main()
{
    for(int i = 1; i<=21; i++){
        coins[i-1] = i*i*i;
    }
    memset(dp, -1, sizeof(dp));
    while(scanf("%d", &n)==1){
        recursions = 0;
        cout<<coinchange(0, n)<<endl;
    }
    return 0;
}
