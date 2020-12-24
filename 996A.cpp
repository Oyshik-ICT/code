#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    scanf("%d",&n);
    while(n>0){
        if(n>=100){
            n=n-100;;
            c++;
        }
        else if(n>=20){
            n=n-20;
            c++;
        }
        else if(n>=10){
            n=n-10;
            c++;
        }
        else if(n>=5){
            n=n-5;
            c++;
        }
        else if(n>=1){
            n=n-1;
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
