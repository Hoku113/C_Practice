#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* ���K���1 
	* �R�}���h���C���������w�肳��Ă��Ȃ���� `Hello World`, 
	* �w�肳��Ă���΍ŏ��̈�����\������v���O����
	*/

	/* �����̐��𒲂ׂ� */
	if (1 == argc) {
		printf("Hello world");
	}
	else {
		printf("%d\n", atoi(argv[1]));
	}

	return 0;
}