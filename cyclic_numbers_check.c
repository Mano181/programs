#include<stdio.h>
int main()
{
long long int num1 , num2 , power , nod , rotate;
scanf("%lld%lld",&num1 , &num2);
power = 1;
nod = 0;
while(num1 / power)
{
 power *= 10;
 nod++;
}
power /= 10;
rotate = num1;
while(rotate != num2 && nod)
{
 rotate = (rotate%10)*power + (rotate/10);
 nod--;
}
if(rotate == num2 && nod != 0 )
 printf("Yes");
else
 printf("No");
return 0;
}
