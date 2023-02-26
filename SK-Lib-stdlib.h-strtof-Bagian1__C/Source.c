#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* strtof */
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char szOrbits[] = "686.97 365.24";
	char* pEnd;
	float f1, f2;

	f1 = strtof(szOrbits, &pEnd);
	f2 = strtof(pEnd, NULL);
	
	printf("One martian year takes %.2f Earth years.\n", f1 / f2);

	_getch();
	return 0;
}