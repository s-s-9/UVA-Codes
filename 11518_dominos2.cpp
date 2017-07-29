#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v[10001];
    int t, n, m, l, i, j, k, to, from, start, current, next, counter, visited[10001];
    queue<int> q;
    scanf("%d", &t);
    for(i = 0; i<t; i++){
        scanf("%d %d %d", &n, &m, &l);
        for(j = 0; j<=10000; j++){
            v[j].clear();
            visited[j] = 0;
        }
        for(j = 0; j<m; j++){
            scanf("%d %d", &to, &from);
            v[to].push_back(from);
        }
        counter = 0;
        for(j = 0; j<l; j++){
            scanf("%d", &start);
            while(!q.empty()){
                q.pop();
            }
            if(visited[start]==0){
                q.push(start);
                visited[start] = 1;
                counter++;
            }
            while(!q.empty()){
                current = q.front();
                q.pop();
                for(k = 0; k<v[current].size(); k++){
                    next = v[current][k];
                    if(visited[next]==0){
                        visited[next] = 1;
                        counter++;
                        q.push(next);
                    }
                }
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}
