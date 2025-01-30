/*#include <stdio.h>
int main()
{
    int a,b,gcd,product,lcm;
    printf("Enter greatest number: ");
    scanf("%d",&a);
    printf("Enter least number: ");
    scanf("%d",&b);
    product=a*b;
    while(a%b!=0)
    {
        gcd=a%b;
        a=b;
        b=gcd;
    }
    lcm=product/gcd;
    printf("GCD:%d\nLCM:%d",gcd,lcm);
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int n;
    printf("Write a 4 digit number: ");
    scanf("%d",&n);
    if(n-((n/9)*9)==0)
    {
         printf("The number is divisible by 9");
    else
    {
        printf("The number is not divisible by 9");
    }
    return 0;
}*/
