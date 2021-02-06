#include<bits/stdc++.h>

int main()
{
    char ch[4];
    scanf("%s",ch);
    if(ch[0]==ch[1] && ch[1]==ch[2]){
        printf("Won\n");
    }
    else{
        printf("Lost\n");
    }

    return 0;
}
