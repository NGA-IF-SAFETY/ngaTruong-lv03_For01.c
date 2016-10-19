I. Câu Lệnh Do....While
1.cú pháp:
do   s
while(bt);
2.ví dụ:
#include <stdio.h> 

 # define PASSWORD 
 
 void main(void) 
 
 {  
 
   int in; 
   do  
  {  
    printf("Nhap vao password: "); 
    scanf("%d", &in);
   }
   while (in != PASSWORD); 
 } 
