

/*
Негізгі Data Types
C тілінде ең маңызды типтер:
Type	Не сақтайды	Мысал
int	    бүтін сан	48
float	бөлшек сан	3.14
double	дәлірек бөлшек сан	3.141592
char	бір символ	'A'
_Bool / bool	true/false	1, 0

*/
/*
int-ge misal
*/
#include <stdio.h>

int main() {

    int age = 48;
    int year = 2026;
    int price = 5000;

    printf("%d\n", age);
    printf("%d\n", year);
    printf("%d\n", price);

    return 0;
}
/*
float-ka misal
*/
#include <stdio.h>

int main() {

    float temperature = 36.5;

    printf("%.1f\n", temperature);

    return 0;
}

/*
double-ga misal
*/
#include <stdio.h>

int main() {

    double pi = 3.14159265359;

    printf("%.10lf\n", pi);

    return 0;
}
/*
int,float,double, bool jane char barine   bir misal

*/
#include <stdio.h>
#include <stdbool.h>

int main() {

    int age = 48;
    float height = 1.78;
    double salary = 500000.50;
    char grade = 'A';
    bool isWorking = true;

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Salary: %.2lf\n", salary);
    printf("Grade: %c\n", grade);
    printf("Working: %d\n", isWorking);

    return 0;
}

/*
Ең маңызды % форматтары

C-де printf() қолданғанда type-қа сәйкес format specifier керек.

Type	printf()
int	%d
unsigned int	%u
float	%f
double	%f
char	%c
string (char[])	%s
pointer	%p
sizeof() нәтижесі	%zu
*/
/*
sizeof()

Бұл өте маңызды.

sizeof() белгілі бір data type немесе variable компьютер жадында қанша байт алатынын көрсетеді.

Мысалы:

#include <stdio.h>

int main() {

    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(char));

    return 0;
}

Көбіне:

4
4
8
1

сияқты нәтиже көресің.
*/