#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,len1,len2,n,i,c;
    char s1[100001],s2[100001];
    scanf("%d",&t);
    getchar();
    while(t--){
        scanf("%s%s",s1,s2);
        int a[125]={0};
        c=0;
        len1=strlen(s1);
        len2=strlen(s2);
        for(i=0;i<len1;i++){
            n=s1[i];
            a[n]++;
        }
        for(i=0;i<len2;i++){
            n=s2[i];
            if(a[n]>=1){
                printf("YES\n");
                c=1;
                break;
            }
        }
        if(c==0){
            printf("NO\n");
        }
    }

    return 0;
}
