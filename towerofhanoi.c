/* *
 * Program - Tower of hanaoi, recursive approach
 * ------------------------------------------------------
 * The following is a recursive solution of the tower of
 * tower of hanoi problem. It is base on solution by induction.
 */

#include <stdio.h>

/* *
 * hanoi()
 * -----------------------------------------------------
 * the program assumes that we know the solution of n-1
 * pegs, and then we move the nth peg from source to destination.
 * and then move the left n - 1 pegs to destination.
 * The program calculates itself till it reaches 1, and
 * then the only left peg is moved back.
 */
void hanoi(char source, char dest, char auxilary, int n)
{
	if (n > 0) {
		hanoi(source, auxilary, dest, n - 1);
		printf("Move %c to %c\n", source, dest);
		hanoi(auxilary, dest, source, n - 1);
	}
}

int main()
{
	int n; // to get the number of pegs
	scanf("%d", &n);
	hanoi('A', 'C', 'B', n);

	return 0;
}