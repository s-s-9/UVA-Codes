#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, d, p, i, j, source, current, next, counter;
    queue<int> q;
    while(scanf("%d", &n)==1){
        if(n==0){
            //printf("No nodes in graph.\n");
            break;
        }

        vector<int> v[n+1];
        for(i = 0; i<n+1; i++){
            v[i].clear();
        }
        int visited[n+1];

        while(scanf("%d", &s)==1){
            if(s==0){
                //printf("Source node equals 0, so end of graph.\n");
                break;
            }
            //printf("Taking neighbors for source node %d\n", s);
            while(scanf("%d", &d)==1){
                if(d==0){
                    //printf("Finished taking neighbors for source node %d\n", s);
                    break;
                }
                //printf("%d is adjacent to %d.\n", d, s);
                v[s].push_back(d);
            }
        }

        scanf("%d", &p);
        //printf("%d sources are being taken.\n", p);
        for(j = 0; j<p; j++){
            scanf("%d", &source);
            //printf("Printing results for %d.\n", source);
            while(!q.empty()){
                q.pop();
            }
            q.push(source);
            for(i = 0; i<n+1; i++){
                visited[i] = 0;
            }
            while(!q.empty()){
                current = q.front();
                q.pop();
                for(i = 0; i<v[current].size(); i++){
                    next = v[current][i];
                    if(visited[next] == 0){
                        visited[next] = 1;
                        q.push(next);
                    }
                }
            }
            counter = 0;
            for(i = 1; i<n+1; i++){
                if(visited[i]==0){
                    counter++;
                }
            }
            printf("%d", counter);
            for(i = 1; i<n+1; i++){
                if(visited[i]==0){
                    printf(" %d", i);
                }
            }
            printf("\n");
            //printf("The end.\n");
        }
    }
    return 0;
}
