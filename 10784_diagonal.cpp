#include<bits/stdc++.h>

using namespace std;

 int main()
 {
     long long int n, resultp, counter;
     counter = 1;
     while(scanf("%lld", &n)==1){
        if(n==0){
            break;
        }
        resultp = ceil((3 + sqrt(9 -(4 * (-2) * double(n)))) / (2));
        printf("Case %lld: %lld\n", counter, resultp);
        counter++;
     }
     return 0;
 }
