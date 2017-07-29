#include<bits/stdc++.h>

using namespace std;

int main()
{
    int persons, i, j, repeatitions, turn;
    vector<string> v, song;
    string s;

    song.push_back("Happy");    song.push_back("birthday");    song.push_back("to");    song.push_back("you");
    song.push_back("Happy");    song.push_back("birthday");    song.push_back("to");    song.push_back("you");
    song.push_back("Happy");    song.push_back("birthday");    song.push_back("to");    song.push_back("Rujia");
    song.push_back("Happy");    song.push_back("birthday");    song.push_back("to");    song.push_back("you");

    scanf("%d", &persons);
    for(i = 0; i<persons; i++){
        cin>>s;
        v.push_back(s);
    }
    repeatitions = ceil((double)persons/16.0);
    turn = 0;
    for(i = 0; i<repeatitions; i++){
        for(j = 0; j<song.size(); j++){
            if(turn==v.size()){
                turn = 0;
            }
            cout<<v[turn]<<": "<<song[j]<<endl;
            turn++;
        }
    }
    return 0;
}
