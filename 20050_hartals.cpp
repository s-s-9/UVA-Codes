#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, counter, parties, testcases, daystocover, factor;
    map<int, string> days;
    scanf("%d", &testcases);
    for(i = 0; i<testcases; i++){
        counter = 0;
        days.clear();
        scanf("%d", &daystocover);
        scanf("%d", &parties);
        for(j = 0; j<parties; j++){
            scanf("%d", &factor);
            for(k = factor; k<=daystocover; k+=factor){
                if((k%7==0) || (k%7==6)){
                    continue;
                }
                else{
                    if(days[k]=="hartal"){
                        continue;
                    }
                    else{
                        days[k] = "hartal";
                        counter++;
                    }
                }
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}
