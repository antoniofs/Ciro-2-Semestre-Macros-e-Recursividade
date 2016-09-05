#include <stdio.h>
#define MINIMUN2(a,b) a<b?a:b

int main ()
{
    int n1, n2;

    printf("\n\nDigite dois valores: \n\n");
    scanf("%d %d", &n1, &n2);
    printf("o menor valor eh: %d", MINIMUN2(n1,n2));

    return 0;
}
