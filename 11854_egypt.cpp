#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s1, s2, s3;
    while(scanf("%d %d %d", &s1, &s2, &s3)==3){
        if(s1==0 && s2==0 && s3==0){
            break;
        }
        if( ( ( (s1*s1) + (s2*s2) ) == (s3*s3)) || ( ( (s3*s3) + (s2*s2) ) == (s1*s1)) || ( ( (s1*s1) + (s3*s3) ) == (s2*s2)) ){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}
