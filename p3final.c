 #include<stdio.h>
#include<math.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
  }
int is_prime(int a)
{
  if(a==0 || a==1)
    return 0;
  for(int i=2;i<=sqrt(a);i++)
    {
      if(a%i==0)
        return 0;
    }
  return 1;
}
void output(int n,int prime)
{
  if(prime==1)
    printf("the number is prime number\n");
      else
    printf("the number is not a prime a number\n");
}
int main()
{
  int n,result;
  n=input();
  result=is_prime(n);
  output(n,result);
  return 0;
}
