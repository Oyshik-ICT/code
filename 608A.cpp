#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector< pair<int,int> >v;
    int n,i,h,f1,t1,t=0,m;
    scanf("%d%d",&n,&h);

    for(i=0;i<n;i++){
        scanf("%d%d",&f1,&t1);
        v.push_back(make_pair(f1,t1));
    }

    sort(v.begin(),v.end());

    for(i=n-1;i>=0;i--){
        if(i==n-1){
            m=h-v[i].first;
            t=m+t;
            if(t<v[i].second){
                m=v[i].second-t;
                t=t+m;
            }
        }
        else{
            m=v[i+1].first-v[i].first;
            t=t+m;
            if(t<v[i].second){
                m=v[i].second-t;
                t=t+m;
            }
        }
    }
    t=t+v[0].first;

    printf("%d\n",t);

    return 0;
}
