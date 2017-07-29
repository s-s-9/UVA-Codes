#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n;
    vector<int> v;
    for(i = 0; i<1000000; i++){
        v.push_back(0);
    }
    v[0] = 1;
    v[1] = 1;
    for(i = 2; i<v.size(); i++){
        if(v[i]==0){
            for(j = i+i; j<v.size(); j+=i){
                v[j] = 1;
            }
        }
    }
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        for(i = 2; i<v.size(); i++){
            if(v[i]==0 && v[n-i]==0){
                printf("%d = %d + %d\n", n, i, n-i);
                break;
            }
        }
    }
    return 0;
}
