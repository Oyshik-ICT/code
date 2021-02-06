#include<bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n,i,num,c=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&num);
        a[num]++;
    }
    for(i=1;i<1001;i++){
            if(a[i]==1){
                c++;
            }
       else if(a[i]%2==0){
            c=c+a[i]/2;
        }
        else if(a[i]%2!=0){
            c=c+(a[i]/2)+1;
        }
    }
    printf("%d\n",c);

    return 0;
}
