#include <stdio.h>
#include <stdio.h>

/**
 *main - adds positive numbers.
 * @argc: arguement count
 * @argv: arguement array
 *
 * return: 0
 */

int main(int argc, char **argv)

{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)

{
	printf("0\n");
	return (0);
}
for (i = 1; argv[i]; i++)

{
	n = strtol(argv[i], &flag, 10);
	if (*flag)
	{ 
		printf("Error\n");
		return (1);
	}
	else 
	{
		sum += n;
	}
}
              printf("%d\n", sum);
	      return (0);
}


