// 55������: �ֻ��� ����
// �ֻ��� �� ���� ������ ���� ���ϱ�


/*
!! 1���� 6 ������ ���� �߻���Ű�� �ڵ� !!

int main()
{
	srand(time(NULL));
	int number = (rand() % 6) + 1;
	return 0;
}
*/


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int addTwoNumber;
	srand(time(NULL));
	int firstNumber = (rand() % 6) + 1;
	int secondNumber = (rand() % 6) + 1;

	addTwoNumber = firstNumber + secondNumber;

	cout << "�� �ֻ��� ��" << addTwoNumber;

	return 0;
}