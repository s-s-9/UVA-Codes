#include<bits/stdc++.h>

using namespace std;

vector<int> prices, weights;
int recursions, dp[31][1001];

int knapsack(int currentweight, int index, int capacity)
{
    recursions++;
    //return the current price if current index has exceeded the last index
    if(index==prices.size()){
        dp[currentweight][index] = 0;
        return dp[currentweight][index];
    }
    //if value has been calculated before, send the saved value
    //cout<<"looking for dp ["<<currentweight<<", "<<index<<", "<<currentprice<<"]: "<<dp[currentweight][index][currentprice]<<endl;
    if(dp[currentweight][index]!=-1){
        //cout<<"Returning from dp: "<<currentweight<<", "<<index<<"-->"<<dp[currentweight][index]<<endl;
        return dp[currentweight][index];
    }
    //all the options
    int option, option1, option2;
    //if the element is overweight then cannot take this one
    if((currentweight+weights[index])>capacity){
        option = knapsack(currentweight, index+1, capacity);
        //return option;
        //cout<<"Returning from if..."<<endl;
        dp[currentweight][index] = option;
    }
    //if the weight is tolerable, then either take it or don't
    else{
        option1 = prices[index] + knapsack(currentweight+weights[index], index+1, capacity);
        option2 = knapsack(currentweight, index+1, capacity);
        //return max(option1, option2);
        //cout<<"Returning from else..."<<endl;
        dp[currentweight][index] = max(option1, option2);
    }
    //cout<<"putting dp ["<<currentweight<<", "<<index<<", "<<currentprice<<"]: "<<dp[currentweight][index][currentprice]<<endl;
    return dp[currentweight][index];
}

int main()
{
    int testcases, i, j, totalobjects, price, weight, familymembers, membercapacity, total;
    vector<int> capacities;
    scanf("%d", &testcases);
    for(i = 0; i<testcases; i++){
        prices.clear();
        weights.clear();
        capacities.clear();
        scanf("%d", &totalobjects);
        for(j = 0; j<totalobjects; j++){
            scanf("%d %d", &price, &weight);
            prices.push_back(price);
            weights.push_back(weight);
        }
        scanf("%d", &familymembers);
        for(j = 0; j<familymembers; j++){
            scanf("%d", &membercapacity);
            capacities.push_back(membercapacity);
        }
        total = 0;
        for(j = 0; j<capacities.size(); j++){
            recursions = 0;
            for(int k = 0; k<=capacities[j]; k++){
                for(int l = 0; l<=totalobjects; l++){
                    dp[k][l] = -1;
                }
            }
            int current = knapsack(0, 0, capacities[j]);
            //cout<<"Current: "<<current<<endl;
            total+=current;
        }
        printf("%d\n", total);
    }
    return 0;
}
