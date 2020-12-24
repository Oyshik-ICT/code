#include<bits/stdc++.h>

using namespace std;

int main()
{
    int al[28];
    char bl[12];
    int cl[12],il,len,kl=0,num;
    for(il=0;il<27;il++){
        cin>>al[il];
    }
    gets(bl);
    len=strlen(bl);
    for(il=0;il<len;il++){
            num=bl[il];
        switch(num)
        {
        case 97:
            cl[kl]=al[0];
            kl++;
            break;
        case 98:
            cl[kl]=al[1];
            kl++;
            break;
        case 99:
            cl[kl]=al[2];
            kl++;
            break;
        case 100:
            cl[kl]=al[3];
            kl++;
            break;
        case 101:
            cl[kl]=al[4];
            kl++;
            break;
        case 102:
            cl[kl]=al[5];
            kl++;
            break;
        case 103:
            cl[kl]=al[6];
            kl++;
            break;
        case 104:
            cl[kl]=al[7];
            kl++;
            break;
        case 105:
            cl[kl]=al[8];
            kl++;
            break;
        case 106:
            cl[kl]=al[9];
            kl++;
            break;
        case 107:
            cl[kl]=al[10];
            kl++;
            break;
        case 108:
            cl[kl]=al[11];
            kl++;
            break;
        case 109:
            cl[kl]=al[12];
            kl++;
            break;
        case 110:
            cl[kl]=al[13];
            kl++;
            break;
        case 111:
            cl[kl]=al[14];
            kl++;
            break;
        case 112:
            cl[kl]=al[15];
            kl++;
            break;
        case 113:
            cl[kl]=al[16];
            kl++;
            break;
        case 114:
            cl[kl]=al[17];
            kl++;
            break;
        case 115:
            cl[kl]=al[18];
            kl++;
            break;
        case 116:
            cl[kl]=al[19];
            kl++;
            break;
        case 117:
            cl[kl]=al[20];
            kl++;
            break;
        case 118:
            cl[kl]=al[21];
            kl++;
            break;
        case 119:
            cl[kl]=al[22];
            kl++;
            break;
        case 120:
            cl[kl]=al[23];
            kl++;
            break;
        case 121:
            cl[kl]=al[24];
            kl++;
            break;
        case 122:
            cl[kl]=al[25];
            kl++;
            break;

        }
    }
    sort(cl,cl+kl);
    cout<<cl[kl-1]*len<<endl;

    return 0;
}
