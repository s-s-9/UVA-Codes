#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, num, current, newnum, i, happy;
    map<int, int> m;
    scanf("%lld", &n);
    for(i = 1; i<=n; i++){
        m.clear();
        scanf("%lld", &num);
        current = num;
        happy = 0;
        while(m[current]==0){
            //printf("%lld\n", current);
            if(current==1){
                happy = 1;
                break;
            }
            m[current] = 1;
            newnum = 0;
            while(current>0){
                newnum += ((current%10)*(current%10));
                current/=10;
            }
            current = newnum;
        }
        if(happy==1){
            printf("Case #%lld: %lld is a Happy number.\n", i, num);
        }
        else{
            printf("Case #%lld: %lld is an Unhappy number.\n", i, num);
        }
    }
    return 0;
}
