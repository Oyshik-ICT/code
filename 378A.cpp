#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,a1=0,a2=0,m1,m2;
    cin>>a>>b;
    if(a==b){
        printf("0 6 0\n");
        return 0;
    }
    for(i=1;i<=6;i++){
        m1=abs(a-i);
        m2=abs(b-i);
        if(m1>m2){
            a2++;
        }
        else if(m2>m1){
            a1++;
        }
    }
    printf("%d %d %d\n",a1,6-(a1+a2),a2);

    return 0;
}
