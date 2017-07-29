#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, p;
    vector<int> v, original, sorteda, sortedd;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        v.clear();
        for(j = 0; j<10; j++){
            scanf("%d", &p);
            v.push_back(p);
        }
        if(i==0){
            cout<<"Lumberjacks:"<<endl;
        }
        original = v;
        sort(v.begin(), v.end());
        sorteda = v;
        reverse(v.begin(), v.end());
        sortedd = v;
        if(original==sorteda || original==sortedd){
            cout<<"Ordered"<<endl;
        }
        else{
            cout<<"Unordered"<<endl;
        }
    }
    return 0;
}
