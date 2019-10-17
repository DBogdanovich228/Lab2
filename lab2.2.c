#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void) {setlocale(LC_ALL,"Russian");
float a,b,c;
printf("Введите сторону a=");
scanf("%f",&a);
printf("Введите сторону b=");
scanf("%f",&b);
printf("Введите сторону c=");
scanf("%f",&c);
if ((a+b)>c&&(b+c)>a&&(a+c)>b)printf("Существует");
else printf("Не существует");
}
