#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    char s[]={'R','O','Y','G','B','I','V','\0'};
    scanf("%d",&n);
    if(n%7==0){
        for(i=0;i<n/7;i++){
            printf("%s",s);
        }
        printf("\n");
    }
    else{
        printf("%s",s);
        j=3;
        for(i=7;i<n;i++){
            if(j==7){
                j=3;
            }
            printf("%c",s[j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}
