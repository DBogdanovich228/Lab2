#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void) {setlocale(LC_ALL,"Russian");
float a,b,c;
printf("¬ведите сторону a=");
scanf("%f",&a);
printf("¬ведите сторону b=");
scanf("%f",&b);
printf("¬ведите сторону c=");
scanf("%f",&c);
if ((a+b)>c&&(b+c)>a&&(a+c)>b)printf("существует");
else printf("не существует");
}
