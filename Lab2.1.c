#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void main(void) {setlocale(LC_ALL,"Russian");
int a,b,c,d;
printf("–адиус м€ча a=:");
scanf("%d", &a);
printf("ѕроизведение b и c=\n");
scanf("%d%d",&b,&c);
d=b*c;
if (a<=d) printf("м€ч пройдЄт");
else if (a>d) printf("м€ч не пройдЄт");
}
