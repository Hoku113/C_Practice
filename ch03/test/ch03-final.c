#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void) {
	/* ���1
	* INT_MAX��2�悵���l���R���\�[���ɏo�͂���v���O������2�p�^�[���쐬
	* (1) INT_MAX���w�肵��long long�̕ϐ����g�p
	* (2) �ϐ����g�p���Ȃ�
	*/

	long long max = INT_MAX;
	max *= INT_MAX;
	printf("%lli\n", max);

	printf("%lli\n", (long long)INT_MAX * INT_MAX);

	/* ���1
	* 0xff�𗘗p���ăR���\�[����-2���o�͂���v���O������2�p�^�[���쐬����
	* (1) �ϐ��𗘗p
	* (2) �ϐ��𗘗p���Ȃ�
	*/

	char hex = 0xff;
	printf("%i\n", hex);
}