#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x=0,y=0,n,num1,num2,t=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&num1,&num2);
        if(num1!=num2){
            t++;
        }
        x=x+num1;
        y=y+num2;}
    if(x%2==0 && y%2==0){
        printf("0\n");
    }
    else if(x%2!=0 && y%2!=0 && t>1){
        printf("1\n");
    }
    else if(x%2!=0 && y%2!=0 && t<=1){
        printf("-1\n");
    }
    else if((x%2!=0 && y%2==0) || (x%2==0 && y%2!=0)){
        printf("-1\n");
    }

    return 0;
}
