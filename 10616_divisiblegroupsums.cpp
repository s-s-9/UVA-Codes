#include<bits/stdc++.h>

using namespace std;

vector<long long int> nums;
long long int D, M, dp[201][201][100];

long long int mod(long long int num, long long int m)
{
    if(num>=0) return num%m;
    return (m + (num % m)) % m;
}

long long int knapsack(long long int index, long long int taken, long long int sumsofar)
{
    //if the total numbers chosen so far equals to the capacity then check if this sum satisfies the condition
    if(taken==M){
        if(sumsofar==0){
            //cout<<"Sum so far..."<<sumsofar<<". D = "<<D<<endl;
            return 1;
        }
        else{
            return 0;
        }
    }
    //if exceeded the end of list
    if(index==nums.size()){
        return 0;
    }
    //if this was calculated before then return previously calculated result
    if(dp[index][taken][sumsofar]!=-1){
        //cout<<"DP: "<<index<<", "<<taken<<", "<<sumsofar<<endl;
        return dp[index][taken][sumsofar];
    }

    //two options, including the current number, and not including the current number
    int option1, option2;
    option1 = knapsack(index+1, taken+1, mod(nums[index]+sumsofar, D));
    option2 = knapsack(index+1, taken, sumsofar);
    //return option1+option2;
    dp[index][taken][sumsofar] = option1+option2;
    return dp[index][taken][sumsofar];
}

int main()
{
    long long int numbers, queries, num, i, counter;
    counter = 1;
    while(scanf("%lld %lld", &numbers, &queries)==2){
        if(numbers==0 && queries==0){
            break;
        }
        nums.clear();
        for(i = 0; i<numbers; i++){
            scanf("%lld", &num);
            nums.push_back(num);
        }
        cout<<"SET "<<counter<<":"<<endl;
        for(i = 1; i<=queries; i++){
            scanf("%lld %lld", &D, &M);
            memset(dp, -1, sizeof(dp));
            cout<<"QUERY "<<i<<": ";
            cout<<knapsack(0, 0, 0)<<endl;
        }
        counter++;
    }
    return 0;
}
