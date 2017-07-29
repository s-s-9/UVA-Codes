#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, noo;
    string s1, s2;
    scanf("%d", &n);
    //getchar();
    //getchar();
    for(j = 0; j<n; j++){
        cin>>s1>>s2;
        noo = 0;
        if(s1.size()!=s2.size()){
            printf("No\n");
        }
        else{
            for(i = 0; i<s1.size(); i++){
                if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u'){
                    if(s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u'){
                        continue;
                    }
                    else{
                        printf("No\n");
                        noo = 1;
                        break;
                    }
                }
                else{
                    if(s1[i]!=s2[i]){
                        printf("No\n");
                        noo = 1;
                        break;
                    }
                }
            }
            if(noo==0){
                printf("Yes\n");
            }
        }
    }
    return 0;
}
