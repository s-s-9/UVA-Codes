#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> m;

    vector<int> v[100];

    queue<int> q;

    int i;

    for(i = 11; i<=88; i++){
        if(i%10==9 || i%10==0){
            continue;
        }
        if((i-8)>10){
            v[i].push_back(i-8);
        }
        if((i-12)>10){
            v[i].push_back(i-12);
        }
        if((i-21)>10){
            v[i].push_back(i-21);
        }
        if((i-19)>10){
            v[i].push_back(i-19);
        }

        if((i+8)<=88){
            v[i].push_back(i+8);
        }
        if((i+12)<=88){
            v[i].push_back(i+12);
        }
        if((i+21)<=88){
            v[i].push_back(i+21);
        }
        if((i+19)<=88){
            v[i].push_back(i+19);
        }
    }

    m['a'] = 1; m['b'] = 2; m['c'] = 3; m['d'] = 4;
    m['e'] = 5; m['f'] = 6; m['g'] = 7; m['h'] = 8;

    string from, to;
    int f, t, source, destination, next, current, visited[100], cost[100];
    while(cin>>from>>to){
        f = m[from[0]]*10 + from[1]-48;
        t = m[to[0]]*10 + to[1]-48;
        //cout<<f<<", "<<t<<endl;
        source = f;
        destination = t;
        while(!q.empty()){
            q.pop();
        }
        for(i = 0; i<100; i++){
            visited[i] = 0;
            cost[i] = 0;
        }
        q.push(source);
        visited[source] = 1;
        while(!q.empty()){
            current = q.front();
            q.pop();
            for(i = 0; i<v[current].size(); i++){
                next = v[current][i];
                //cout<<"Next: "<<next<<endl;
                if(visited[next]==0){
                    visited[next] = 1;
                    cost[next] = cost[current] + 1;
                    q.push(next);
                }
            }
        }
        cout<<"To get from "<<from<<" to "<<to<<" takes "<<cost[destination]<<" knight moves."<<endl;
    }
    return 0;
}
