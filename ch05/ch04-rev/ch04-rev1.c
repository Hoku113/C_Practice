#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* 復習問題1 
	* コマンドライン引数が指定されていなければ `Hello World`, 
	* 指定されていれば最初の引数を表示するプログラム
	*/

	/* 引数の数を調べる */
	if (1 == argc) {
		printf("Hello world");
	}
	else {
		printf("%d\n", atoi(argv[1]));
	}

	return 0;
}