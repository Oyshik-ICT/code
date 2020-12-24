#include<bits/stdc++.h>

using namespace std;

int is_prime(int i)
{
    if(i==2){
        return 1;
    }
    if(i%2==0){
        return 0;
    }
    int root=sqrt(i);
    int x;
    for(x=3;x<=root;x=x+2){
        if(i%x==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,i,c=0,result;
    cin>>n;
        for(i=2;;i++){
            result=is_prime(i);
            if(result==1){
                printf("%d ",i);
                c++;
            }
            if(c==n){
                break;
            }
        }
        printf("\n");
        return 0;
}
