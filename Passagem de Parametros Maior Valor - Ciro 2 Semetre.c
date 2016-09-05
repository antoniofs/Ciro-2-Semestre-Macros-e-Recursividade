#include <stdio.h>

int main (int argc, char *argv[])
{
	float n1, final;
	int i;
	if (argc == 1)
	{
		printf("não existe argumentos");
	}
	else
	{
		for (i = 1; i <= argc; i++)
		{
			n1 = atof(argv[i]);
			if (n1 > final)
			{
				final = n1;
			}
		}
		printf("o valor maior é: %f", final);

	}


	return 0;
}
