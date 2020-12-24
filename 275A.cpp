#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a1,a2,a3,a4,a5,a6,a7,a8,a9;
   int b[3][3];
   cin>>a1>>a2>>a3;
   cin>>a4>>a5>>a6;
   cin>>a7>>a8>>a9;
   if((a1+a2+a4)%2==0){
    b[0][0]=1;
   }
   else{
    b[0][0]=0;
   }
   if((a2+a1+a3+a5)%2==0){
    b[0][1]=1;
   }
   else{
    b[0][1]=0;
   }
   if((a3+a2+a6)%2==0){
    b[0][2]=1;
   }
   else{
    b[0][2]=0;
   }
   if((a4+a1+a5+a7)%2==0){
    b[1][0]=1;
   }
   else{
    b[1][0]=0;
   }
   if((a5+a4+a6+a2+a8)%2==0){
    b[1][1]=1;
   }
   else{
    b[1][1]=0;
   }
   if((a6+a3+a5+a9)%2==0){
    b[1][2]=1;
   }
   else{
    b[1][2]=0;
   }
   if((a7+a4+a8)%2==0){
    b[2][0]=1;
   }
   else{
    b[2][0]=0;
   }
   if((a8+a7+a9+a5)%2==0){
    b[2][1]=1;
   }
   else{
    b[2][1]=0;
   }
   if((a9+a8+a6)%2==0){
    b[2][2]=1;
   }
   else{
    b[2][2]=0;
   }
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<b[i][j];
    }
    cout<<"\n";
   }
   return 0;
}
