I.CÂU LỆNH WHILE
1.Cú Pháp:
While(<bt>) 
     s ;
2.ví dụ :
 Chuong trinh tính tong cac so nguyen tu 1 den n 
 
#include <stdio.h> 

#include <conio.h> 
 
void main()
{

  int i = 0, in, is = 0; 
  
  printf("Nhap vao so n: ");
  
  scanf("%d", &in);  
  
  while (i++ < in) 
  
  is = is + i;   
  
  printf("Tong: %d", is); 
  
  getch();
  
}  
