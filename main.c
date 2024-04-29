#include <stdio.h>
void myfn(int *x , int *y) //5 , 8
{
  int temp;
  temp = *x;  //temp = 5 , x = 5
  *x = *y; //*x=8 ,*y=8
  *y = temp; //*y=5 , temp = 5
  printf("x=%d,y=%d",*x,*y);
}
void main()
{
  int a , b;
  printf("enter two values: ");
  scanf("%d%d",&a,&b);     //5 and 8
  myfn(&a,&b);   //int *x=&a ==5 int *y = &b ==8
  printf("a=%d,b=%d",a,b);
}