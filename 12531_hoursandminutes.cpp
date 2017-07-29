#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter, i, clock[200];
    counter = 1;
    for(i = 0; i<=180; i++){
        clock[i] = 0;
    }
    cout<<"a"<<endl;
    for(i = 0; i<=180; i+=6){
        if(counter%12==0){
            i-=6;
        }
        clock[i] = 1;
        counter++;
    }
    while(scanf("%d", &i)==1){
        if(clock[i]==1){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}
