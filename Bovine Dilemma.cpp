#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j;
        float area;
        scanf("%d",&n);
        int a[n];
        set<float> m;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
           for(j=i+1;j<n;j++){
                area=(-a[i]+a[j])/2.0;
                m.insert(area);
           }
        }
        printf("%d\n",m.size());
    }

    return 0;
}
