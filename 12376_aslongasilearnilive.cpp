#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, v, e, m, from, to, current, total, next, value, points[200];
    vector<int> vec[200];
    scanf("%d", &t);
    for(i = 1; i<=t; i++){
        scanf("%d %d", &v, &e);
        for(j = 0; j<v; j++){
            vec[j].clear();
        }
        for(j = 0; j<v; j++){
            scanf("%d", &value);
            //printf("got %d\n", value);
            points[j] = value;
        }
        for(j = 0; j<e; j++){
            scanf("%d %d", &from, &to);
            vec[from].push_back(to);
        }
        current = 0;
        total = 0;
        while(vec[current].size()!=0){
            m = 0;
            for(j = 0; j<vec[current].size(); j++){
                next = vec[current][j];
                if(points[next]>m){
                    m = points[next];
                }
            }
            for(j = 0; j<vec[current].size(); j++){
                next = vec[current][j];
                if(points[next]==m){
                    total+=m;
                    current = next;
                    break;
                }
            }
        }
        printf("Case %d: %d %d\n", i, total, current);
    }
    return 0;
}
