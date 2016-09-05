#include <stdio.h>

int div(int, int); //prototipo

int main (int argc, char *argv[])
{
    int n1, n2;

    if (argc == 1)
    {
        printf("Não passou argumentos\n");
    }

    printf("\nArgc : %d\n\n", argc);

    //Passando para o valor int
    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);

    //Passagem de valor por referencia
    div(n1, n2);



    return 0;
}

int div (int y, int x)
{
    int resultado;

    if (y > x)
    {
        resultado = 0;
    }
    else if (x >= y)
    {
        resultado = 1 + div(x-y, y);
    }

    return resultado;
}
