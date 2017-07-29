#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, forfirst, fornext, neighbor, n, from, to, current, next, visited[50], cost[50], t;
    vector<int> v[50];
    queue<int> q;
    t = 1;
    while(scanf("%d", &forfirst)==1){
        for(i = 0; i<50; i++){
            v[i].clear();
        }
        for(i = 0; i<forfirst; i++){
            scanf("%d", &neighbor);
            v[1].push_back(neighbor);
            v[neighbor].push_back(1);
        }
        for(i = 2; i<=19; i++){
            scanf("%d", &fornext);
            for(j = 0; j<fornext; j++){
                scanf("%d", &neighbor);
                v[i].push_back(neighbor);
                v[neighbor].push_back(i);
            }
        }
        printf("Test Set #%d\n", t);
        scanf("%d", &n);
        for(i = 0; i<n; i++){
            scanf("%d %d", &from, &to);

            while(!q.empty()){
                q.pop();
            }
            for(j = 0; j<50; j++){
                visited[j] = 0;
                cost[j] = 0;
            }

            q.push(from);
            visited[from] = 1;
            while(!q.empty()){
                current = q.front();
                q.pop();
                for(j = 0; j<v[current].size(); j++){
                    next = v[current][j];
                    if(visited[next]==0){
                        visited[next] = 1;
                        cost[next] = cost[current] + 1;
                        q.push(next);
                    }
                }
            }

            printf("%2d to %2d: %d\n", from, to, cost[to]);

        }
        printf("\n");
        t++;
    }
    return 0;
}
