#include<bits/stdc++.h>

using namespace std;

 char a1[100010],c1[5];

int main()
{
    int t1,n1,i1,k1;
    scanf("%d",&t1);
    getchar();
    while(t1--){
        scanf("%d",&n1);
        scanf(" %[^\n]",a1);
        k1=0;
        for(i1=0;i1<n1;i1++){
            if(k1<=3){
                c1[k1]=a1[i1];
                k1++;
            }
            if(k1==4){
                    k1=0;
                if(!strcmp(c1,"0000")){
                    printf("a");
                }
                else if(!strcmp(c1,"0010")){
                    printf("c");
                }
                else if(!strcmp(c1,"0001")){
                    printf("b");
                }
                else if(!strcmp(c1,"0011")){
                    printf("d");
                }
                else if(!strcmp(c1,"0100")){
                    printf("e");
                }
                else if(!strcmp(c1,"0101")){
                    printf("f");
                }
                else if(!strcmp(c1,"0110")){
                    printf("g");
                }
                else if(!strcmp(c1,"0111")){
                    printf("h");
                }
                else if(!strcmp(c1,"1000")){
                    printf("i");
                }
                else if(!strcmp(c1,"1001")){
                    printf("j");
                }
                 else if(!strcmp(c1,"1010")){
                    printf("k");
                }
                  else if(!strcmp(c1,"1011")){
                    printf("l");
                }
                else if(!strcmp(c1,"1100")){
                    printf("m");
                }
                 else if(!strcmp(c1,"1101")){
                    printf("n");
                }
                  else if(!strcmp(c1,"1110")){
                    printf("o");
                }
                 else if(!strcmp(c1,"1111")){
                    printf("p");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
