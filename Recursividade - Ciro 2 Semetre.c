#include <stdio.h>

int quociente(int, int);

int main()
{
    int n1, n2;

    printf("Digite 01 valor qualquer: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    printf("O resultado eh : \t%d\n\n", quociente(n1, n2));



    return 0;
}

int quociente(int x, int y)
{
    int resultado;

    if (y > x)
    {
        resultado = 0;
    }
    else if (x >= y)
    {
        resultado = 1 + quociente(x-y, y);
    }

    return resultado;
}
