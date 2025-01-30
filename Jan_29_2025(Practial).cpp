/*#include <stdio.h>
int factorial(int);
int main() 
{
    int n,r,result;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);
    printf("Enter the number of elements which is calculate: ");
    scanf("%d",&r);
    result=factorial(n)/(factorial(n-r)*factorial(r));
    printf("The answer is:%d",result);
    return 0;
}

int factorial(int n)
{
    int product=1,i;
    for(i=1;i<=n;i++)
    {
        product*=i;
    }
    return product;
}*/


/*int main() 
{
   int arr[4][4],i,j;
   for(i=0;i<4;i++)
   printf("Enter the value:");
           scanf("%d",&arr[i][j]);
   {
       for(j=0;j<4;j++)
       {
           printf("Enter the value:");
           scanf("%d",&arr[i][j]);
       }
   }
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
           if(i==j)
           {
               printf("%d\t",arr[i][j]);
           }
       }
   }

    return 0;
}*/


/*#include <stdio.h>
int main() 
{
   int i,n;
   float x=1,A;
   printf("Enter the value: ");
   scanf("%f",&A);
   printf("Enter the iteration value: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       x=((x+(A/x))/2);
   }
   printf("The answer is:%f",x);
    return 0;
}*/
