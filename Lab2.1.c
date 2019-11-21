#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void main(void) {setlocale(LC_ALL,"Russian");
int a,b,c,d;
printf("Радиус мяча a=:"); 
scanf("%d", &a);
printf("Введите b и c для нахождения произведения b*c=\n");
scanf("%d %d",&b,&c);
d=b*c;
if (a<=d) printf("мяч пройдёт");
else if (a>d) printf("мяч не пройдёт");
}
