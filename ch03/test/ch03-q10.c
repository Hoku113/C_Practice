#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(int argc, char* argv[]) {
	/* 
		���1
		�R�}���h���C�������ŗ^����2�̐��l��double�ɕϊ����ĉ����揜��������
	*/

	double num1, num2;

	/* �R�}���h���C�������̕������double�^�ɕϊ����� */
	num1 = atof(argv[1]);
	num2 = atof(argv[2]);

	/* �����揜 */
	printf("%f\n", num1 + num2);
	printf("%f\n", num1 - num2);
	printf("%f\n", num1 * num2);
	printf("%f\n", num1 / num2);

	/* 
		���2
		�R���\�[����LDBL_MAX�̒l���o�͂�����
	*/

	printf("%lf\n", LDBL_MAX);

}