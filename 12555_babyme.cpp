#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, result, boro, chhoto;
    string s;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        boro = 0;
        chhoto = 0;
        scanf("%d", &boro);
        getchar();
        getline(cin, s);
        //cout<<"s: "<<s<<"("<<s.size()<<")"<<endl;
        if(s.size()>1){
            //cout<<"also half kg"<<endl;
            for(j = 0; j<s.size(); j++){
                if(s[j]>='0' && s[j]<='9'){
                    chhoto = s[j]-48;
                }
                else{
                    continue;
                }
            }
            result = (boro*50)+(chhoto*5);
        }
        else{
            //cout<<"just kg"<<endl;
            result = boro*50;
            chhoto = 0;
        }
        if(result%100==0){
            printf("Case %d: %d\n", i, result/100);
        }
        else if(result%10==0){
            printf("Case %d: %.1f\n", i, double(result)/100.0);
        }
        else{
            printf("Case %d: %.2f\n", i, double(result)/100.0);
        }
        //printf("%d %d: %d\n",boro, chhoto, result);
    }
    return 0;
}
