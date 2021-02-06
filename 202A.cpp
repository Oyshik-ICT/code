#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[11];
    char ch='A';
    int n,i;
    scanf("%s",str);
        n=strlen(str);
        for(i=0;i<n;i++){
            if(str[i]>ch){
                ch=str[i];
            }
        }
        for(i=0;i<n;i++){
            if(str[i]==ch){
                printf("%c",ch);
            }
        }
        printf("\n");
    return 0;
}
