#include <bits/stdc++.h>

using namespace std;

int a[105];

int main()
{
    int n,num,c=0;
    cin>>n;
    while(n--){
        cin>>num;
        if(a[num]){
            c++;
            a[num]--;
        }
        else{
            a[num]++;
        }
    }

    cout<<c<<endl;

    return 0;
}
