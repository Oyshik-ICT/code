#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char x,a,b,c,d;
    cin>>x>>a>>b>>c>>d;
    if(a=='T'){
        a='V';
    }
    if(c=='T'){
        c='V';
    }
    if(a=='J'){
        a='W';
    }
    if(c=='J'){
        c='W';
    }
    if(a=='Q'){
        a='X';
    }
    if(c=='Q'){
        c='X';
    }
    if(a=='K'){
        a='Y';
    }
    if(c=='K'){
        c='Y';
    }
    if(a=='A'){
        a='Z';
    }
    if(c=='A'){
        c='Z';
    }
    if(x==b && x!=d){
        printf("YES\n");
    }
    else if(x!=b && x==d){
        printf("NO\n");
    }
    else if(x==b && x==d){
        if(a>c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else if(b!=d){
        printf("NO\n");
    }
    else if(b==d){
        if(a>c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
