#include <stdio.h>
#include <limits.h>				/* ���ꂼ��̌^�̒l�̍ő�l�A�ŏ��l�����炩���ߊi�[����Ă���w�b�_�[�t�@�C�� */

int main(void) {
	/* ���P */
	/* �x�����o�錴������肵�������� */
	long long value = LLONG_MAX;
	printf("%lli\n", value);			/* `%i` -> `%lli` */

	/* ���2 */
	/* �^�̒�`�l��ϐ��ɑ�����Ă���o�͂����� */

	int i = INT_MAX;
	unsigned int uInt = UINT_MAX;
	long lInt = LONG_MAX;
	unsigned long uLInt = ULONG_MAX;
	long long llInt = LLONG_MAX;
	unsigned long long uLlInt = ULLONG_MAX;

	printf("%i\n", i);
	printf("%ui\n", uInt);
	printf("%li\n", lInt);
	printf("%lu\n", uLInt);
	printf("%lli\n", llInt);
	printf("%llu\n", uLlInt);

	/* ���3 */
	/* �ȉ��̃v���O�����̌x�����o�錴������肵�������� */
	printf("%lli, %llu\n", 32LL, 48ULL);
}