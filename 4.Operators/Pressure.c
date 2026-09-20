#include<stdio.h>
#include<stdlib.h>

int main(){

    float pressure, constantR=0.82;
    int numberOfMoles, volume,heat;
    
    printf("Ydys kolemi:");
    scanf("%d",&volume);
    printf("Ydystagy  mol sany:");
    scanf("%d",&numberOfMoles);
    printf("Temperatura :");
    scanf("%d",&heat);

  pressure=(numberOfMoles*constantR*heat)/volume;
  
  printf("%d kolemdi ydystagy gazdyn kisimi:%f\n\n\n",volume,pressure);

  return 0;


}