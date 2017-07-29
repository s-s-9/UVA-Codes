#include<bits/stdc++.h>

using namespace std;

int numbers[10001];
long long int dp[101][101][10001];
int n, k;

long long int add(int sumsofar, int numberstaken, int index)
{
    //cout<<"Alive..."<<sumsofar<<", "<<numberstaken<<", "<<currentnumber<<endl;
    //if the current sum is equal to n, then return 1
    if(sumsofar==n && numberstaken==k){
        cout<<numbers[index]<<endl;
        return 1;
    }
    //if current number is greater than n, then return
    if(index>(n+1)*k){
        return 0;
    }
    //don't take any more number if it makes the numbers taken > k
    if(numberstaken==k){
        return 0;
    }
    //if this state has been calculated before then return the result of that calculation
    if(dp[sumsofar][numberstaken][index]!=-1){
        cout<<"Using DP..."<<endl;
        return dp[sumsofar][numberstaken][index];
    }
     //if adding this number yields to a larger number than n, then don't take it
    if((sumsofar+numbers[index])>n){
        return dp[sumsofar][numberstaken][index] = add(sumsofar, numberstaken, index+1);
    }
    //take the current number and go to next number
    long long int option1 = add(sumsofar+numbers[index], numberstaken+1, index+1);
    //don't take the current number and go to next number
    long long int option2 = add(sumsofar, numberstaken, index+1);
    return dp[sumsofar][numberstaken][index] = (option1%1000000)+(option2%1000000);
}

int main()
{
    while(scanf("%d %d", &n, &k)==2){
        if(n==0 && k==0){
            break;
        }
        for(int i = 0; i<=(n+1)*k; i++){
            numbers[i] = i%(n+1);
        }
        memset(dp, -1, sizeof(dp));
        long long int result = add(0, 0, 0);
        cout<<result<<endl;


    }
    return 0;
}
