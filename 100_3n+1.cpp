#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, counter, temp, m, bigger, smaller;
    while(scanf("%d %d", &i, &j)==2){
        m = 0;
        if(i>j){
            bigger = i;
            smaller = j;
        }
        else{
            bigger = j;
            smaller = i;
        }

        for(int c = smaller; c<=bigger; c++){
            counter = 1;
            temp = c;
            while(temp!=1){
                //printf("%d ", temp);
                if(temp%2==0){
                    temp/=2;
                }
                else{
                    temp = 3*temp + 1;
                }
                counter++;
            }
            //printf("%d", temp);

            //printf("\n%d\n", counter);

            if(counter>m){
                m = counter;
            }
        }
        printf("%d %d %d\n", i, j, m);
    }
    return 0;
}
