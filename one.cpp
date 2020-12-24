#include<bits/stdc++.h>

using namespace std;

void result(int i,int j)
{
    int temp,k,c,m=-1,i1,j1;
    i1=i;
    j1=j;
    if(i1>j1){
        temp=i1;
        i1=j1;
        j1=temp;
    }
    for(k=i1;k<=j1;k++){
            int t=k;
            c=0;
        while(1){
            if(t==1){
                if(c==0){
                    c++;
                }
                else{
                    c++;
                }
                break;
            }
            if(t%2==0){
                t=t/2;
            }
          else if(t%2!=0) {
            t=(3*t)+1;
           }
           c++;
        }
        if(c>m){
            m=c;
        }
    }
    printf("%d %d %d\n",i,j,m);
}

int main()
{
    int i,j;
    while((scanf("%d%d",&i,&j))!=EOF){
        result(i,j);
    }

    return 0;
}
