/*
C тілінде мәтіндік ақпаратты (Textual Data) сақтау бар.
 C-де арнайы string деген дерек типі жоқ,
 мәтін әдетте char массиві арқылы сақталады.

1. Қарапайым мәтін сақтау
*/
#include <stdio.h>

int main() {

    char name[] = "Kairat";

    printf("%s\n", name);

    return 0;
}
/*

Нәтиже:

Kairat

Мұнда:

char name[] = "Kairat";

дегеніміз — "Kairat" мәтінін char массивінде сақтау.

2. Неге char?

char бір символ сақтайды:

char letter = 'K';

printf("%c\n", letter);

Нәтиже:

K

Ал бірнеше символ болса:

char name[] = "Kairat";

Яғни:

K a i r a t
3. ' ' және " " айырмашылығы

Бұл өте маңызды.

Бір символ:
char letter = 'K';

'K' → бір символ

Мәтін:
char name[] = "Kairat";

"Kairat" → мәтін

Сондықтан:

char x = 'A';       // дұрыс
char name[] = "A";  // дұрыс
4. %c және %s

Бір символды шығару:

char letter = 'A';

printf("%c\n", letter);

Мәтінді шығару:

char name[] = "Kairat";

printf("%s\n", name);

Есте сақта:

%c → бір char
%s → string (мәтін)
5. User-ден мәтін қабылдау

Мысалы:*/

#include <stdio.h>

int main() {

    char name[50];

    printf("Atinizdi engiziniz: ");
    scanf("%49s", name);

    printf("Salem, %s!\n", name);

    return 0;
}
/*

Енгізу:

Atinizdi engiziniz: Kairat

Нәтиже:

Salem, Kairat!

Мұнда бір маңызды нәрсе бар:

scanf("%49s", name);

Мұнда &name жазбаймыз.

Себебі массивдің аты name өзі оның бірінші элементінің адресіне айналады.

6. Бірнеше сөзден тұратын мәтін

Мысалы:

Kairat Tulegenov

scanf("%s", name) тек Kairat бөлігін ғана алады.

Ол үшін fgets() қолданған дұрыс:
*/

#include <stdio.h>

int main() {

    char name[100];

    printf("Atinizdi engiziniz: ");
    fgets(name, sizeof(name), stdin);

    printf("Siz: %s", name);

    return 0;
}

/*
Енгізу:

Kairat Tulegenov

Нәтиже:

Siz: Kairat Tulegenov
7. C тіліндегі String қалай сақталады?

Мынаған қара:

char name[] = "Kairat";

Ішкі жағынан шамамен былай сақталады:

K   a   i   r   a   t   \0

Соңындағы:

\0

— null character.

Ол C тіліне:

"Мәтін осы жерде аяқталды"

деп көрсетеді.

Сондықтан "Kairat" үшін массивте 7 орын керек:

K a i r a t \0
1 2 3 4 5 6 7
Қысқаша схема
C
│
├── char
│     └── 'A'          → бір символ
│
└── char[]
      └── "Kairat"     → мәтін

Сенің қазіргі C курсың бойынша Storing Textual Expressions тақырыбын 
String / Character Arrays деп түсінуге болады. Одан кейін 
strlen(), strcpy(), strcmp(), strcat() сияқты String 
Functions тақырыбына өту өте дұрыс болады.
*/