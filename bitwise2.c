#include<stdio.h>

int main()
{
    int n,m,x;
    while(1){
        printf("Enter your number(enter 0 to exit) : ");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        printf("How many bits you want to shif left :");
        scanf("%d",&x);
        m=n<<x;
        printf("Result is : %d\n",m);
    }
    return 0;
}
