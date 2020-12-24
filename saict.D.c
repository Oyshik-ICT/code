#include<stdio.h>

int sum(int x,int y)
{
    int i,j;
    static int r=1,result=0;
    for(i=0;i<x;i++){
        for(j=1;j<=y;j++){
            result=result+r;
        }
    }
    if(i<x){
        sum(D,M);
    }
    return result;
}

int main()
{
    int D,N,result,T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
            scanf("%d%d",&D,&M);
        result=sum(D,M);
    }
    printf("%d\n",result);
    return 0;

}
