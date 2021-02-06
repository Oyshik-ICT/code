#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,len,c1,c2,c3,c4;
    char ch[21];
    scanf("%d",&t);
    getchar();
    while(t--){
            c1=0,c2=0,c4=0,c3=0;
        scanf("%s",ch);
        len=strlen(ch);
        if(len<10){
            printf("NO\n");
            continue;
        }
        for(i=1;i<len-1;i++){
            if(ch[i]>='a' && ch[i]<='z'){
                c1++;
            }
            else if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='A' && ch[i]<='Z')){
                c2++;
            }
            else if((ch[i]>='0' && ch[i]<='9') || (ch[i]>='0' && ch[i]<='9')){
                c3++;
            }
            else if(ch[i]=='@' || ch[i]=='#' || ch[i]=='%' || ch[i]=='&' || ch[i]=='?'){
                c4++;
            }
        }
        if((ch[0]>='a' && ch[0]<='z') || (ch[len-1]>='a' && ch[len-1]<='z')){
            c1++;
        }
        if(c1>=1 && c2>=1 && c3>=1 && c4>=1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
