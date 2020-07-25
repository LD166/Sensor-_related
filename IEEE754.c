// C program to convert 
// IEEE 754 hex to int 
// into real value 
  
#include <math.h> 
#include <stdio.h> 

  

int main() 
{ 
  
//int raw = 0x43ab9567;   
  int raw = 0x41360000; 
  
  if(raw!=0)  {
   //   int sign = raw >> 31;                          // 0
   int mantissa = (raw & 0x7FFFFF) | 0x800000;         // 11244903
   printf("mantissa %x\n",mantissa);
   
   char exp = ((raw >> 23) & 0xFF) - 127 - 23;         // -15
   printf("exp %d\n",exp);
   
   int result = (mantissa * pow(2.0, exp))*100;       // 343.1672
   //printf("fudian %.2d\n",result);

    printf("Dev1= %d\n",result);
    
  }          
else {
	int result =0;
	printf("Dev2= %d\n",result);
	
     }

} 

