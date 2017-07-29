#include<bits/stdc++.h>

using namespace std;

//2 15 28 34

int main()
{
    int a, b, c, d, result;
    while(scanf("%d %d %d %d", &a, &b, &c, &d)==4){
        if(a==0 && b==0 && c==0 && d==0){
            break;
        }
        result = 0;
        if(a>=b){
            result+=((a-b)*9);
        }
        else{
            result+=((a+40-b)*9);
        }
        if(c>=b){
            result+=((c-b)*9);
        }
        else{
            result+=((c+40-b)*9);
        }
        if(c>=d){
            result+=((c-d)*9);
        }
        else{
            result+=((c+40-d)*9);
        }

        printf("%d\n", result+1080);
    }
    return 0;
}
