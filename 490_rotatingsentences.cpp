#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, maximum;
    vector<string> v;
    string s;

    maximum = 0;
    while(getline(cin, s)){
        if(s.size()>maximum){
            maximum = s.size();
        }
        v.push_back(s);
    }
    for(i = 0; i<maximum; i++){
        for(j = v.size()-1; j>=0; j--){
            if(i>=v[j].size()){
                printf(" ");
            }
            else{
                printf("%c", v[j][i]);
            }
        }
        printf("\n");
    }
    return 0;
}
