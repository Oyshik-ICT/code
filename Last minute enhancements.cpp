#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,num,n;
    scanf("%d",&t);
    while(t--){
            set<int>s;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&num);
            if(s.count(num)){
                num++;
            }
            s.insert(num);
        }
        printf("%d\n",s.size());
    }

    return 0;
}

