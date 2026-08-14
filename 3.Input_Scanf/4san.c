#include<stdio.h>

int s1,s2,s3,s4;
int kare;
int cup;
int main(){

     printf(" Birinshi sandi kiriniz:\n");
     scanf("%d",&s1);
      printf(" Ekinshi sandi kiriniz:\n");
     scanf("%d",&s2);
      printf(" Ushunshi sandi kiriniz:\n");
     scanf("%d",&s3);
      printf(" Tortinshi sandi kiriniz:\n");
     scanf("%d",&s4);

    kare=(s1+s2+s3+s4)*(s1+s2+s3+s4);
    cup=kare*(s1+s2+s3+s4);

    printf("Sannin kvadraty: %d\n",kare);
    printf("Sannin tekshesi: %d\n",cup);

    return 0;
    
}