#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k, l, li, va, result;
    char ch;
    string s;
    map<char, int> m;

    scanf("%d", &n);
    for(i = 0; i<n; i++){
        m.clear();
        scanf("%d", &k);
        for(j = 0; j<k; j++){
            cin>>ch>>va;
            m[ch] = va;
        }
        scanf("%d", &li);
        getchar();
        result = 0;
        for(j = 0; j<li; j++){
            getline(cin, s);
            for(l = 0; l<s.size(); l++){
                result+=(m[s[l]]);
            }
        }
        printf("%d", result/100);
        printf(".");
        if((result%100)<10){
            printf("0%d$\n", result%100);
        }
        else{
            printf("%d$\n", result%100);
        }
    }
    return 0;
}
