#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c, i, j, b2, notb2, n;
    map<int, int> dupli, actual;
    vector<int> nums;
    c = 1;
    while(scanf("%d", &n)==1){
        notb2 = 0;
        dupli.clear();
        nums.clear();
        actual.clear();
        for(i = 0; i<n; i++){
            scanf("%d", &b2);
            if(dupli[b2]==1){
                notb2 = 1;
            }
            else{
                dupli[b2] = 1;
            }
            nums.push_back(b2);
            if(b2<1){
                notb2 = 1;
            }
        }
        //sort(nums.begin(), nums.end());
        for(i = 0; i<nums.size(); i++){
            if(actual[nums[i]+nums[i]]==1){
                notb2 = 1;
            }
            else{
                actual[nums[i]+nums[i]]=1;
            }
            for(j = i+1; j<nums.size(); j++){
                if(nums[j]<nums[i]){
                    notb2 = 1;
                }
                if(actual[nums[i]+nums[j]]==1){
                    notb2 = 1;
                }
                else{
                    actual[nums[i]+nums[j]]=1;
                }
            }
        }
        if(notb2==1){
            printf("Case #%d: It is not a B2-Sequence.\n\n", c);
        }
        else{
            printf("Case #%d: It is a B2-Sequence.\n\n", c);
        }
        c++;
    }
    return 0;
}
