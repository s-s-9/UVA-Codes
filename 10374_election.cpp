#include<bits/stdc++.h>

using namespace std;

int main()
{
    char candygets[100], partygets[100], votogets[100];
    string winner, current, candy, party, voto;
    map<string, string> c2p;
    map<string, int> c2v;
    vector<string> candies;
    int m, i, j, t, b, candidates, votes;
    scanf("%d", &t);
    for(i = 0; i<t; i++){
        scanf("%d", &candidates);
        getchar();
        candies.clear();
        c2p.clear();
        c2v.clear();
        for(j = 0; j<candidates; j++){
            gets(candygets);
            while((strlen(candygets)==0)){
                gets(candygets);
            }
            candy = candygets;
            candy.erase(candy.begin(), std::find_if(candy.begin(), candy.end(), std::bind1st(std::not_equal_to<char>(), ' ')));
            candy.erase(std::find_if(candy.rbegin(), candy.rend(), std::bind1st(std::not_equal_to<char>(), ' ')).base(), candy.end());
            gets(partygets);
            while((strlen(partygets)==0)){
                gets(partygets);
            }
            party = partygets;
            party.erase(party.begin(), std::find_if(party.begin(), party.end(), std::bind1st(std::not_equal_to<char>(), ' ')));
            party.erase(std::find_if(party.rbegin(), party.rend(), std::bind1st(std::not_equal_to<char>(), ' ')).base(), party.end());
            c2p[candy] = party;
            candies.push_back(candy);
            //cout<<candy<<party<<endl;
        }
        scanf("%d", &votes);
        getchar();
        for(j = 0; j<votes; j++){
            gets(votogets);
            while((strlen(votogets)==0)){
                gets(votogets);
            }
            voto = votogets;
            voto.erase(voto.begin(), std::find_if(voto.begin(), voto.end(), std::bind1st(std::not_equal_to<char>(), ' ')));
            voto.erase(std::find_if(voto.rbegin(), voto.rend(), std::bind1st(std::not_equal_to<char>(), ' ')).base(), voto.end());
            c2v[voto]++;
        }
        m = -1;
        for(j = 0; j<candies.size(); j++){
            current = candies[j];
            if(c2v[current]>m){
                //cout<<"Now: "<<current<<" : "<<c2v[current]<<endl;
                m = c2v[current];
                winner = c2p[current];
            }
            else if(c2v[current]==m){
                winner = "tie";
            }
        }
        if(i!=0){
            cout<<endl;
        }
        cout<<winner<<endl;
    }
    return 0;
}

