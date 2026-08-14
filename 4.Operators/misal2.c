#include<stdio.h>
#include<stdlib.h>

int main (){
    int  sum,sub,multi,mod;
    int san1,san2,div;
    printf("Birinshi sandy jaz:\n");
    scanf("%d",&san1);
    printf("Ekinshi sandy jaz:\n");
    scanf("%d",&san2);

    sum=san1+san2;
    sub=san1-san2;
    multi=san1*san2;
    div=san1/san2;
    mod=san1%san2;
    printf("Kosyndy: %d\n",sum);
    printf("Ayirma %d\n",sub);
    printf("Kobeitu %d\n",multi);
    printf("Bolu %d\n",div);
    printf("Mod alu:%d\n",mod);
    return 0;
}