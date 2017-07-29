#include<bits/stdc++.h>

using namespace std;

int main()
{
    int stations, p, i, flag;
    vector<int> v;
    while(scanf("%d", &stations)==1){
        if(stations==0){
            break;
        }
        v.clear();
        flag = 0;
        for(i = 0; i<stations; i++){
            scanf("%d", &p);
            v.push_back(p);
        }
        //v.push_back(0);
        sort(v.begin(), v.end());
        for(i = 1; i<v.size(); i++){
            if(v[i]-v[i-1]>200){
                flag = 1;
                break;
            }
        }
        if(v[0]>200){
            flag = 1;
        }
        if(v[v.size()-1]<1322){
            flag = 1;
        }
        if(flag==0){
            printf("POSSIBLE\n");
        }
        else{
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
