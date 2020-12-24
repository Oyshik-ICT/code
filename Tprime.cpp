#include<iostream>
#include<math.h>

using namespace std;

int prime(long long int a)
{
    int i,total=0,root;
    if(a==2){
        return -1;
    }
    else if(a==4){
        return 1;
    }
   else if(a%2==0){
        return -1;
    }
    root=sqrt(a);
    for(i=3;i<=root;i=i+2){
        if(a%i==0){
            total++;
        }
        if(total>1){
            return -1;
        }
    }
    if(total<1){
        return -1;
    }
    else{
        return 1;
    }
}

int main()
{
    int n,result,i;
    cin>>n;
    long long int x[n];
    for(i=0;i<n;i++){
        cin>>x[i];
        result=prime(x[i]);
        if(result==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
