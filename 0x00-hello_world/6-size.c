#include <stdio.h>
/** 
 * main(void)
 * return 0 (sucess)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size an int %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size a long int %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size a long long int %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size a float %lu byte(s)\n", (unsigned long)sizeof(f));


return (0);

}