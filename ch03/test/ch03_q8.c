#include <stdio.h>
#include <stdint.h>

int main(void) {
	/* ���P */
	/* �ϐ�����16�r�b�g�̐���-10�ŏ��������A32�r�b�g�̐���y�ɑ�� -10 ���o�� */
	int16_t x = -10;
	int32_t y = x;

	printf("x: %d  y: %d\n", x, y);

	/* ���2 */
	/* 16�r�b�g�̐���x���|10�ŏ��������A32�r�b�g�̐���y�ɑ�� 65526���o�� */
	uint16_t x1 = -10;
	uint32_t y1 = x1;

	printf("x: %d y: %d\n", x1, y1);

	/* ���3 */
	/* 32�r�b�g�̐���x���[10�ŏ������A16�r�b�g�̐���y�ɑ�� -10, 65526�����ꂼ��o�� */
	int32_t x2 = -10;
	uint16_t y2 = x2;

	printf("x: %d y: %d\n", x2, y2);

	/* ���4 */
	/* 32�r�b�g�̐���x���[10�ŏ������A16�r�b�g�̐���y�ɑ�� 65536, -10�����ꂼ��o�� */
	int32_t x3 = -10;
	int16_t y3 = x3;
	uint16_t z = y3;
	x3 = z;

	printf("x: %d y: %d\n", x3, y3);


	
}