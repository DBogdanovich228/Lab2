#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void main(void) {setlocale(LC_ALL,"Russian");
int a,b,c,d;
printf("������ ���� a=:");
scanf("%d", &a);
printf("������������ b � c=\n");
scanf("%d%d",&b,&c);
d=b*c;
if (a<=d) printf("��� ������");
else if (a>d) printf("��� �� ������");
}
