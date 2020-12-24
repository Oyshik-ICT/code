#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long long int n,i,big,result;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    big=a[n-1]-a[0];
    if(a[0]==a[n-1]){
        n=n-1;
        result=(n*(n+1))/2;
    }
    else{
        long long int c1=1,c2=1,x;
        x=a[0];
        for(i=1;i<n;i++){
            if(x!=a[i]){
                break;
            }
            else{
                c1++;
            }
        }
        x=a[n-1];
        for(int j=n-2;j>=0;j--){
            if(x!=a[j]){
                break;
            }
            else{
                c2++;
            }
        }
        result=c1*c2;
    }
    cout<<big<<" "<<result<<endl;

    return 0;
}
