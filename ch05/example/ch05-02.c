#include <stdio.h>

int main(void) {
	/* goto文 */

	/* 多重ループの内側から指定したラベルへ制御を移すことができる */
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				printf("i: %i, j: %i, k: %i\n", i, j, k);

				/* i = 1, j = 2, k = 3 の時すべてのループを抜けて指定したラベルへ制御を移す*/
				if ((i == 1) && (j == 2) && (k == 3)) {
					goto break_the_loops;
				}
			}
		}
	}

break_the_loops:
	printf("end");

}