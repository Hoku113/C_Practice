#include <stdio.h>

int main(void) {
	/* 30 ~ 80 �܂ł̑f����\��������v���O���� */

	int flag;

	for (int i = 30; i <= 80; i++) {
		flag = 0;
		for (int j = 2; j < i; j++) {

			/* i����������̔{���ł���Ε\�������Ȃ� */
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			printf("%i\n", i);
		}
	}


}