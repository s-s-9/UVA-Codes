#include<bits/stdc++.h>

using namespace std;

int n, nums[100][100], dp[100][100][1000];

int maxsum(int row, int col, int sumsofar)
{
    if(row==n || col==n){
        return 0;
    }
    if(dp[row][col][sumsofar]!=-1){
        return dp[row][col][sumsofar];
    }
    int option1 = nums[row][col] + maxsum(row, col+1, sumsofar+nums[row][col]);
    int option2 = nums[row][col] + maxsum(row+1, col, sumsofar+nums[row][col]);
    //int option3 = maxsum(row, col+1, 0);
    //int option4 = maxsum(row+1, col, 0);
    int result = max(option1, option2);
    //result = max(result,option3);
    //result = max(result, option4);
    return dp[row][col][sumsofar] = result;
}

int main()
{
    while(scanf("%d", &n)==1){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                scanf("%d", &nums[i][j]);
            }
        }
        memset(dp, -1, sizeof(dp));
        cout<<maxsum(0, 0, 0)<<endl;
    }

    return 0;
}
