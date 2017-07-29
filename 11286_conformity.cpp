#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, c, current, mx, result;
    string s;
    map<string, int> m;
    vector<string> ss;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        m.clear();
        ss.clear();
        mx = -1;
        vector<int> v[n+1];
        for(i = 1; i<=n; i++){
            for(j = 0; j<5; j++){
                scanf("%d", &c);
                v[i].push_back(c);
            }
            sort(v[i].begin(), v[i].end());
        }
        for(i = 1; i<=n; i++){
            s = "";
            for(j = 0; j<5; j++){
                current = v[i][j];
                while(current>0){
                    s.push_back((current%10)+48);
                    current/=10;
                }
            }
            //cout<<s<<endl;
            m[s]++;
            if(m[s]>mx){
                mx = m[s];
            }
            ss.push_back(s);
            s = "";
        }
        result = 0;
        for(i = 0; i<ss.size(); i++){
            if((m[ss[i]])==mx){
                result++;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}
