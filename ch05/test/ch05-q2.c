#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	/* ���P
	* �R�}���h���C�������Ŏw�肵�����̐��܂ł̑��a���o�͂���v���O���������
	*/

	/* �^����ꂽ���l�𑫂������ʂ��i�[����ϐ� */
	int result = 0;

	/* �^����ꂽ�����̉񐔕��������[�v���J��Ԃ� */
	for (int i = 0; i <= atoi(argv[1]); i++) {
		result += i;
	}

	printf("%i\n", result);

	return 0;
}