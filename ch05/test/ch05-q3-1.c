#include <stdio.h>

int main(void) {
	/* ���1
	* 1����n�߂Č��݂̐��Ɍ��݂̐���2�{�������邱�Ƃ��J��Ԃ��B
	* �������ʂ�0��菬�����Ȃ����烋�[�v�𔲂��čŏI�I�Ȓl��\������
	*/

	/* �����l�̐ݒ� */
	int value = 1;

	/* ���ʂ�0�ɂ�菬�����Ȃ�܂ŌJ��Ԃ� */
	for (int i = 0; 0 < value ; i++) {
		value += value * 2;
	}

	printf("%i\n", value);
}