#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, t, result;
    scanf("%d", &t);
    for(i = 0; i<t; i++){
        scanf("%d", &n);
        result = ((((((n*567)/9)+7492)*235)/47)-498)/10;
        if(result<0){
            result*=-1;
        }
        cout<<result%10<<endl;
    }
    return 0;
}
