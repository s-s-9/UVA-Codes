#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, number, sumuptocurrent, maximum;
    vector<int> nums;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        nums.clear();
        for(i = 0; i<n; i++){
            scanf("%d", &number);
            nums.push_back(number);
        }
        int kadan[nums.size()];
        for(i = 0; i<nums.size(); i++){
            kadan[i] = 0;
        }
        if(nums[0]<0){
            kadan[0] = 0;
        }
        else{
            kadan[0] = nums[0];
        }
        for(i = 1; i<nums.size(); i++){
            sumuptocurrent = kadan[i-1]+nums[i];
            if(sumuptocurrent<0){
                kadan[i] = 0;
            }
            else{
                kadan[i] = sumuptocurrent;
            }
        }
        maximum = 0;
        for(i = 0; i<nums.size(); i++){
            if(kadan[i]>maximum){
                maximum= kadan[i];
            }
        }
        if(maximum>0){
            printf("The maximum winning streak is %d.\n", maximum);
        }
        else{
            printf("Losing streak.\n");
        }
    }
    return 0;
}
