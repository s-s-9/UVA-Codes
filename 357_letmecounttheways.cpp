#include<bits/stdc++.h>

using namespace std;

int coins[5], n, recursions;
long long int dp[5][30001];

/*long long int coinchange(int index, int currentsum)
{
    //cout<<"Index: "<<index<<", Currentsum: "<<currentsum<<endl;
    recursions++;
    //if exceeded the end of the list return 0
    if(index>=5){
        return 0;
    }
    //if this combination made n, then return 1
    if(currentsum==n){
        return 1;
    }
    //if result was calculated before then return previously calculated result
    if(dp[index][currentsum]!=-1){
        return dp[index][currentsum];
    }
    //if the current coin can't be taken then move on to the next one
    if((currentsum+coins[index])>n){
        dp[index][currentsum] = coinchange(index+1, currentsum);
        return dp[index][currentsum];
    }
    //take the current coin
    long long int option1 = coinchange(index, currentsum+coins[index]);
    //don't take the current coin
    long long int option2 = coinchange(index+1, currentsum);
    dp[index][currentsum] = option1+option2;
    return dp[index][currentsum];
}*/

long long int coinchange(int index, int currentsum)
{
    recursions++;
    if(index==5){
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
    long long int result;
    coins[0] = 1;   coins[1] = 5;   coins[2] = 10;  coins[3] = 25;  coins[4] = 50;
    memset(dp, -1, sizeof(dp));
    while(scanf("%d", &n)==1){
        recursions = 0;
        result = coinchange(0, n);
        //cout<<recursions<<" Recursions."<<endl;
        if(result!=1){
            cout<<"There are "<<result<<" ways to produce "<<n<<" cents change."<<endl;
        }
        else{
            cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        }
    }
    return 0;
}
