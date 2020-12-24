#include<iostream>
#include<algorithm>


using namespace std;

int main()
{

    int t,i,big,value,m;
    cin>>t>>m;
    int a[t];
    for(i=0;i<t;i++){
        cin>>a[i];
    }
    big=a[0];
    for(i=1;i<t;i++){
        if(a[i]>=big){
            big=a[i];
            value=i;
        }
    }
    cout<<value+1<<endl;
    return 0;
}
