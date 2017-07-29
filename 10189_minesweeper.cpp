/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, i, j, c, counter, field;
    string s, f;
    field = 1;
    while(scanf("%d %d", &m, &n)==2){
        if(m==0 && n==0){
            break;
        }
        char g[m+2][n+2], g2[m+2][n+2];
        for(i = 1; i<=m; i++){
            cin>>s;
            for(j = 0; j<s.size(); j++){
                g[i][j+1] = s[j];
            }
        }
        for(i = 1; i<=m; i++){
            for(j = 1; j<=n; j++){

                if(g[i][j]=='*'){
                    g2[i][j] = '*';
                }
                else{
                    counter = 0;
                    if(g[i-1][j-1]=='*'){
                        counter++;
                    }
                    if(g[i-1][j]=='*'){
                        counter++;
                    }
                    if(g[i-1][j+1]=='*'){
                        counter++;
                    }
                    if(g[i][j-1]=='*'){
                        counter++;
                    }
                    if(g[i][j+1]=='*'){
                        counter++;
                    }
                    if(g[i+1][j-1]=='*'){
                        counter++;
                    }
                    if(g[i+1][j]=='*'){
                        counter++;
                    }
                    if(g[i+1][j+1]=='*'){
                        counter++;
                    }
                    g2[i][j] = counter+48;
                }
            }
        }
        if(field>1){
            printf("\n");
        }
        printf("Field #%d:\n", field);
        for(i = 1; i<=m; i++){
            for(j = 1; j<=n; j++){
                printf("%c", g2[i][j]);
            }
            printf("\n");
        }
        field++;
    }
    return 0;
}*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, i, j, field;
    char s[1000];
    field = 1;
    while(scanf("%d %d", &m, &n)==2){
        if(m==0 && n==0){
            break;
        }
        int g2[m+2][n+2];
        char g[m+1][n+1];
        for(i = 1; i<=m; i++){
            scanf("%s", s);
            //printf("i\n");
            for(j = 0; j<strlen(s); j++){
                //printf("j\n");
                g[i][j+1] = s[j];
            }
        }
        for(i = 0; i<=m+1; i++){
            for(j = 0; j<=n+1; j++){
                g2[i][j] = 0;
            }
        }
        for(i = 1; i<=m; i++){
            for(j = 1; j<=n; j++){
                if(g[i][j]=='*'){
                    g2[i-1][j-1]++;
                    g2[i-1][j]++;
                    g2[i-1][j+1]++;

                    g2[i][j-1]++;
                    g2[i][j+1]++;

                    g2[i+1][j-1]++;
                    g2[i+1][j]++;
                    g2[i+1][j+1]++;
                }
            }
        }
        if(field>1){
            printf("\n");
        }
        printf("Field #%d:\n", field);
        for(i = 1; i<=m; i++){
            for(j = 1; j<=n; j++){
                if(g[i][j]=='*'){
                    printf("%c", g[i][j]);
                }
                else{
                    printf("%d", g2[i][j]);
                }
            }
            printf("\n");
        }
        field++;
    }
    return 0;
}
