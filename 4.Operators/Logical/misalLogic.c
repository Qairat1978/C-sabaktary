#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int x=3,y=4;

printf("result :%d\n",(x>4 && x<10));
printf("result :%d\n",(x>2 && x<y));
printf("result :%d\n",(x>5 || y<3));
printf("result :%d\n",(x>2 || x<y));
printf("result :%d\n",!(x>5 && y<3));
printf("result :%d\n",!(x>2 || x<y));
return 0;
}
