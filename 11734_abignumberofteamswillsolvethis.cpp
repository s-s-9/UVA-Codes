#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;
    string judge, conte, s;
    scanf("%d", &n);
    getchar();
    for(i = 1; i<=n; i++){
        getline(cin, conte);
        getline(cin, judge);
        if(judge==conte){
            printf("Case %d: Yes\n", i);
        }
        else{
            s = "";
            for(j = 0; j<conte.size(); j++){
                if(conte[j]!=' '){
                    s.push_back(conte[j]);
                }
            }
            //cout<<s<<endl<<conte<<endl;
            if(judge==s){
                printf("Case %d: Output Format Error\n", i);
            }
            else{
                printf("Case %d: Wrong Answer\n", i);
            }
        }
    }
    return 0;
}
