#include<bits/stdc++.h>

using namespace std;

int is_balanced(char input[])
{
    char stak[100],c;
    int top,n,i;
    top=0;
    n=strlen(input);
    for(i=0;i<n;i++){
        if(input[i]=='{' || input[i]=='(' || input[i]=='['){
            stak[top]=input[i];
            top++;
           }
           else if(input[i]=='}'){
                if(top==0){
                return 0;
                }
                top--;
                c=stak[top];
                if(c!='{'){
                    return 0;
                }
           }
            else if(input[i]==')'){
                if(top==0){
                return 0;
                }
                top--;
                c=stak[top];
                if(c!='('){
                    return 0;
                }
           }
            else if(input[i]==']'){
                if(top==0){
                return 0;
                }
                top--;
                c=stak[top];
                if(c!='['){
                    return 0;
                }
           }
    }
    if(top==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char input[1001];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>input;
        if(is_balanced(input)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}
