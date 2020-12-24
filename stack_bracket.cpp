#include<bits/stdc++.h>

using namespace std;

int is_balanced(char input[])
{
    char stak[100],c;
    int top,n,i;
    n=strlen(input);
    top=0;
    for(i=0;i<n;i++){
        if(input[i]=='('){
            stak[top]='(';
            top++;
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
    char input[100];
    cin>>input;
    if(is_balanced(input)){
        cout<<input<<" "<<"is balanced"<<"\n";
    }
    else{
        cout<<input<<" "<<"isn't balanced"<<"\n";
    }
    return 0;
}
