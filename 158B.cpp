#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c1=0,c2=0,c3=0,c4=0,c=0,i,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num==1){
            c1++;
        }
        else if(num==2){
            c2++;
        }
        else if(num==3){
            c3++;
        }
        else if(num==4){
            c4++;
        }
    }
    while(c3>0 && c1>0){
        c1--;
        c3--;
        c++;
    }
    c=c+c3;
    while(c2>=2){
        c2=c2-2;
        c++;
    }
    while(c2==1 && c1>=2){
        c2--;
        c1=c1-2;
        c++;
    }
    if(c2==1 && c1==1){
        c++;
        c1--;
        c2--;
    }
    if(c2>0){
        c++;
    }
    while(c1>=4){
        c1=c1-4;
        c++;
    }
    if(c1>0){
        c++;
    }
    printf("%d\n",c+c4);

    return 0;
}
