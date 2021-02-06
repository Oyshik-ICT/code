#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,x1=0,x2=0,c=0;
    scanf("%d",&n);
    getchar();
    char ch[n+1];
    for(i=0;i<n;i++){
        scanf("%c",&ch[i]);
        if(ch[i]=='x'){
            x1++;
        }
        else{
            x2++;
        }
    }
    ch[i]='\0';
    if(x1==n/2){
        printf("0\n");
        printf("%s\n",ch);
    }
    else if(x1>x2){
        j=x1-n/2;
        for(i=0;i<n;i++){
            if(ch[i]=='x'){
                ch[i]='X';
                c++;
            }
            if(c==j){
                break;
            }
        }
        printf("%d\n",j);
        printf("%s\n",ch);
    }
     else if(x1<x2){
        j=x2-n/2;
        for(i=0;i<n;i++){
            if(ch[i]=='X'){
                ch[i]='x';
                c++;
            }
                if(c==j){
                break;
            }
        }
        printf("%d\n",j);
        printf("%s\n",ch);
    }

    return 0;
}
