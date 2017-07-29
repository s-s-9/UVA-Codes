#include<bits/stdc++.h>

using namespace std;

int totaltime, w, dp[31][1001], counter;
vector<int> depths, values, finaldepths, finalvalues;

int knapsack(int index, int timesofar)
{
    if(index==values.size()){
        return 0;
    }
    if(dp[index][timesofar]!=-1){
        return dp[index][timesofar];
    }
    if((((w*depths[index])+(2*w*depths[index]))+timesofar)>totaltime){
        return dp[index][timesofar] = knapsack(index+1, timesofar);
    }
    int option1 = values[index] + knapsack(index+1, ((w*depths[index])+(2*w*depths[index])+timesofar));
    int option2 = knapsack(index+1, timesofar);
    return dp[index][timesofar] = max(option1, option2);
}

void printresult(int index, int timesofar)
{
    if(index==values.size()){
        return;
    }
    if((((w*depths[index])+(2*w*depths[index]))+timesofar)>totaltime){
        return printresult(index+1, timesofar);
    }
    if(dp[index][timesofar]>dp[index+1][timesofar]){
        counter++;
        finaldepths.push_back(depths[index]);
        finalvalues.push_back(values[index]);
        printresult(index+1, ((w*depths[index])+(2*w*depths[index])+timesofar));
    }
    else{
        printresult(index+1, timesofar);
    }
}

int main()
{
    int t, depth, value;
    int c = 1;
    while(scanf("%d %d", &totaltime, &w)==2){
        scanf("%d", &t);
        depths.clear();
        values.clear();
        finaldepths.clear();
        finalvalues.clear();
        counter = 0;
        for(int i = 0; i<t; i++){
            scanf("%d %d", &depth, &value);
            depths.push_back(depth);
            values.push_back(value);
            memset(dp, -1, sizeof(dp));
        }
        if(c>1){
            cout<<endl;
        }
        cout<<knapsack(0, 0)<<endl;
        printresult(0, 0);
        cout<<counter<<endl;
        for(int i = 0; i<finaldepths.size(); i++){
            cout<<finaldepths[i]<<" "<<finalvalues[i]<<endl;
        }
        c++;
    }
    return 0;
}
