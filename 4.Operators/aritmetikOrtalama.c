
#include<stdio.h>
#include<stdlib.h>

int main(){

    float s1,s2,s3,s4, aritmetkorta;

    printf("\n 1 sandi jaz: ");
    scanf("%f",&s1);

    printf("\n 2 sandi jaz: ");
    scanf("%f",&s2);

    printf("\n 3 sandi jaz: ");
    scanf("%f",&s3);

    printf("\n 4 sandi jaz: ");
    scanf("%f",&s4);

     aritmetkorta=(s1+s2+s3+s4)/4;

     printf("\n aritmetik ortalamasi: %f\n",aritmetkorta);
     printf("\n");
     return 0;
}