#include<stdio.h>

int main()
{
    int t,i=0,j=0,k=0,num,mod;
    int a[10000];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&num);
        i=1;
        j=0;
        while(num>0){
            mod=num%10;
            num=num/10;
            if(mod==0){
                i++;
                continue;
            }
            if(i==1){
                a[j]=mod;
                j++;
                i++;
            }
            else if(i==2){
                a[j]=mod*10;
                j++;
                i++;
            }
            else if(i==3){
                a[j]=mod*100;
                j++;
                i++;
            }
            else if(i==4){
                a[j]=mod*1000;
                j++;
                i++;
            }
                    else if(i==5){
                a[j]=mod*10000;
                j++;
                i++;
            }

        }
        printf("%d\n",j);
        for(k=0;k<j;k++){
            printf("%d ",a[k]);
        }
        printf("\n");
    }
    return 0;
}
