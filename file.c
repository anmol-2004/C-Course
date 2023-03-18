#include<stdio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("anmol.txt","w");
    if (fptr==NULL)
    {
        printf("Unable to create the file!");
    }
    else
    {
        printf("File created successfully!");
    }
    
}