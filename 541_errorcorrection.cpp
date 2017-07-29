#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, val, rowgenjam, colgenjam, genjaimmarow, genjaimmacol;
    map<int, int> row, column;
    while(scanf("%d", &n)==1){
        if(n==0){
            break;
        }
        vector<int> v[n];
        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                scanf("%d", &val);
                v[i].push_back(val);
            }
        }
        row.clear();
        column.clear();
        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                row[i]+=v[i][j];
                column[i]+=v[j][i];
            }
        }
        rowgenjam = 0;
        colgenjam = 0;
        for(i = 0; i<n; i++){
            //printf("Row %d: %d\n", i, row[i]);
            //printf("Column %d: %d\n", i, column[i]);
            if(row[i]%2==1){
                rowgenjam++;
                genjaimmarow = i;
            }
            if(column[i]%2==1){
                colgenjam++;
                genjaimmacol = i;
            }
        }
        if(rowgenjam==0 && colgenjam==0){
            printf("OK\n");
            continue;
        }
        else if(rowgenjam==1 && colgenjam==1){
            printf("Change bit (%d,%d)\n", genjaimmarow+1, genjaimmacol+1);
        }
        else{
            printf("Corrupt\n");
        }
    }
    return 0;
}
