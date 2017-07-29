#include<bits/stdc++.h>

using namespace std;

int main()
{
    int total, i, n, amount;
    string s;
    total = 0;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        cin>>s;
        if(s=="donate"){
            scanf("%d", &amount);
            total+=amount;
        }
        else if(s=="report"){
            printf("%d\n", total);
        }
    }
    return 0;
}
