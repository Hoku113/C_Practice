#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* �v���g�^�C�v�錾 */
bool event(int n);

int main(int argc, char* argv[]) {
	/* ���1
	* �������Z�q���g�p���ė^����ꂽ�����������Ȃ�^�A��Ȃ�U��Ԃ��֐����`����
	*/
	
	bool result;

	result = event(atoi(argv[1]));

	printf("%i\n", result);
}

/* �����ɗ^����ꂽ��������������𔻒肵�Č��ʂ�Ԃ� */
bool event(int n) {
	/* ���2
	* ��艉�Z�q���g�킸�ɓ����������s��
	*/

	if (0 == (n % 2)) {
		return true;
	}
	else {
		return false;
	}

	/* return (0 == (n % 2)) ? true : false; */
}