#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i,  e, from, to, result, current, next;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        vector<int> v[n];
        int visited[n], color[n];
        queue<int> q;
        for(i = 0; i<n; i++){
            v[i].clear();
        }
        scanf("%d", &e);
        for(i = 0; i<e; i++){
            scanf("%d %d", &from, &to);
            v[from].push_back(to);
            v[to].push_back(from);
        }
        while(!q.empty()){
            q.pop();
        }
        for(i = 0; i<n; i++){
            visited[i] = 0;
            color[i] = 0;
        }
        q.push(0);
        visited[0] = 1;
        color[0] = 1;
        result = 1;
        while(!q.empty()){
            if(result==0){
                break;
            }
            current = q.front();
            q.pop();
            for(i = 0; i<v[current].size(); i++){
                next = v[current][i];
                //cout<<current<<" :: "<<next<<endl;
                if(color[current]==color[next]){
                    result = 0;
                    //cout<<current<<", "<<next<<endl;
                    break;
                }
                else if(visited[next]==0){
                    visited[next] = 1;
                    if(color[current]==1){
                        color[next] = 2;
                    }
                    else if(color[current]==2){
                        color[next] = 1;
                    }
                    q.push(next);
                }
            }
        }
        if(result==1){
            printf("BICOLORABLE.\n");
        }
        else if(result==0){
            printf("NOT BICOLORABLE.\n");
        }
    }
    return 0;
}
