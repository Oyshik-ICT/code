#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[8][8];
    int i,j,w1=0,b1=0;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            scanf("%c",&ch[i][j]);
        }
        getchar();
    }
   for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(ch[i][j]=='Q' || ch[i][j]=='R' || ch[i][j]=='B' || ch[i][j]=='N' || ch[i][j]=='P'){
                if(ch[i][j]=='Q'){
                    w1=w1+9;
                }
                else if(ch[i][j]=='R'){
                    w1=w1+5;
                }
                else if(ch[i][j]=='B'){
                    w1=w1+3;
                }
                else if(ch[i][j]=='N'){
                    w1=w1+3;
                }
                else if(ch[i][j]=='P'){
                    w1=w1+1;
                }
            }
            else if(ch[i][j]=='q' || ch[i][j]=='r' || ch[i][j]=='b' || ch[i][j]=='n' || ch[i][j]=='p'){
                if(ch[i][j]=='q'){
                    b1=b1+9;
                }
                else if(ch[i][j]=='r'){
                    b1=b1+5;
                }
                else if(ch[i][j]=='b'){
                    b1=b1+3;
                }
                else if(ch[i][j]=='n'){
                    b1=b1+3;
                }
                else if(ch[i][j]=='p'){
                    b1=b1+1;
                }
            }
        }
   }
   if(w1>b1){
    printf("White\n");
   }
   else if(b1>w1){
    printf("Black\n");
   }
   else{
    printf("Draw\n");
   }

   return 0;
}
