#include<bits/stdc++.h>

using namespace std;

int main()
{
    string num;
    int i, current;
    while(cin>>num){
        if(num=="0"){
            break;
        }
        current = 0;
        for(i = 0; i<num.size(); i++){
            current = ((current*10) + (num[i]-48))%17;
        }
        if(current==0){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
        //printf("%d, %d\n", current, current%17);
    }
    return 0;
}
