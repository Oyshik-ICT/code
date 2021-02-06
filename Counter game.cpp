#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int   n,temp,num;
    int t,c,p,res;
    scanf("%d",&t);
    while(t--){
       cin>>n;
        res=0;
        while(1){
            if(n==1){
                break;
            }
            temp=n;
            c=0;
            p=0;
            while(temp>0){
                if(temp&1){
                    c++;
                }
                temp=temp>>1;
                p++;
            }
            if(c>1){
                num=( long long)1<<p-1;
                n=n-num;
            }
            else{
                n=n/2;
            }
            res++;
        }
        if(res%2==0){
            printf("Richard\n");
        }
        else{
            printf("Louise\n");
        }
    }

    return 0;
}
