#include<bits/stdc++.h>

using namespace std;

int main()
{
    int persons, budget, hotels, weeks, costperperson, beds, totalcost, minimum, i, j;
    while(scanf("%d %d %d %d", &persons, &budget, &hotels, &weeks)==4){
        minimum = 999999999;
        for(i = 0; i<hotels; i++){
            scanf("%d", &costperperson);
            for(j = 0; j<weeks; j++){
                scanf("%d", &beds);
                if(beds>=persons){
                    totalcost = (costperperson * persons);
                    if(totalcost<=budget && totalcost<minimum){
                        minimum = totalcost;
                    }
                }
            }
        }
        if(minimum==999999999){
            printf("stay home\n");
        }
        else{
            printf("%d\n", minimum);
        }
    }
    return 0;
}
