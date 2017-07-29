#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, vd, vsingle;
    vector<int> vdouble;
    string s;
    scanf("%d", &n);
    getchar();
    for(i = 0; i<n; i++){
        getline(cin, s);
        vdouble.clear();
        vsingle = 0;

        vdouble.push_back((s[0]-48)*2);
        vdouble.push_back((s[2]-48)*2);
        vdouble.push_back((s[5]-48)*2);
        vdouble.push_back((s[7]-48)*2);
        vdouble.push_back((s[10]-48)*2);
        vdouble.push_back((s[12]-48)*2);
        vdouble.push_back((s[15]-48)*2);
        vdouble.push_back((s[17]-48)*2);

        vsingle+= ((s[1]-48) + (s[3]-48) + (s[6]-48) + (s[8]-48) + (s[11]-48) + (s[13]-48) + (s[16]-48) + (s[18]-48));
        vd = 0;
        for(j = 0; j<vdouble.size(); j++){
            if(vdouble[j]>=10){
                vd+=((vdouble[j]%10) + (vdouble[j]/10));
            }
            else{
                vd+=vdouble[j];
            }
        }
        if(((vd + vsingle)%10)==0){
            printf("Valid\n");
        }
        else{
            printf("Invalid\n");
        }
    }
    return 0;
}
