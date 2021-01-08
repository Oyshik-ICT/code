#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[3],n,i,c1=0,c2=0,c3=0;
    scanf("%d",&n);
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+3);
    for(i=0;i<3;i++){
        if(n%a[i]==0){
            printf("%d\n",n/a[i]);
            return 0;
        }
    }
    if(n%(a[0]+a[1])==0){
        c1=n/(a[0]+a[1]);
    }
     if(n%(a[0]+a[2])==0){
        c2=n/(a[0]+a[2]);
    }
     if(n%(a[1]+a[2])==0){
        c3=n/(a[1]+a[2]);
    }
    if(c1==0 && c2==0 && c3==0){
        printf("3\n");
    }
    else{
    printf("%d\n",(max(max(c1,c2),c3))*2);}

    return 0;
}
