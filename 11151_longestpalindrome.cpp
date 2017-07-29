#include<bits/stdc++.h>

using namespace std;

string s1, s2;
int dp[1001][1001];

int lcs(int index1, int index2)
{
    if(index1==s1.size() || index2==s2.size()){
        return 0;
    }
    if(dp[index1][index2]!=-1){
        return dp[index1][index2];
    }
    if(s1[index1]==s2[index2]){
        return dp[index1][index2] = 1+lcs(index1+1, index2+1);
    }
    int option1 = lcs(index1+1, index2);
    int option2 = lcs(index1, index2+1);
    return dp[index1][index2] = max(option1, option2);
}

int main()
{
    int t;
    string s;
    scanf("%d", &t);
    getchar();
    for(int i = 0; i<t; i++){
        getline(cin, s);
        s1 = s;
        reverse(s.begin(), s.end());
        s2 = s;
        //cout<<s1<<endl<<s2<<endl;
        memset(dp, -1, sizeof(dp));
        cout<<lcs(0, 0)<<endl;
    }
    return 0;
}
