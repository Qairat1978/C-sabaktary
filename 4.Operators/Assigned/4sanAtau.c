#include<stdio.h>
#include<stdlib.h>

int main(){

    int myNumber,bolum,kalan,sum;
    sum=0;
   
    printf("Enter 4 digit Number\n");
    scanf("%d",&myNumber);
    bolum=myNumber/1000;
    sum+=bolum;
    kalan=myNumber%1000;

    bolum=kalan/100;
    sum+=bolum;
    kalan=kalan%100;

    bolum=kalan/10;
    sum+=bolum;
    kalan=kalan%10;
    
    sum+=kalan;
    
  
   
    printf("Sum:%d\n",sum);
   

    

    return 0;
}