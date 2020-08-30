#include<stdio.h>
int a,b,temp;

void change(int x,int y)
{
    temp=x;
    x=y;
    y=temp;
    printf("after swapping-a: %d ,b: %d",x,y);
}

int main()
{

    printf("Enetr two numbers :");
    scanf("%d, %d",&a,&b);
    printf("a:%d , b:%d\n",a,b);
    change(a,b);

}
