#include<bits/stdc++.h>

using namespace std;

int main()
{
    string dir;
    int i, j, k, term;
    int mj[20000000], mk[20000000];

    j = 1;
    k = 1;
    dir = "right";
    for(i = 1; i<=10000000; i++){
        mj[i] = j;
        mk[i] = k;
        if(j==1){
            if(dir=="right"){
                k++;
                dir = "down";
            }
            else{
                j++;
                k--;
                //dir = "right";
            }
        }
        else if(k==1){
            if(dir=="down"){
                j++;
                dir = "right";
            }
            else{
                j--;
                k++;
                //dir = "down";
            }
        }
        else{
            if(dir=="right"){
                j--;
                k++;
            }
            else{
                j++;
                k--;
            }
        }
    }

    while(scanf("%d", &term)==1){
        printf("TERM %d IS %d/%d\n", term, mj[term], mk[term]);
    }
    return 0;
}
