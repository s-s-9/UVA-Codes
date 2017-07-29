#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, result;
    while(scanf("%d %d", &m, &n)==2){
        result = 0;
        if(m<n){
            swap(m, n);
        }
        result+=(n-1);
        result+=((m-1)*n);
    cout<<result<<endl;
    }
    return 0;
}
