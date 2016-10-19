#include<stdio.h>

void main()

{
    int a,b,i;

    printf("Nhap 2 so a, b:\n");

    scanf("%d%d",&a,&b);

    while(i!=0)

    {

        i=a%b;

        a=b;

        b=i;

    }

     printf("UCLN=%0.2d",a);

}
