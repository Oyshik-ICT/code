#include<stdio.h>

int main()
{
    float nw,v=1,n=.8670,nm=1440.0,i,i1=2.5,i2,n0,n1,n2,ka=1.2,pd=7.2,pca,d1,d2,i3,z,pr=1.824,dd1=150.0,dd2,t1,t2,x;
    int d=180;
    printf("ID-27180060\n\n");
    printf("Enter the prime motor power : ");
    scanf("%f",&x);
    printf("Enter driving pully  speed : ");
    scanf("%f",&d1);
    printf("Enter driven pully  speed : ");
    scanf("%f",&d2);
    printf("\n");
    nw=(60*1000*v)/(3.1416*d);
    i=nm/nw;
    printf("V belt drive transmission ratio i1=2.5\n");
    i2=i/i1;
    n0=nm;
    n1=n0/i1;
    n2=n1/i2;
    printf("\n");
    printf("Shaft 1 speed : %.2f rpm\n",n1);
    printf("Shaft 2 speed : %.2f rpm\n",n2);

    pca=ka*pd;

    printf("\nPca is %f kW.So,A type belt conveyor(moderate load)\n",pca);

    i3=d1/d2;

    printf("\nTransmission ratio of pully : %f\n",i3);

    z=pca/pr;

    printf("\nz = %.0f\n",z);

    dd2=i3*dd1;

    printf("\nReference diameter of pully Dd1 = 150 and Dd2 = %f\n",dd2);

    t1=(9550.0*pd)/d1;

    printf("\nShaft one radial force : %f N.m\n",t1);

    t2=(9550.0*pd*n)/d2;

   printf("\nShaft two radial force : %f N.m\n",t2);

   return 0;
}
