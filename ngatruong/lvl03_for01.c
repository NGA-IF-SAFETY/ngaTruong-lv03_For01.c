#include<stdio.h>

#include<conio.h>

void main()

{

int n,i;

float s=0;

printf("nhap vao n so dau tien : \n");

scanf("%d",&n);

for(i=1;i<=n;i++)

s=s+(float)1/i ;

printf("tong n so dau tien cua day so:0.2%f",s);

}
