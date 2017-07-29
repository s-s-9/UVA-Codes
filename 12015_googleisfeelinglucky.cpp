#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, rating, maximum;
    string site;
    vector<string> sites, result;
    map<string, int> m;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        m.clear();
        sites.clear();
        result.clear();
        for(j = 0; j<10; j++){
            cin>>site>>rating;
            sites.push_back(site);
            m[site] = rating;
        }
        maximum = -1;
        for(j = 0; j<10; j++){
            if(m[sites[j]]>maximum){
                result.clear();
                result.push_back(sites[j]);
                maximum = m[sites[j]];
            }
            else if(m[sites[j]]==maximum){
                result.push_back(sites[j]);
            }
        }
        printf("Case #%d:\n", i);
        for(j = 0; j<result.size(); j++){
            cout<<result[j]<<endl;
        }
    }
}
