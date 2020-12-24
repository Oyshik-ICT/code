#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    char a[300],b[300],d[200];
    int len,i,j;
    cin>>a>>b>>d;
   len=strlen(a);
   for(i=0,j=len;i<strlen(b);i++,j++){
    a[j]=b[i];
   }
   a[j]='\0';
   len=strlen(a);
   sort(a,a+len);
   len=strlen(d);
   sort(d,d+len);
   if(0==strcmp(a,d)){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }
   return 0;
}
