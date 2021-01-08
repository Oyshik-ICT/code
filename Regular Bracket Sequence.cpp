#include<bits/stdc++.h>

using namespace std;

int is_b(char s[])
{
    char stk[110];
    int i,len,top=0,c=0;
    len=strlen(s);
    if(len%2!=0){
        return 0;
    }
    for(i=0;i<len;i++){
        if(s[i]=='('){
            stk[top]='(';
            top++;
           }
           else if(s[i]==')'){
            if(top==0 && c==0){
                return 0;
            }
            top--;
            if(stk[top]!='(' && c<=0){
                return 0;
               }
           }
           else if(s[i]=='?'){
            c++;
           }
    }
    if(top>0 && (top!=c) && c%2==0){
        return 0;
    }
    if( top==0 || c>0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char s[110];
        scanf("%s",s);
        if(is_b(s)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
