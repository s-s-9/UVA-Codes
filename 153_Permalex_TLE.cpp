#include<bits/stdc++.h>

using namespace std;

int main()
{
    string original, sorted;
    int counter;
    char s[50];

    while(scanf("%s", &s)){
        original = s;
        if(original=="#"){
            break;
        }

        sorted = original;
        sort(sorted.begin(), sorted.end());

        counter = 1;

        //cout<<sorted<<endl;
        while(true){
            if(sorted==original){
                break;
            }
            if(next_permutation(sorted.begin(), sorted.end()) == 1){
                counter++;
                //cout<<sorted<<endl;
            }
            else{
                break;
            }
        }

        printf("%10d\n", counter);
    }

    return 0;
}
