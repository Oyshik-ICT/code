#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[1000000],b[1000000];
    int len1,len2,i,sum1,sum2,sum3,sum4,c1=0,c2=0,c3=0;
    gets(a);
    gets(b);
    len1=strlen(a);
    len2=strlen(b);
    if(len1!=len2 || (len1==1 && len2==1)){
        printf("NO\n");
        return 0;
    }
    else{
        for(i=0;i<len1;i++){
            if(a[i]!=b[i]){
                    if(c1==0){
                        sum1=a[i];
                        sum2=b[i];
                        c1++;
                        c2++;
                    }
                    else{
                        sum3=a[i];
                        sum4=b[i];
                        if((sum1==sum4) &&(sum3==sum2)){
                            c2++;
                        }
                        else{
                                c3=1;
                            break;
                        }
                    }
            }
            if(c2>2){
                c3=1;
                break;
            }
        }
    }
    if(c3==1 || c2!=2){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}
