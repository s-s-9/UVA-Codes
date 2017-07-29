#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, paisi, sieve[3000];
    map<char, int> m;
    string s;

    for(i = 0; i<3000; i++){
        sieve[i] = 0;
    }
    sieve[0] = 1;   sieve[1] = 1;
    for(i = 2; i<3000; i++){
        if(sieve[i]==0){
            for(j = i+i; j<3000; j+=i){
                sieve[j] = 1;
            }
        }
    }

    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        m.clear();
        cin>>s;
        for(j = 0; j<s.size(); j++){
            m[s[j]]++;
        }
        paisi = 0;
        printf("Case %d: ", i);
        for(j = 0; j<150; j++){
            if(sieve[m[j]]==0){
                paisi = 1;
                printf("%c", j);
            }
        }
        if(paisi==0){
            printf("empty");
        }
        printf("\n");
    }
    return 0;
}
