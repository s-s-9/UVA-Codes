#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, male, female;
    string allpieces;
    map<char, int> m;
    scanf("%d", &n);
    getchar();
    for(i = 0; i<n; i++){
        m.clear();
        getline(cin, allpieces);
        for(j = 0; j<allpieces.size(); j++){
            m[allpieces[j]]++;
        }
        male = m['M'];
        female = m['F'];
        if(male!=female){
            printf("NO LOOP\n");
        }
        else if((male+female)==2){
            printf("NO LOOP\n");
        }
        else{
            printf("LOOP\n");
        }
    }
    return 0;
}
