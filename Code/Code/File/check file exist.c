#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Newfile1122.txt","w");
    if(fptr == NULL){
        printf(" File doesn't exist\n");
    }
    else{
        fclose(fptr);
    }
 return 0;
}