#include<bits/stdc++.h>

using namespace std;

void mod(long long int i,long long int t)
{
    printf("%lld\n",(i%t+t)%t);
}

int main()
{
   long long int x,y,n;
   scanf("%lld%lld%lld",&x,&y,&n);

   if(n%6==0){
        mod(x-y,1000000007);
   }
   else if(n%6==1){
    mod(x,1000000007);
   }
   else if(n%6==2){
    mod(y,1000000007);
   }
    else if(n%6==3){
    mod(y-x,1000000007);
   }
      else if(n%6==4){
    mod(-1*x,1000000007);
   }
      else if(n%6==5){
    mod(-1*y,1000000007);
   }

   return 0;
}
