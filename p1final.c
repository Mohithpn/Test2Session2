#include<stdio.h>
#include<math.h>
void input(float*x1,float*y1,float*x2 ,float*y2 )
{
 printf("enter the numbers\n");
 scanf("%f%f%f%f",x1,y1,x2,y2);
  }
void find_distance(float x1,float y1,float x2, float y2,float *distance)
{
  distance=sqrt((x1-x2)(x1-x2)+(y1-y2)*(y1-y2));
  
  
}
void output(float distance )
{
  printf("distance is %f",distance);
  
}
int main()
{
  float x1,y1,x2,y2,distance;
  input(&x1,&y1,&x2,&y2);
   find_distance(x1, y1, x2, y2,&distance);
  output(distance);
  return 0;
  }