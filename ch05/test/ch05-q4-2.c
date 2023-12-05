#include <stdio.h>

int main(void) {
	/* 問題2
	* 1～50までの数字を使った `FizzBuzz`問題を処理するプログラムを作成する。
	* ただし数値を出力するときに、else文を使ってはいけない
	*/

	/* 1から50まで繰り返す */
	for (int i = 1; 50 >= i; i++) {

		/* FizzBuzz チェック */
		if ((i % 15) == 0) {
			printf("FizzBuzz\n");
			continue;
		}
		else if ((i % 5) == 0) {
			printf("Buzz\n");
			continue;
		}
		else if ((i % 3) == 0) {
			printf("Fizz\n");
			continue;
		}
		
		printf("%i\n", i);
	}
}