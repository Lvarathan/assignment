/*6.The sum of the squares of the first ten natural numbers is, 1^2+2^2+3^2 … + 10^2 = 385 The
square of the sum of the first ten natural numbers is, (1 + 2 + 3 + … + 10) ^2 = 3025 Hence
the difference between the sum of the squares of the first ten natural numbers and the
square of the sum is 3025 - 385 = 2640. Find the difference between the sum of the squares
of the first one hundred natural numbers and the square of the sum. Ans: 25164150*/

#include <stdio.h>
int main(void)
{
 unsigned sum1=0, sum2 =0, i;
 for (i = 1; i <= 100; i++) {
 sum1 += i*i;
 sum2 += i;
}
printf("%u\n", sum2*sum2- sum1);
return 0;
}

