#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n,t=0,i,sum;
    scanf("%d%d%d",&a,&b,&n);
    a=a*10;
    for(i=0;i<10;i++){
        sum=a+i;
        if(sum%b==0){
                t=1;
            break;
        }
    }
    if(t==0){
        printf("-1\n");
        return 0;
    }
    printf("%d",sum);
    for(i=1;i<n;i++){
        printf("0");
    }

    printf("\n");

    return 0;
}
