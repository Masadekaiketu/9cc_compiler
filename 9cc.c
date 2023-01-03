#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		fprintf(stderr, "引数の個数が正しくありません。\n");
		return 1;
	}

	printf(".intel_syntax noprefix\n");
	printf(".global main\n");
	printf("main:\n");
	printf("  mov rax, %d\n", atoi(argv[1])); /*整数の文字列型データをint型に変更する関数atoi*/
	printf("  ret\n");
	return 0;
}


