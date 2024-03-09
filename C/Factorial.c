#include <stdio.h>
#include <conio.h>
void main () {
    int a, b = 1, i;
    printf("Enter a Number : ");
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        b = b*i;
    }
    printf("The factorial is %d", b);
    getch();
}