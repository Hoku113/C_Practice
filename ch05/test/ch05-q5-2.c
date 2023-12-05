#include <stdio.h>
#include <stdbool.h>

int main(void) {
	/* 問題2
	* ch05-03.cのプログラムをgoto文を使用しないで実装する
	*/

	/* フラグ変数 */
	bool found = false;

	/* switch文の中からループを抜ける */
	for (int i = 0; i < 8; i++) {
		switch (i % 3)
		{
		case 0:
			printf("Fizz\n");
			break;
		case 1:
			printf("Fizz + 1\n");
			break;
		case 2:
			found = true;
			break;
		default:
			printf("bug! never come here");
			break;
		}

		/* ループを終了するフラグが立っているかどうか */
		if (found) {
			printf("end\n");
			break;
		}
	}
}