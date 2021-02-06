#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100005];
    int i,n,a1=0,a2=0,b1=0,b2=0,c1=0,c2=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,m1,m2;
    scanf("%s",s);
    n=strlen(s);
    if(n==1){
        printf("-1\n");
        return 0;
    }
    for(i=0;i<n;i++){
        if(s[i]=='a' && a1==0){
            a1=i+1;
        }
        else if(s[i]=='a' && i+1>a2){
            a2=i+1;
        }
        else if(s[i]=='b' && b1==0){
            b1=i+1;
        }
        else if(s[i]=='b' && i+1>b2){
            b2=i+1;
        }
        else if(s[i]=='c' && c1==0){
            c1=i+1;
        }
        else if(s[i]=='c' && i+1>c2){
            c2=i+1;
        }
    }
    if(a1>0 && a2>0 && b1==0 && b2==0 && c1==0 && c2==0){
        printf("-1\n");
        return 0;
    }
     if(b1>0 && b2>0 && a1==0 && a2==0 && c1==0 && c2==0){
        printf("-1\n");
        return 0;
    }
      if(c1>0 && c2>0 && b1==0 && b2==0 && a1==0 && a2==0){
        printf("-1\n");
        return 0;
    }
    if(a1!=0 && b2!=0){
    d1=abs(a1-b2);}

    if(b1!=0 && a2!=0){
    d2=abs(b1-a2);}

    if(c1!=0 && a2!=0){
    d3=abs(c1-a2);}

    if(c1!=0 && b2!=0){
    d4=abs(c1-b2);}

    if(a1!=0 && c2!=0){
    d5=abs(a1-c2);}

    if(b1!=0 && c2!=0){
    d6=abs(b1-c2);}

    m1=max(d1,max(d2,d3));
    m2=max(d4,max(d5,d6));

    printf("%d\n",max(m1,m2));

    return 0;
}
