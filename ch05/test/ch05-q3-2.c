#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char* argv[]) {
	/* ���2 
	* �ϐ���INT_MAX�ŏ��������A�R�}���h���C�������ŗ^�������ŏ��ɏ��Z�����s�������ʂ�
	* �o�͂���v���O�������쐬����B
	* �������A�R�}���h���C��������0���܂܂ꂽ�����ꍇ�̓G���[���o�͂��ď������I������
	*/

	/* �ϐ��錾 */
	int result = INT_MAX;

	/* �^����ꂽ�����̐������ɎQ�Ƃ��� */
	for (int i = 1; argc > i; i++){

		/* �R�}���h���C��������0���܂܂�Ă��邩�m�F���� */
		if (0 == atoi(argv[i])) {
			printf("divisor is 0");
			return 1;
		}

		/* ���Z�̎��� */
		result /= atoi(argv[i]);
	}

	/* �ŏI�I�Ȍ��ʂ̏o�� */
	printf("%i\n", result);

	return 0;
}