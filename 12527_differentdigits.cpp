#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int, string> mp;
    int m, n, i, current, f, counter;
    while(scanf("%d %d", &m, &n)==2){
        if(m>=n){
            swap(m, n);
        }
        counter = 0;
        for(i = m; i<=n; i++){
            current = i;
            f = 0;
            mp.clear();
            while(current>0){
                if(mp[current%10]=="found"){
                    f = 1;
                    break;
                }
                else{
                    mp[current%10] = "found";
                    current/=10;
                }
            }
            if(f==0){
                counter++;
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}
