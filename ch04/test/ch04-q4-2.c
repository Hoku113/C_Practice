#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* ���2
	* �R�}���h���C�������œ��͂�������123�Ȃ�"Bingo", ������傫�����"Greater"
	* ���������"less", ������1�ȊO�̎���"specify a number"���o��
	*/

	int value;							/* �R�}���h���C�������̒l���i�[����ϐ� */

	/* �R�}���h���C�������̐���1�����ׂ� */
	if (2 == argc) {

		/* �R�}���h���C�������̒l��ϐ��Ɋi�[���� */
		value = atoi(argv[1]);

		/* �R�}���h���C�������̒l�𒲂ׂ� */
		if (123 == value) {
			printf("Bingo");
		}
		else if (123 < value) {
			printf("Greater");
		}
		else if (123 > value) {
			printf("less");
		}
	}
	else {
		printf("specify a number");
	}
}