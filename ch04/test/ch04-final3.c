#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	 /* ���3
	 * �R�}���h���C�������Ŏw�肵������5�Ŋ����Ă��܂肪�o���炻�̕������o��
	 * �R�}���h���C��������1�ȊO�̎� " specify a numnber "���o��
	 */

	/* �R�}���h���C�������`�F�b�N */
	if (2 != argc) {
		printf("specify a number");
	}

	/* �p�^�[���ɉ����łǂ̍s��������̂������߂� */
	switch (atoi(argv[1]) % 5)
	{
	case 0:
		printf("ZERO");
		break;
	case 1:
		printf("ONE");
		break;
	case 2:
		printf("TWO");
		break;
	case 3:
		printf("FOUR");
		break;
	default:
		break;
	}
}