// verify whether ,any given input number is amstrong or not
#include <stdio.h>
#include <math.h>
int main() {
   int num, originalNum, remainder, result = 0;
   int n = 0;  // Count the number of digits

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

   // Count the number of digits
   while (originalNum != 0) {
       originalNum /= 10;
       ++n;
   }

   originalNum = num;

   while (originalNum != 0) {
       remainder = originalNum % 10;
       result += pow(remainder, n);  // Raise each digit to the power of n
       originalNum /= 10;
   }

   if (result == num)
       printf("%d is an Armstrong number.", num);
   else
       printf("%d is not an Armstrong number.", num);

   return 0;
}
