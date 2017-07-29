#include<bits/stdc++.h>

using namespace std;

int f91(int f)
{
    if(f>=101){
        return f-10;
    }
    if(f<=100){
        return f91(f91(f+11));
    }
}

int main()
{
    int n;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        printf("f91(%d) = %d\n", n, f91(n));
    }
    return 0;
}
