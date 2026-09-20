
#include<stdio.h>
#include<stdlib.h>

int main(){

int jyl;

printf("Kai jylgy bolasiz?:\n");
scanf("%d",&jyl);
jyl=2026-jyl;
if (jyl <= 15) {
    printf("Ote jas ekensiz\n");

} else if (jyl <= 35) {
    printf("Jas ekensiz\n");

} else if (jyl <= 55) {
    printf("Orta jasta ekensiz\n");

} else {
    printf("Egde jasta ekensiz\n");
}
return 0;
}