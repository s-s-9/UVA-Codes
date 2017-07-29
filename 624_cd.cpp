#include<bits/stdc++.h>

using namespace std;

vector<int> lengths;
int dp[100001][21], result;

int optimize(int currenttotal, int index, int capacity)
{
    //if result has been calculated before then return result
    if(dp[currenttotal][index]!=-1){
        return dp[currenttotal][index];
    }
    //if exceeded the end of the list
    if(index==lengths.size()){
        return 0;
    }

    //2 options. take it or don't
    int option1, option2;
    //if length of this is not within the capacity then cannot take it
    if((lengths[index] + currenttotal) > capacity){
        dp[currenttotal][index] = optimize(currenttotal, index+1, capacity);
    }
    else{
        option1 = lengths[index] + optimize(currenttotal+lengths[index], index+1, capacity);
        option2 = optimize(currenttotal, index+1, capacity);
        dp[currenttotal][index] = max(option1, option2);

    }
    return dp[currenttotal][index];
}

void printresult(int currenttotal, int index, int capacity)
{
    //cout<<"Called with "<<currenttotal<<", "<<index<<endl;
    //if end of list is reached, return
    if(index==lengths.size()){
        return;
    }
    //if this one should be taken
    if(dp[currenttotal][index]>dp[currenttotal][index+1]){
        if(currenttotal+lengths[index]<=capacity){
            cout<<lengths[index]<<" ";
        }
        //cout<<lengths[index]<<" ";
        printresult(currenttotal+lengths[index], index+1, capacity);
    }
    else{
        printresult(currenttotal, index+1, capacity);
    }
}

int main()
{
    int capacity, songs, i, j, length;
    while(scanf("%d", &capacity)==1){
        scanf("%d", &songs);
        lengths.clear();
        for(i = 0; i<=20*capacity; i++){
            for(j = 0; j<=20; j++){
                dp[i][j] = -1;
            }
        }
        //result.clear();
        for(i = 0; i<songs; i++){
            scanf("%d", &length);
            lengths.push_back(length);
        }
        result = optimize(0, 0, capacity);
        printresult(0, 0, capacity);
        cout<<"sum:"<<result<<endl;
    }
    return 0;
}
