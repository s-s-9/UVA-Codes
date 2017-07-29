#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, nodeno, ttl, counter, c, current, next;
    vector<int> v[100000];
    int cost[100000], visited[100000];
    queue<int> q;


    string from, to, node;
    map<string, int> m1;
    map<int, string> m2;

    c = 1;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        for(i = 0; i<100000; i++){
            v[i].clear();
        }
        while(!q.empty()){
            q.pop();
        }

        m1.clear();
        m2.clear();
        nodeno = 0;

        for(i = 0; i<n; i++){
            cin>>from>>to;
            if(m1[from]==0){
                nodeno++;
                m1[from] = nodeno;
                m2[nodeno] = from;
            }
            if(m1[to]==0){
                nodeno++;
                m1[to] = nodeno;
                m2[nodeno] = to;
            }
            v[m1[from]].push_back(m1[to]);
            v[m1[to]].push_back(m1[from]);
        }
        while(cin>>node>>ttl){
            if(node=="0" && ttl==0){
                break;
            }
            for(i = 0; i<100000; i++){
                visited[i] = 0;
                cost[i] = 0;
            }
            while(!q.empty()){
                q.pop();
            }
            q.push(m1[node]);
            visited[m1[node]] = 1;
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
            counter = 0;
            for(j = 1; j<=nodeno; j++){
                if(visited[j]==0 || cost[j]>ttl){
                    counter++;
                }
            }
            cout<<"Case "<<c<<": "<<counter<<" nodes not reachable from node "<<node<<" with TTL = "<<ttl<<"."<<endl;
            c++;
        }
    }
    return 0;
}
