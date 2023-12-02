#include <stdio.h>

int main(int argc, char* argv[]) {
	/* 問題1
	* コマンドライン引数の数を2個指定したら"Bingo", それ以外は"Oops"を出力
	*/

	if (3 == argc) {
		printf("Bingo!");
	}
	else {
		printf("Oops");
	}
}