#include <stdio.h>
#include <conio.h>
main () {
	for (int i = 0; i < 256; i++)
		printf ("%i : %c\n", i, i);

	getch();
	return 0;
}