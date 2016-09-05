#include <stdio.h>
#define AREA_TRIRET(a,b) a*b / 2

int main ()
{
    int base, altura;
    printf("\n\nDigite o valor da base, logo apos digite o valor da altura\n\n");
    scanf("%d %d", &base, &altura);
    printf("o valor da area eh: %d", AREA_TRIRET(base, altura));



    return 0;
}
