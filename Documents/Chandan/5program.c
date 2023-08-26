#include <stdio.h>
 int main ()
 { 
    char name[100];
    printf("enter your name");
    scanf("%[^\n",name);
    printf("My name is %s\n",name);
    return 0;
 }