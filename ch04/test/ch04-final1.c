#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* �v���g�^�C�v�錾 */
bool odd(int number);

int main(int argc, char* argv[]) {
	/* ���1
	* �R�}���h���C����������Ȃ� `odd` �����Ȃ� `even`���o�͂�����v���O����
	*/

	int value;

	/* �����̐����m�F���� */
	if (2 != argc) {
		return 1;
	}

	value = atoi(argv[1]);

	bool judge = odd(value);

	if (true == judge) {
		printf("odd");
	}
	else {
		printf("even");
	}

}

bool odd(int number) {

	if (1 == (number % 2)){
		return true;
	}
	else {
		return false;
	}

	
}