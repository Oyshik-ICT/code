#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,r,total,m,n=1;
    scanf("%d%d",&k,&r);
    if(k<r){
        if(r%k==0){
            printf("%d\n",r/k);
        }
        else{
            while(1){
                total=k*n;
                if(total%10==0){
                    break;
                }
                n++;
            }
            printf("%d\n",n);
        }
    }
    else if(k==r){
        printf("1\n");
    }
    else{
        while(1){
            total=k*n;
            m=total-r;
            if(total%10==0 || m%10==0){
                break;
            }
            n++;
        }
        printf("%d\n",n);
    }
    return 0;
}
