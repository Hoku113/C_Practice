#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
	/* ���2
	* �����ł�����������10�Ŋ���؂ꂽ��A�A3�Ŋ���؂ꂽ��B, 30�Ŋ���؂ꂽ��C,�@����ȊO��D���o�͂�����
	* �R�}���h���C��������1�ȊO�Ȃ� "specify a number" ���o�͂�����
	*/

	int value;

	/* �����̐����m�F���� */
	if (2 != argc) {
		printf("specify a number");
		return 1;
	}

	value = atoi(argv[1]);

	/* �{���`�F�b�N */
	if (0 == (value % 30)) {
		printf("C");
	}
	else if (0 == (value % 10)) {
		printf("A");
	}
	else if (0 == (value % 3)) {
		printf("B");
	}
	else {
		printf("D");
	}
}