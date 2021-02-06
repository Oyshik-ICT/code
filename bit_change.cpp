#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num1,num2,n,c=0;
    scanf("%d%d",&num1,&num2);
    n=num1^num2;
    while(n>0){
        c=c+(n&1);
        n=n>>1;
    }
    printf("%d\n",c);

    return 0;
}
