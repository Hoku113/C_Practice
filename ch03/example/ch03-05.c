#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* ���������_������ */
	printf("%f\n", 3.25 + 4.15);
	printf("%f\n", 3.5 * 2.);

	/* �����񂩂�double�^�̕��������_������ */
	printf("%f\n", atof("123.5") + atof("32E-1"));
}