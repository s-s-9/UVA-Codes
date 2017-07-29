#include<bits/stdc++.h>

using namespace std;

bool issquare(int n)
{
    int root(round(sqrt(n)));
    return ((root*root)==n);
}

int main()
{
    int n, i, j, k, sq;
    string s, result;
    scanf("%d", &n);
    getchar();
    for(i = 0; i<n; i++){
        getline(cin, s);
        if(issquare(s.size())==0){
            printf("INVALID\n");
            continue;
        }
        result = "";
        sq = round(sqrt(s.size()));
        for(j = 0; j<sq; j++){
            for(k = j; k<s.size(); k+=sq){
                result.push_back(s[k]);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
