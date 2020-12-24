#include<stdio.h>

int main()
{
    int n,i,count=0,num,x,total=0;
    int a[700];
    for(i=0;i<700;i++){
        a[i]=0;
    }
    scanf("%d",&n);
    x=n+1;
    while(n--){
        scanf("%d",&num);
        count=count+num;
    }
    count=count+5;
    for(i=0;i<count;i=i+x){
        a[i]=1;
    }
    x=0;
    for(i=count-1;x<5;i--){
        if(a[i]==1){
            total++;
        }
        x++;
    }
    printf("%d\n",5-total);
    return 0;
}
