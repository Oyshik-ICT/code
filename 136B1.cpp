#include<bits/stdc++.h>

using namespace std;

int a1[19];
int c1[19];
int f[19];

int main()
{
    int a,c,i,mod,t1=0,t2=0;
    long long int sum=0;
    scanf("%d%d",&a,&c);
    while(a>0){
        mod=a%3;
        a1[t1]=mod;
        t1=t1+1;
        a=a/3;
    }
    while(c>0){
        mod=c%3;
        c1[t2]=mod;
        t2=t2+1;
        c=c/3;
    }
    if(t1>t2){
        t2=t1;
    }
    for(i=0;i<t2;i++){
        if(c1[i]==1){
            if(a1[i]==2){
                f[i]=2;
            }
            else{
                if(a1[i]==0){
                    f[i]=1;
                }
                else if(a1[i]==1){
                    f[i]=0;
                }
            }
        }
        else if(c1[i]==2){
            if(a1[i]==1){
                f[i]=1;
            }
            else{
                if(a1[i]==0){
                    f[i]=2;
                }
                else if(a1[i]==2){
                    f[i]=0;
                }
            }
        }
        else if(c1[i]==0){
            if(a1[i]==0){
                f[i]=0;
            }
            else{
                if(a1[i]==1){
                    f[i]=2;
                }
                else if(a1[i]==2){
                    f[i]=1;
                }
            }
        }
    }
    for(i=0;i<t2;i++){
        sum=sum+f[i]*pow(3,i);
    }
    printf("%lld\n",sum);

    return 0;
}
