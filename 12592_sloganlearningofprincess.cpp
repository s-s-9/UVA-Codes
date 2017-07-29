#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, p;
    vector<string> v1, v2;
    string l1, l2, inp;
    scanf("%d", &n);
    getchar();
    for(i = 0; i<n; i++){
        getline(cin, l1);
        v1.push_back(l1);
        getline(cin, l2);
        v2.push_back(l2);
    }
    scanf("%d", &p);
    getchar();
    for(i = 0; i<p; i++){
        getline(cin, inp);
        for(j = 0; j<v1.size(); j++){
            if(v1[j]==inp){
                cout<<v2[j]<<endl;
            }
        }
    }
    return 0;
}
