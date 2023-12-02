#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* 問題1
	* プログラムの仕様はp112参照
	*/

	int value1;							/* 計算結果を出力させる */
	int value2;

	/* コマンドライン引数の数を確認する */
	if (4 != argc) {
		printf("3 arguments only needed");
		return 1;
	}

	value1 = atoi(argv[2]);
	value2 = atoi(argv[3]);

	/* コマンドライン引数の1番目の値によって計算方法を変更させる */
	switch (atoi(argv[1]))
	{
	case 0:
		value1 += value2;
		break;
	case 1:
		value1 -= value2;
		break;
	case 2:
		value1 *= value2;
		break;
	case 3:
		value1 /= value2;
		break;
	default:
		printf("1st argument should be 0 to 3");
		break;
	}

	printf("%i\n", value1);
	return 0;
}