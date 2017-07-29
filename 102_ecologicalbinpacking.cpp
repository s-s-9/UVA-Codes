#include<bits/stdc++.h>

using namespace std;

int main()
{
    int bgc[4][4];
    while(scanf("%d %d %d %d %d %d %d %d %d", &bgc[1][1], &bgc[1][2], &bgc[1][3], &bgc[2][1], &bgc[2][2], &bgc[2][3],
                &bgc[3][1], &bgc[3][2], &bgc[3][3])==9){
                    int minimum = 2147483647;
                    string sequence;
                    int bcg = bgc[2][1]+bgc[3][1]+bgc[1][3]+bgc[3][3]+bgc[1][2]+bgc[2][2];
                    if(bcg<minimum){
                        minimum= bcg;
                        sequence = "BCG";
                    }
                    int bgcc = bgc[2][1]+bgc[3][1]+bgc[1][2]+bgc[3][2]+bgc[1][3]+bgc[2][3];
                    if(bgcc<minimum){
                        minimum= bgcc;
                        sequence = "BGC";
                    }
                    int cbg = bgc[2][3]+bgc[3][3]+bgc[1][1]+bgc[3][1]+bgc[1][2]+bgc[2][2];
                    if(cbg<minimum){
                        minimum= cbg;
                        sequence = "CBG";
                    }
                    int cgb = bgc[2][3]+bgc[3][3]+bgc[1][2]+bgc[3][2]+bgc[1][1]+bgc[2][1];
                    if(cgb<minimum){
                        minimum= cgb;
                        sequence = "CGB";
                    }
                    int gbc = bgc[2][2]+bgc[3][2]+bgc[1][1]+bgc[3][1]+bgc[1][3]+bgc[2][3];
                    if(gbc<minimum){
                        minimum= gbc;
                        sequence = "GBC";
                    }
                    int gcb = bgc[2][2]+bgc[3][2]+bgc[1][3]+bgc[3][3]+bgc[1][1]+bgc[2][1];
                    if(gcb<minimum){
                        minimum= gcb;
                        sequence = "GCB";
                    }
                    cout<<sequence<<" "<<minimum<<endl;
                }
    return 0;
}
