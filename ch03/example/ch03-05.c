#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* ฎฌ_๐ตค */
	printf("%f\n", 3.25 + 4.15);
	printf("%f\n", 3.5 * 2.);

	/* ถ๑ฉ็double^ฬฎฌ_๐ตค */
	printf("%f\n", atof("123.5") + atof("32E-1"));
}