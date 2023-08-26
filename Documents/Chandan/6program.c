#include <stdio.h>
 int main()
 {
    float p,n,r,s;
    r=9.5;
    printf("enter the value of p");
    scanf("%f",&p);
    printf("enter the value of n");
    scanf("%f",&n);
    s=p*n*r/100;
    printf("%.2f",s);
    return 0;
}
