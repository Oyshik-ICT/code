#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[4][4];
    int i,j,c=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>a[i][j];
            if(a[i][j]=='#'){
                c++;
            }
        }
    }
    if(c==8 && ((a[0][1]=='#' && a[0][2]=='#' && a[0][0]!='#' && a[0][3]!='#' && a[1][1]=='.' && a[1][2]=='.' && a[2][1]=='#' && a[2][2]=='#' && a[3][1]=='.' && a[3][2]=='.' && a[3][0]!='.' && a[3][3]!='.') || (a[0][1]=='.' && a[0][2]=='.' && a[1][1]=='#' && a[1][2]=='#' && a[2][1]=='.' && a[2][2]=='.' && a[3][1]=='#' && a[3][2]=='#'))){
        cout<<"NO"<<"\n";
    }
    else if(c==8 && ((a[0][0]=='#' && a[0][1]=='#' && a[1][0]=='.' && a[1][1]=='.') || (a[0][0]=='.' && a[0][1]=='.' && a[1][0]=='#' && a[1][1]=='#'))){
        cout<<"NO"<<"\n";
    }
    else if(c==8 && ((a[0][0]=='.' && a[0][1]=='#' && a[0][2]=='.' && a[0][3]=='#') ||(a[0][0]=='#' && a[0][1]=='.' && a[0][2]=='#' && a[0][3]=='.'))){
        cout<<"NO"<<"\n";
    }
    else if(c==8 && ((a[0][0]=='.' && a[0][1]=='.' && a[0][2]=='.' && a[0][3]=='.' && a[2][0]=='.' && a[2][1]=='.' && a[2][2]=='.' && a[2][3]=='.') || (a[0][0]=='#' && a[0][1]=='#' && a[0][2]=='#' && a[0][3]=='#' && a[2][0]=='#' && a[2][1]=='#' && a[2][2]=='#' && a[2][3]=='#'))){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }

    return 0;
}
