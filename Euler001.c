#include <stdio.h>

int sum_ck_0_to_n(int c, int n)
{
	/* SUM(k){k=0...n} = n(n+1)/2 */
	/* SUM(ck){k=0...n} = cn(n+1)/2 */
	return (c*n*(n+1))/2;
}

int main(int argc, char *argv[])
{
	int sum = sum_ck_0_to_n(3,999/3) + sum_ck_0_to_n(5,999/5);
	/* The least common multiple was included twice, remove 1 */
	sum -= sum_ck_0_to_n(15,999/15);
	printf("Problem1 = %i\n", sum);
	return 0;
}