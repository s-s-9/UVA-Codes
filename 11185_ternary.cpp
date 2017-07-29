#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, i;
    vector<int> ternary;
    while(scanf("%lld", &n)==1){
        if(n<0){
            break;
        }
        if(n==0){
            cout<<"0"<<endl;
            continue;
        }
        ternary.clear();
        while(n>0){
            ternary.push_back(n%3);
            n/=3;
            //cout<<n<<endl;
        }
        for(i = ternary.size()-1; i>=0; i--){
            cout<<ternary[i];
        }
        cout<<endl;
    }
    return 0;
}
