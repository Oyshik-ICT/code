#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c25=0,c50=0,c=1,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(a[0]==50 || a[0]==100){
        printf("NO\n");
        return 0;
    }
    for(i=0;i<n;i++){
            if(a[i]==25){
                c25++;
            }
        if(a[i]==50){
            if(c25>0){
                c25--;
                c50++;
            }
            else{
                c=0;
                break;
            }
        }
        else if(a[i]==100){
            if(c25>0 && c50>0){
                c25--;
                c50--;
            }
            else if(c25>=3){
                c25=c25-3;
            }
            else{
                c=0;
                break;
            }
        }
    }
    if(c==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
