#include <stdio.h>
#include <stdint.h>					/* �r�b�g�����ӎ�����int�^���������߂̃w�b�_�[�t�@�C�� */

int main(void) {
	int32_t i32 = -10;
	int16_t i16 = i32;				/* 32�r�b�g��-10��16�r�b�g�����t�����ɑ�� */
	uint16_t u16 = i32;					/* 32�r�b�g�́[10��16�r�b�g�����Ȃ������ɑ�� */

	i32 = i16;						/* �����̊g�����s���� */
	printf("%d\n", i32);

	i32 = u16;
	printf("%d\n", i32);
}