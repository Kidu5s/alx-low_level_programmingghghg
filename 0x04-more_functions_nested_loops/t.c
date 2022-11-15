#include <stdio.h>

int main(void)
{
	printf("%d\n", 1402 / 1000); /* 1 */ 
	printf("%d\n", (1402 / 100) % 10); /* 4 */
	printf("%d\n", (1402 / 10) % 10); /* 0 */
	printf("%d\n", (1402 % 10)); /* 2 */
	return (0);
}
