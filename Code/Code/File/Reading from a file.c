#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Newfile1122.txt","r");
    
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n", ch);
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n", ch);
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n", ch);
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n", ch);
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n", ch);

    fclose(fptr);

    return 0;
}