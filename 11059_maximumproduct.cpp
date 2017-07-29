#include<bits/stdc++.h>

using namespace std;

long long int dp[100][100];

long long int maxprod(vector<long long int> numbers, long long int index, long long int maxsofar)
{
    //if end of list, return the maximum value found so far
    if(index==numbers.size()){
        return maxsofar;
    }
    //no dp because maxsofar might be too large to be an index if the dp array
    /*if(dp[index][maxsofar]!=0){
        cout<<"returning from dp: "<<dp[index][maxsofar]<<endl;
        return dp[index][maxsofar];
    }*/
    //here are the options
    long long int option, option1, option2;
    //if current value is 0, don't take this one
    if(numbers[index]==0){
        //return the larger number between the maximum found so far and the value returned by the next state
        option = max(maxsofar, maxprod(numbers, index+1, 1));
        return option;
    }
    //otherwise, either take it or don't
    else{
        //if this one is taken, update maxsofar and go to next state
        option1 = max(maxsofar, maxprod(numbers, index+1, numbers[index]*maxsofar));
        //if this one is not taken, reinitialize maxsofar as 1, as the next states will calculate the product from scratch
        option2 = max(maxsofar, maxprod(numbers, index+1, 1));
        //always return the larger of maxsofar and the value returned by the next state
        return max(option1, option2);
    }
}

int main()
{
    long long int n, num, i, j, counter, maximum, negative, zero, consecutiveminusones, posones, lastnum;
    vector<long long int> nums;
    counter = 1;
    while(scanf("%lld", &n)==1){
        nums.clear();
        negative = 0;   //total negative numbers
        zero = 0;       //total number of 0s
        consecutiveminusones = 0;   //number of consecutive -1s
        posones = 0;    //number of +1s
        lastnum = 0;    //flag whose value is the most recent number inserted
        for(i = 0; i<n; i++){
            scanf("%lld", &num);
            nums.push_back(num);
            if(num==1){
                posones++;
            }
            else if(num==-1 && lastnum==-1){
                consecutiveminusones++;
            }
            lastnum = num;
        }
        long long int result = maxprod(nums, 0, 1);
        if(result==1){
            //the result can be 1 iff there are consecutive -1s, or at least one positive 1 in the input
            if(consecutiveminusones>0 || posones>0){
                printf("Case #%lld: The maximum product is %lld.\n\n", counter, result);
            }
            //if that was not the case, the result must be 0, as the morons in the problem said so (though it should be 1)
            else{
                printf("Case #%lld: The maximum product is 0.\n\n", counter);

            }
        }
        else{
            printf("Case #%lld: The maximum product is %lld.\n\n", counter, result);

        }
        counter++;
    }
    return 0;
}
