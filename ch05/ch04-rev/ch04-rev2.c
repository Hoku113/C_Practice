#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* 復習問題２ 
	* 条件演算子を使ってコマンドライン引数が指定されたら０, いなかったら1を出力する
	*/

	return (1 != argc) ? 0 : 1;
}