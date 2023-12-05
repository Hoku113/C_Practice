#include <stdio.h>
#include <stdbool.h>

int main(void) {
	/* フラグ変数 (昨日はgotoと同じ) */

	bool found = false;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			/* i, j の積が最初に10を超えたときにループを中断して値を出力する */
			if ((i * j) > 10) {
				printf("i=%i, j=%i\n", i, j);
				found = true;
				break;
			}
		}

		/* ループを終了するフラグが立ったか */
		if (found) {
			break;
		}
	}
}