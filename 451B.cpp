#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,l,r;
    scanf("%d",&n);
    if(n==1){
            printf("yes\n");
        printf("1 1\n");
        return 0;
    }
    vector<int>a(n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    l=0;
    while(l+1<n && a[l]<a[l+1]){
        l++;
    }
    r=l+1;
    while(r<n && a[r]<a[r-1]){
        r++;
    }
    reverse(a.begin()+l,a.begin()+r);
    for(i=1;i<n;i++){
        if(a[i]<a[i-1]){
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    printf("%d %d\n",l+1,r);

    return 0;
}
