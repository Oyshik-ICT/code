#include<bits/stdc++.h>

int main()
{
    int n,k,i,mul=0,x,c=0;
    scanf("%d%d",&n,&k);
    x=240-k;
    for(i=1;i<=n;i++){
        mul=mul+(5*i);
        if(mul>x){
            break;
        }
        else{
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
