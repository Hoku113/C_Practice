#include <stdio.h>
//#include <stdlib.h>

/*
	argc: コマンドとコマンドライン引数で入力された数の合計の値
	argv: コマンドライン引数で入力された情報をリストとして格納している
*/


int main(int argc, char* argv[]) { 

	if (argc == 1) {
		puts("Hello World!");
	}
	else {
		int sum = 0;
		for (int i = 1; i < argc; i++) {
			sum += atoi(argv[i]); // 警告が表示された。ただしint型を返す関数であれば実行できる(手動デコンパイルするときはエラーになる可能性が高いので行わないことを推奨)
		}
		printf("sum = %d\n", sum);
	}
	return 0;
}