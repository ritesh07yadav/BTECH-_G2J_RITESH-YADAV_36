#include<stdio.h>
void swap (int*a,int*b){
    int temp;
    temp = *a ;
    *a =*b;
    *b = temp ;
    printf("in sawp function formal parameter a =%d, b=%d",*a,*b);
}
int main ()
{
    int x, y;
printf("enter two values");
scanf("%d%d",&x ,&y);
printf("before swapping original values x=%d,y=%d",x,y);
swap(&x,&y);
printf("after swapping original values x =%d,y=%d",x,y);
return 0 ;
}
