#include<bits/stdc++.h>

using namespace std;

vector<long long int> nums;
map<pair<int, long long int>, int > dp;

int lis(int index, long long int maxsofar)
{
    if(index==nums.size()){
        return 0;
    }
    pair<int, long long int> p;
    p = make_pair (index, maxsofar);
    if(dp[p]!=0){
        return dp[p];
    }
    if(nums[index]<=maxsofar){
        return dp[p] = lis(index+1, maxsofar);
    }
    int option1 = 1 + lis(index+1, nums[index]);
    int option2 = lis(index+1, maxsofar);
    return dp[p] = max(option1, option2);
}

void printresult(int index, long long int maxsofar)
{
    if(index==nums.size()){
        return;
    }
    pair<int, long long int> p1, p2;
    p1 = make_pair (index, maxsofar);
    p2 = make_pair (index+1, maxsofar);
    if(nums[index]<=maxsofar){
        return printresult(index+1, maxsofar);
    }
    if(dp[p1]>dp[p2]){
        cout<<nums[index]<<endl;
        return printresult(index+1, nums[index]);
    }
    else{
        return printresult(index+1, maxsofar);
    }
}

int main()
{
    //freopen("whatgoesup.txt", "w", stdout);
    long long int num;
    while(cin>>num){
        nums.push_back(num);
    }
    cout<<lis(0, -2147483646)<<endl<<"-"<<endl;
    printresult(0, -2147483646);
    return 0;
}
