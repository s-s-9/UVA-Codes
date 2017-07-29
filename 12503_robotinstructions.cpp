#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, ins, insno, n, p;
    string instruction, as;
    map<int, string> m;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &ins);
        p = 0;
        for(j = 1; j<=ins; j++){
            cin>>instruction;
            if(instruction=="SAME"){
                cin>>as;
                cin>>insno;
                m[j] = m[insno];
                instruction = m[j];
            }
            else{
                m[j] = instruction;
            }
            if(instruction=="LEFT"){
                p--;
            }
            else if(instruction=="RIGHT"){
                p++;
            }
        }
        printf("%d\n", p);
    }
    return 0;
}
