#include<stdio.h>
#include<stdlib.h>

int main(){
    int mynumber, first,second;
    printf("on tanbali sandi jaz: ");
    scanf("%d",&mynumber);
    first=mynumber%10;
    second=(mynumber%100)/10;
    printf("\njazgan sannin birlik: %d\n",first);
    printf("jazgan sannin ondaligi: %d\n",second);
    printf("\n");
    return 0;
}