#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,p1,p2,h1,h2,m1,m2,t1,i;
    char c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13;
    int s[502];
    scanf("%d",&t);
    while(t--){
        scanf("%d%c%d%c%c%c",&p1,&c1,&p2,&c2,&c3,&c4);
        t1=0;
        if(c3=='P' || p1==12){
            p1=p1+13-1;
            if(p1==24){
                p1=0;
            }
        }
        scanf("%d",&n);
        while(n--){
            scanf("%d%c%d%c%c%c%c%d%c%d%c%c%c",&h1,&c5,&m1,&c6,&c7,&c8,&c9,&h2,&c10,&m2,&c11,&c12,&c13);
            if(c7=='P' || h1==12){
                h1=h1+13-1;
                if(h1==24){
                    h1=0;
                }
            }
            if(c12=='P' || h2==12){
                h2=h2+13-1;
                if(h2==24){
                    h2=0;
                }
            }
            if(c3!=c7 && c3!=c12){
                s[t1]=0;
                t1++;
            }
            else if(c3==c7 && c3==c12){
                if(h1>p1 || p1>h2){
                    s[t1]=0;
                    t1++;
                }
                else if(h1==p1 && m1>p2){
                    s[t1]=0;
                    t1++;
                }
                else if(h2==p1 && m2<p2){
                    s[t1]=0;
                    t1++;
                }
                else{
                    s[t1]=1;
                    t1++;
                }
            }
            else{
                if(c3==c7){
                    if(h1<p1){
                        s[t1]=1;
                        t1++;
                    }
                    else if(h1==p1){
                        if(m1<=p2){
                            s[t1]=1;
                            t1++;
                        }
                        else{
                            s[t1]=0;
                            t1++;
                        }
                    }
                    else{
                        s[t1]=0;
                        t1++;
                    }
                }
                else{
                    if(h2>p1){
                        s[t1]=1;
                        t1++;
                    }
                    else if(h2==p1){
                        if(m2>=p2){
                            s[t1]=1;
                            t1++;
                        }
                        else{
                            s[t1]=0;
                            t1++;
                        }
                    }
                    else{
                        s[t1]=0;
                        t1++;
                    }
                }
            }
        }
        for(i=0;i<t1;i++){
            printf("%d",s[i]);
        }
        printf("\n");
    }

    return 0;
}
