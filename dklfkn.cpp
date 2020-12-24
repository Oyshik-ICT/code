#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    char a[201];
    char b[101];
    int len;
    cin>>a>>b;
    strcat(a,b);
    len=strlen(a);
    printf("%d  %s\n",len,a);
    return 0;
}
