#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[100];
    scanf("%s",ch);
    int len,n,i,j=0,temp;
    len=strlen(ch);
    n=(1<<len)-1;
    for(i=1;i<=n;i++){
        temp=i;
        j=0;
        while(temp>0){
            if(temp&1){
                cout<<ch[j];
            }
            j++;
            temp=temp>>1;;
        }
        cout<<"\n";
    }

    return 0;
}
