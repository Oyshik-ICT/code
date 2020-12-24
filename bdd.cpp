#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
    char A[1000];
    char B[1000];
    int c[1000];
    int len,power,decimal1=0,i,decimal2=0,sum,mod,j;
    cin>>A>>B;
    len=strlen(A);
    power=len-1;
    for(i=0;i<len;i++){
        decimal1=decimal1+(A[i]-'0')*(pow(2,power));
        power--;
    }
    len=strlen(B);
    power=len-1;
    for(i=0;i<len;i++){
        decimal2=decimal2+(B[i]-'0')*(pow(2,power));
        power--;
    }
    sum=decimal1+decimal2;
    i=0;
    while(sum>0){
        mod=sum%2;
        c[i]=mod;
        sum=sum/2;
        i++;
    }
   for(j=i-1;j>=0;j--){
        cout<<c[j];
   }
    cout<<endl;
    return 0;
}
