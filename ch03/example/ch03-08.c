#include <stdio.h>
#include <stdint.h>
int main(void) {
	/* �L���X�g�� */
	int16_t i16 = -1;
	int32_t i32 = (uint16_t)i16; /* i16�� `uint`�^�Ƃ��Ĉ���i32�ɑ�����Ă��� */

	printf("%d\n", i32);

	/* ���������_���������L���X�g */
	double d = 321.543;
	printf("%i\n", (int)d); /* �L���X�g�Ő����^�ɕϊ� */
}