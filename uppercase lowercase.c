#include<stdio.h>
int main()
{
int p,i;
printf("no. of letter you wanna fill \n");
scanf("%d",&p);
int  a[p];
printf("enter n \n");
for(i=0;i<p;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<p;i++){
if(a[i]>= 65 && a[i]<= 91)
printf("%c is uppercase\n",a[i]);
else if(a[i]>= 97 && a[i]<= 122)
printf("%c is lowercase \n",a[i]);
else
printf("INVALID INPUT");
}
return 0;
}
