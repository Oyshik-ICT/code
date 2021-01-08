#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m,i,j,c,sum1,sum2,k,p;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        int s1[n],s2[m];
        sum1=0;
        sum2=0;
        c=0;
        p=0;
        for(i=0;i<n;i++){
            scanf("%d",&s1[i]);
            sum1=sum1+s1[i];
        }
        for(i=0;i<m;i++){
            scanf("%d",&s2[i]);
            sum2=sum2+s2[i];
        }
        if(sum1>sum2){
            printf("0\n");
            continue;
        }
        sort(s1,s1+n);
        sort(s2,s2+m);
        if(s1[0]==s2[m-1] ){
            printf("-1\n");
            continue;
        }
      for(j=m-1,k=0;j>=0&&k<n;j--,k++){
        sum1=sum1-s1[k]+s2[j];
        sum2=sum2-s2[j]+s1[k];
        if(sum1>sum2){
            c++;
            p=1;
            break;
        }
        else{
            c++;
        }
      }
      if(p==1){
        printf("%d\n",c);
      }
      else{
        printf("-1\n");
      }
    }

    return 0;
}
