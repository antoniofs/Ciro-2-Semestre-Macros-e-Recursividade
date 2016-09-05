#include <stdio.h>
#define MINIMUN2(a,b) a<b?a:b
#define MINIMUN3(c,d) c<d?c:d

int main ()
{
    int n1, n2, n3;

    printf("\n\nDigite tres valores: \n\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("o menor valor eh: %d",  MINIMUN3(MINIMUN2(n1, n2), n3));

    return 0;
}
