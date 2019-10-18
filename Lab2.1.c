#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void main(void) {setlocale(LC_ALL,"Russian");
int a,b,c,d;
printf("Радиус мяча a=:"); \\1
scanf("%d", &a);
printf("Произведение b*c=\n");
scanf("%d%d",&b,&c);
d=b*c;
if (a<=d) printf("мяч пройдёт");
else if (a>d) printf("мяч не пройдёт");
}
