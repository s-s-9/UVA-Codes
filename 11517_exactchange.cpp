#include<bits/stdc++.h>

using namespace std;

int dp[101][10001], amountpayable, actualamountpayable;
vector<int> coinvalues;

int payableamount(int index, int sumsofar)
{
    if(index==coinvalues.size()){
        if(sumsofar>=amountpayable){
            return 0;
        }
        return 10000;
    }
    if(sumsofar>=amountpayable){
        return 0;
    }
    if(dp[index][sumsofar]!=-1){
        return dp[index][sumsofar];
    }
    int option1 = coinvalues[index]+payableamount(index+1, sumsofar+coinvalues[index]);
    int option2 = payableamount(index+1, sumsofar);
    return dp[index][sumsofar] = min(option1, option2);
}

int numberofcoins(int index, int sumsofar)
{
    if(index==coinvalues.size()){
        if(sumsofar==actualamountpayable){
            return 0;
        }
        return 10000;
    }
    if(sumsofar==actualamountpayable){
        return 0;
    }
    if(dp[index][sumsofar]!=-1){
        return dp[index][sumsofar];
    }
    if(coinvalues[index]+sumsofar>actualamountpayable){
        return dp[index][sumsofar] = numberofcoins(index+1, sumsofar);
    }
    int option1 = 1 + numberofcoins(index+1, sumsofar+coinvalues[index]);
    int option2 = numberofcoins(index+1, sumsofar);
    return dp[index][sumsofar] = min(option1, option2);
}

int main()
{
    int testcases, coins, coinvalue;
    scanf("%d", &testcases);
    for(int i = 0; i<testcases; i++){
        coinvalues.clear();
        memset(dp, -1, sizeof(dp));
        scanf("%d", &amountpayable);
        scanf("%d", &coins);
        for(int j = 0; j<coins; j++){
            scanf("%d", &coinvalue);
            coinvalues.push_back(coinvalue);
        }
        actualamountpayable = payableamount(0, 0);
        memset(dp, -1, sizeof(dp));
        int result = numberofcoins(0, 0);
        cout<<actualamountpayable<<" "<<result<<endl;
    }
    return 0;
}
