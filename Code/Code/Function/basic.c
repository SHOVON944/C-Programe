#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter two number:\n");
    scanf("%d%d",&n1,&n2);
                                          // or printf er vitorer sum(n1,n2) uporer line e [int Rslt=sum(n1,n2)] evabe dewa jabe...
                                          //or print line e j num sum korte chai seta n1,n2 te input kore dile hoi...ei khetre int n1,n2 dewar dorkar nai
    printf("Sum is :%d\n",sum(n1,n2));
    printf("Sub is:%d\n",sub(n1,n2));
}
int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
