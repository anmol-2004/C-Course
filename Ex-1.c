#include<stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form.
*/
int main() {

    int a;
    printf("Enter the number you want multiplication table of:");
    scanf("%d",&a);

    printf("Table of %d is as follows:\n",a);
    printf("%d * %d = %d\n",a,1,(a*1));
    printf("%d * %d = %d\n",a,2,(a*2));
    printf("%d * %d = %d\n",a,3,(a*3));
    printf("%d * %d = %d\n",a,4,(a*4));
    printf("%d * %d = %d\n",a,5,(a*5));
    printf("%d * %d = %d\n",a,6,(a*6));
    printf("%d * %d = %d\n",a,7,(a*7));
    printf("%d * %d = %d\n",a,8,(a*8));
    printf("%d * %d = %d\n",a,9,(a*9));
    printf("%d * %d = %d\n",a,10,(a*10));
}