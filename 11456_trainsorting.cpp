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

int main()
{
    int t, c, car;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%d", &c);
        for(int j = 0; j<c; j++){
            scanf("%d", &car);
            nums.push_back(car);
        }
        dp.clear();
        cout<<lis(0, -2147483646)<<endl;
    }
    return 0;
}
