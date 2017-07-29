#include<bits/stdc++.h>

using namespace std;

int main()
{
    int total, i,  person, id, returned, persons[10001];

    while(scanf("%d %d", &total, &returned)==2){
        for(i = 0; i<=total; i++){
            persons[i] = 0;
        }
        for(i = 0; i<returned; i++){
            scanf("%d", &id);
            persons[id] = 1;
        }
        if(total==returned){
            printf("*\n");
            continue;
        }
        for(i = 1; i<=total; i++){
            if(persons[i]==0){
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
