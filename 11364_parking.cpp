#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, d, i, j, k, minimum, les, gre, current, cause;
    vector<int> s;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        s.clear();
        scanf("%d", &p);
        for(j = 0; j<p; j++){
            scanf("%d", &d);
            s.push_back(d);
        }
        minimum = 10000000;
        /*for(j = 0; j<p; j++){
            current = 0;
            for(k = 0; k<p; k++){
                if(s[k]>s[j]){
                    current+=(s[k]-s[j]);
                }
                else{
                    current+=(s[j]-s[k]);
                }
            }
            printf("%d: %d --- %d\n", s[j], current, minimum);
            if(current<minimum){
                minimum = current;
                cause = s[j];
            }
        }
        printf("%d: %d\n", cause, minimum);*/
        sort(s.begin(), s.end());
        for(j = 0; j<=s[s.size()-1]; j++){
            current = 0;
            current+=((j-s[0])*2)+((s[s.size()-1]-j)*2);
            //printf("%d: %d---%d\n", j, current, minimum);
            if(current<minimum){
                minimum = current;
                cause = j;
            }
        }
        printf("%d\n", minimum);
    }
    return 0;
}
