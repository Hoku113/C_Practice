#include <stdio.h>

int main(void) {
	/* 30 ~ 80 までの素数を表示させるプログラム */

	int flag;

	for (int i = 30; i <= 80; i++) {
		flag = 0;
		for (int j = 2; j < i; j++) {

			/* iが何かしらの倍数であれば表示させない */
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