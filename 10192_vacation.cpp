#include<bits/stdc++.h>

using namespace std;

int dp[1001][1001];
string s1, s2;

int lcs(int index1, int index2)
{
    if(index1==s1.size() || index2==s2.size()){
        return 0;
    }
    if(dp[index1][index2]!=-1){
        return dp[index1][index2];
    }
    if(s1[index1]==s2[index2]){
        return dp[index1][index2] = 1 + lcs(index1+1, index2+1);
    }
    int option1 = lcs(index1+1, index2);
    int option2 = lcs(index1, index2+1);
    return dp[index1][index2] = max(option1, option2);
}

int main()
{
    freopen("vacation.txt", "w", stdout);
    int c = 1;
    while(getline(cin, s1)){
        if(s1[0]=='#'){
            break;
        }
        getline(cin, s2);
        memset(dp, -1, sizeof(dp));
        int result = lcs(0, 0);
        printf("Case #%d: you can visit at most %d cities.\n", c, result);
        c++;
    }
    return 0;
}
