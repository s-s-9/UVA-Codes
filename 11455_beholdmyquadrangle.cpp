#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b, c, d;
    int i, n;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if(a==b && b==c && c==d){
            printf("square\n");
        }
        else if(((a==b) && (c==d)) || ((a==c) && (b==d)) || ((a==d) && (b==c))){
            printf("rectangle\n");
        }
        else if(((a+b+c)>d) && ((a+c+d)>b) && ((a+b+d)>c) && ((b+c+d)>a)){
            printf("quadrangle\n");
        }
        else{
            printf("banana\n");
        }
    }
    return 0;
}
