#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* ���3
	* �R�}���h���C���œ��͂��ꂽ�����̒l�𗘗p���� `fizzbuzz`���̃v���O���������
	* �������^�����ĂȂ��Ƃ��� "no arguments"���o�͂���1��Ԃ�
	*/

	int value;

	/* �R�}���h���C�������̐��𒲂ׂ� */
	if (2 != argc) {
		printf("no arguments");
		return 1;
	}

	/* �R�}���h���C�������̒l��ϐ��Ɋi�[���� */
	value = atoi(argv[1]);

	/* fizzbuzz �`�F�b�N */
	if (0 == (value % 15)) {
		printf("fizzBuzz");
	}
	else if (0 == (value % 5)) {
		printf("buzz");
	}
	else if (0 == (value % 3)) {
		printf("fiz");
	}
	else {
		printf("%i\n", value);
	}

	return 0;
}