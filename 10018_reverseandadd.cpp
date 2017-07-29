#include<bits/stdc++.h>

using namespace std;

int main()
{
    int iteration, i, n;
    long long int p, reverp, addition;
    string s, origis, additions, origiadditions;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%lld", &p);

        iteration = 0;

        ostringstream convert;
        convert.str("");
        convert.clear();
        convert << p;
        s = convert.str();

        origis = s;
        reverse(s.begin(), s.end());

        reverp = atoi(s.c_str());

        addition = p + reverp;

        iteration++;

        //cout<<addition<<endl;

        convert.str("");
        convert.clear();
        convert << addition;
        additions = convert.str();

        origiadditions = additions;
        reverse(additions.begin(), additions.end());

        while(additions!=origiadditions){
            //cout<<origiadditions<<", "<<additions<<endl;
            p = atoi(origiadditions.c_str());
            reverp = atoi(additions.c_str());

            addition = p + reverp;
            iteration++;

            ostringstream convert;
            convert << addition;
            additions = convert.str();

            origiadditions = additions;
            reverse(additions.begin(), additions.end());
        }
        cout<<iteration<<" "<<additions<<endl;
    }
    return 0;
}
