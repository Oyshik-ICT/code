#include<bits/stdc++.h>

using namespace std;


int main()
{
    char c[1000010];
    int len;
    long long int d,i,p,sum=0;
    scanf("%s",c);
    len=strlen(c);
    for(i=0;i<len;i++){
        if(c[i]=='^'){
            p=i;
            break;
        }
    }
    for(i=0;i<len;i++){
        if(c[i]>='0' && c[i]<='9'){
            d=c[i]-48;
            sum=sum+d*(i-p);
        }
    }
    if(sum>0){
        printf("right\n");
    }
    else if(sum<0){
        printf("left\n");
    }
    else{
        printf("balance\n");
    }

    return 0;
}

