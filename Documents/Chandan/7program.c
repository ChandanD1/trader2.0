#include <stdio.h>
int main()
{
int n,i,f=1;
printf("enter the number");
  scanf("%d",&n);

for (i=n;i>=1;i--)
   {
    f=f*i;
   }
   
printf("%d",f);

return 0;

}