#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s1[101],s2[101],s3[101],n1,n2,n3,i,c=0;
    gets(s1);
    gets(s2);
    gets(s3);
    n1=strlen(s1);
    n2=strlen(s2);
    n3=strlen(s3);
    for(i=0;i<n1;i++){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u'){
            c++;
        }
    }
    if(c!=5){
        printf("NO\n");
        return 0;
    }
    c=0;
    for(i=0;i<n2;i++){
        if(s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u'){
            c++;
        }
    }
    if(c!=7){
        printf("NO\n");
        return 0;
    }
    c=0;
    for(i=0;i<n3;i++){
        if(s3[i]=='a' || s3[i]=='e' || s3[i]=='i' || s3[i]=='o' || s3[i]=='u'){
            c++;
        }
    }
    if(c!=5){
        printf("NO\n");
        return 0;
    }
    printf("YES\n");

    return 0;
}
