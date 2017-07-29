#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, asc, desc, original;
    int n, intasc, intdesc, diff, counter;
    map<int, int> m;
    //int i = atoi(s.c_str());
    //printf("%d\n", i);
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        m.clear();
        printf("Original number was %d\n", n);
        counter = 1;
        while(m[n]<2){

            ostringstream convert;
            convert << n;
            s = convert.str();

            original = s;
            sort(s.begin(), s.end());
            asc = s;
            //cout<<asc<<endl;
            reverse(s.begin(), s.end());
            desc = s;
            //cout<<desc<<endl;

            intasc = atoi(asc.c_str());
            intdesc = atoi(desc.c_str());
            diff = intdesc - intasc;

            printf("%d - %d = %d\n", intdesc, intasc, diff);
            m[diff]++;
            n = diff;
            counter++;
        }
        printf("Chain length %d\n\n", counter-1);
    }
    return 0;
}
