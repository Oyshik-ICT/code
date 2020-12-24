#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char A[1001],B[1001],result[1010];
    int len,i,carry=0,j=0;
    cin>>A>>B;
    len=strlen(A);
    for(i=len-1;i>=0;i--){
        if(A[i]=='1' && B[i]=='1'){
            if(carry==0){
                result[j]='0';
                carry=1;
                cout<<result[j];
                j++;
                if(i==0){
                    result[j]='1';
                    cout<<result[j];
                }
            }
            else{
                result[j]='1';
                carry=1;
                cout<<result[j];
                j++;
            }
        }
        else if((A[i]=='1' && B[i]=='0') || (A[i]=='0' && B[i]=='1')){
            if(carry==0){
                result[j]='1';
                carry=0;
                cout<<result[j];
                j++;
            }
            else{
                result[j]='0';
                carry=1;
                cout<<result[j];
                j++;
            }
        }
        else if(A[i]=='0' && B[i]=='0'){
            if(carry==1){
                result[j]='1';
                cout<<result[j];
                j++;
                carry=0;
            }
            else{
                result[j]='0';
               cout<<result[j];
                j++;
                carry=0;
            }
        }
        else if(B[i]=='\0' && A[i]=='1'){
            if(carry==1){
                result[j]='0';
                cout<<result[j];
                j++;
                result[j]='1';
                cout<<result[j];
                j++;
            }
            else{
                result[j]='1';
                cout<<result[j];
                j++;
            }
        }
        else if(B[i]=='\0' && A[i]=='0'){
            if(carry==1){
                result[j]='1';
                cout<<result[j];
                j++;
            }
            else{
                result[j]='0';
                cout<<result[j];
                j++;
            }
        }
    }
   // result[j]='\0';
    //cout<<result<<endl;
    return 0;
}
