#include<stdio.h>
#include<conio.h>

int main()
{
    int size,num,f_big=0,s_big=0;

printf("enter the size : \n");
scanf("%d",&size);

printf("enter %d number ",size);
while (size>0)
{
    scanf("%d",&num);
    if (num>f_big)
    {
        s_big=f_big;
        f_big=num;
    }   
    else if(num>s_big)
    {
        s_big=num;
    } 
    size--;
}
printf("first big number : %d\n",f_big);
printf("second big number : %d ",s_big);
    return 0;
}