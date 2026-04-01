#include<stdio.h>
void swap (int a,int b)
{
    int temp ;
    temp = a;
    a=b;
    b= temp ;
    printf(" \n in swap function formal parameter a = %d ,b= %d ",a,b);
}
int main ()
{
    int x,y;
    printf("enter two value");
    scanf("%d%d",&x,&y);
    printf("before swaping original value are x =%d ,y=%d",x,y);
    swap(x,y);
    printf("after swaping values x=%d, y=%d",x,y);
    return 0;
}
