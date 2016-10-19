I.câu lệnh lặp for
1.cú pháp:
for(<bt1>;<bt2>;<bt3>)   s;
2.ví dụ
 Chuong trinh nhap vao 3 so va tinh tong
 
#include <stdio.h> 
#include <conio.h> 
 
void main()
{  
int i, in, is; 
is = 0;
for(i = 1; i<=3; i++) 
{   
printf("Nhap vao so thu %d :", i);  
scanf("%d", &in); 
is = is + in;  
}  
printf("Tong: %d", is);  
getch(); 
} 
