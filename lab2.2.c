#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void) {setlocale(LC_ALL,"Russian");
float a,b,c;
printf("������� ������� a=");
scanf("%f",&a);
printf("������� ������� b=");
scanf("%f",&b);
printf("������� ������� c=");
scanf("%f",&c);
if ((a+b)>c&&(b+c)>a&&(a+c)>b)printf("����������");
else printf("�� ����������");
}
