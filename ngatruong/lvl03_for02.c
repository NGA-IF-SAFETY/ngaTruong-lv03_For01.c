
#include<stdio.h>

void main()

{
    int a,i;
    printf("cac so nguyen ba chu so sao cho tong tam thua cua ba chu so hang tram, hang chuc, hang đon vi se bang so nguyen do\n");

    for(i=100;i<=999;i++)

        if(((i/100)*(i/100)*(i/100)+((i%100)/10)*((i%100)/10)*((i%100)/10)+((i%100)%10)*((i%100)%10)*((i%100)%10))==i)

        printf(" %d\n",i);

}
