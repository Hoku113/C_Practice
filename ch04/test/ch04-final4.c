#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* ���4
	* �R�}���h���C�������Ŏw�肵������10�ȉ��Ȃ�� " too small", 20���傫���Ƃ��� " too large"
	* 15�Ȃ�� "good" ����ȊO�̎��� " OK "�Əo�͂�����
	*/

	int value;

	/* �����̐����m�F���� */
	if (2 != argc) {
		printf("specify a number");
		return 1;
	}

	value = atoi(argv[1]);

	/* �����̒l�̏������s�� */
	if (10 >= value) {
		printf("too small");
	}
	else if (15 == value) {
		printf("good");
	}
	else if (20 < value) {
		printf("too large");
	}
	else {
		printf("OK");
	}

}