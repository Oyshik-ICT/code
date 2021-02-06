#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,num,sum1=0,sum2=0,sum3=0,j=1,r,i;
    cin>>n;
    for(i=0;i<n;i++){
            if(j>3){
                j=1;
            }
        cin>>num;
        if(j==1){
            sum1=sum1+num;
            j++;
        }
        else if(j==2){
            sum2=sum2+num;
            j++;
        }
        else if(j==3){
            sum3=sum3+num;
            j++;
        }
    }
    r=max(sum1,max(sum2,sum3));
    if(r==sum1){
        printf("chest\n");
    }
    else if(r==sum2){
        printf("biceps\n");
    }
    else if(r==sum3){
        printf("back\n");
    }

    return 0;
}
