#include <stdio.h>

int main(void) {
	/* 問題1
	* 1から始めて現在の数に現在の数の2倍を加えることを繰り返す。
	* もし結果が0より小さくなったらループを抜けて最終的な値を表示する
	*/

	/* 初期値の設定 */
	int value = 1;

	/* 結果が0により小さくなるまで繰り返す */
	for (int i = 0; 0 < value ; i++) {
		value += value * 2;
	}

	printf("%i\n", value);
}