#include <stdio.h>
#include <stdbool.h>

int main(void) {
	/* ���2
	* ch05-03.c�̃v���O������goto�����g�p���Ȃ��Ŏ�������
	*/

	/* �t���O�ϐ� */
	bool found = false;

	/* switch���̒����烋�[�v�𔲂��� */
	for (int i = 0; i < 8; i++) {
		switch (i % 3)
		{
		case 0:
			printf("Fizz\n");
			break;
		case 1:
			printf("Fizz + 1\n");
			break;
		case 2:
			found = true;
			break;
		default:
			printf("bug! never come here");
			break;
		}

		/* ���[�v���I������t���O�������Ă��邩�ǂ��� */
		if (found) {
			printf("end\n");
			break;
		}
	}
}