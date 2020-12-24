#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    while(1){
        if(n>0){
            printf("B");
            n--;
        }
        if(m>0){
            printf("G");
            m--;
        }
        if(m==0 && n==0){
            break;
        }
    }
    printf("\n");
    return 0;
}
