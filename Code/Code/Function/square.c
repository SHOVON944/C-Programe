#include<stdio.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("The Square is:%d",sqr(n));

}
int sqr(int a){
    return a*a;
}