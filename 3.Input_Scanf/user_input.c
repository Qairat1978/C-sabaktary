
/*#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d\n", age);

    return 0;
} */
/* Float engizu

#include <stdio.h>

int main() {

    float height;

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Your height is %.2f meter\n", height);

    return 0;
}
    */

/*double енгізу
#include <stdio.h>

int main() {

    double price;

    printf("Enter price: ");
    scanf("%lf", &price);

    printf("Price: %.2lf\n", price);

    return 0;
}
    
*/
/*
char енгізу

Бір символ енгізу:

#include <stdio.h>

int main() {

    char grade;

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Your grade: %c\n", grade);

    return 0;
}
*/
/*
Бірнеше variable енгізу

Мысалы:

#include <stdio.h>

int main() {

    int age;
    float height;

    printf("Enter age and height: ");

    scanf("%d %f", &age, &height);

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);

    return 0;
}
*/
/*Практикалық мысал — адамның мәліметтері

Енді бүгінгі тақырыпты біріктірейік:*/

#include <stdio.h>

int main() {

    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n--- Information ---\n");

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
