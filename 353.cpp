#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ue=0,uo=0,le=0,lo=0,x,y;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&x,&y);
        if(x%2==0){
            ue++;
        }
        else{
            uo++;
        }
        if(y%2==0){
            le++;
        }
        else{
            lo++;
        }
    }
    if(ue>0 && le>0 && uo==0 && lo==0){
        printf("0\n");
    }
    else if(uo%2==0 && lo%2==0){
        printf("0\n");
    }
    else if((uo%2==0 && le%2==0 && uo==le && uo>1 && le>1) || (ue%2==0 && lo%2==0 && ue==lo && ue>1 && lo>1)){
        printf("0\n");
    }
    else if(uo%2!=0 && lo%2!=0 && uo==lo &&(ue==0 && le==0)){
        printf("-1\n");
    }
    else if(uo%2!=0 && lo%2!=0 && uo==lo &&(ue==le)){
        printf("-1\n");
    }
    else if((uo%2!=0 && lo%2==0) || (uo%2==0 && lo%2!=0)){
        printf("-1\n");
    }
    else if((uo%2!=0 && le%2!=0 && uo==le) || (ue%2!=0 && lo%2!=0 && ue==lo)){
        printf("-1\n");
    }
    else{
        printf("1\n");
    }

    return 0;
}
