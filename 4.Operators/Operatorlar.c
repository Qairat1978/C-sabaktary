/*C Programming — 5-сабақ
Operators — Операторлар

Енді C тіліндегі Operators тақырыбына өтейік. Бұл өте маңызды бөлім, себебі кейін if/else, loops, functions кезінде үнемі операторларды қолданамыз.

1. Operator деген не?

Operator — мәндермен қандай да бір әрекет жасайтын белгі.*/
/*
Бүгін есте сақтайтын негізгі операторлар
+    қосу
-    азайту
*    көбейту
/    бөлу
%    қалдық

=    мән беру

==   тең бе?
!=   тең емес пе?
>    үлкен
<    кіші
>=   үлкен немесе тең
<=   кіші немесе тең

&&   AND
||   OR
!    NOT

++   +1
--   -1
*/

/*
Compound Assignment Operators

C-де қысқартылған түрде жазуға болады.
Misal
int x = 10;

x += 5;   // 15
x -= 3;   // 12
x *= 2;   // 24
x /= 4;   // 6
x %= 4;   // 2

Негізгі түрлері
Operator	Мағынасы
+=	қосып, қайта сақтау
-=	азайтып, қайта сақтау
*=	көбейтіп, қайта сақтау
/=	бөліп, қайта сақтау
%=	қалдықты қайта сақтау
*/
/*
Comparison Operators

Келесі маңызды топ — салыстыру операторлары.

Operator	Мағынасы
==	тең бе?
!=	тең емес пе?
>	үлкен бе?
<	кіші ме?
>=	үлкен немесе тең бе?
<=	кіші немесе тең бе?

Мысалы:
int a = 10;
int b = 20;
printf("%d\n", a < b);
Нәтиже:
1
C-де:
1 → true
0 → false
*/

/*scanf() пен Operators-ті біріктірейік.

#include <stdio.h>

int main() {

    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n--- Results ---\n");

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    return 0;
}

Мысалы:

Enter first number: 20
Enter second number: 6

--- Results ---
Addition: 26
Subtraction: 14
Multiplication: 120
Division: 3
Remainder: 2
*/