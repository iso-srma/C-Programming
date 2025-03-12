#include<stdio.h>
 int main() {
 int a = 1, b = 2, c = 3; //valid
 a = b + c;
 
 // b + c = a;//invalid
 
 printf("%d \n", 3 % 2);
 printf("%d \n", -3 % 2);
 return 0;
 }
 //type conversion//

 /*
  #include<stdio.h>
 int main() {
 printf("sum of 2 & 3 : %d", 2 + 3);
 printf("sum of 2.0 & 3 : %f", 2.0 + 3);
 printf("sum of 2.0 & 3.0 : %f", 2.0 + 3.0);
 return 0;
 }
 */

 // associativity
 /*
 #include<stdio.h>
 int main() {
 printf(" Output : %d", 5+2/2*3);
return 0;
 }
*/