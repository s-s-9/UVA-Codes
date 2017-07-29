#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b)==2){
        if(a==-1 && b==-1){
            break;
        }
        if(b < a){
            swap(a, b);
        }
        printf("%d\n", min((b-a), (a+100-b)));
    }
    return 0;
}
