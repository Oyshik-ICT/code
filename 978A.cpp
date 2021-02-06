#include<bits/stdc++.h>

using namespace std;

int c[1000];

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    set<int>s;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[a[i]]++;
        s.insert(a[i]);
    }
    printf("%d\n",s.size());
    for(i=0;i<n;i++){
        if(c[a[i]]==1){
            printf("%d ",a[i]);
        }
        else if(c[a[i]]>1){
            c[a[i]]--;
        }
    }
    printf("\n");
    return 0;
}
