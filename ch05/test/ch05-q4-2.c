#include <stdio.h>

int main(void) {
	/* ���2
	* 1�`50�܂ł̐������g���� `FizzBuzz`������������v���O�������쐬����B
	* ���������l���o�͂���Ƃ��ɁAelse�����g���Ă͂����Ȃ�
	*/

	/* 1����50�܂ŌJ��Ԃ� */
	for (int i = 1; 50 >= i; i++) {

		/* FizzBuzz �`�F�b�N */
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