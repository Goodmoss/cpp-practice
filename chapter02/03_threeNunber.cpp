// 74������: �Է¹��� ������ ���� �� ���� ū �� ã��
// if-else�� ���


#include <iostream>
using namespace std;

int main()
{
	int firstNum, secondNum, thirdNum;	//���� �Է¹��� ����

	cout << "���� �� ���� �Է��Ͻÿ�";
	cin >> firstNum;
	cin >> secondNum;
	cin >> thirdNum;
	// ���� ������ �Է¹޾Ƽ� �� ������ ������

	if (firstNum >= secondNum && firstNum >= thirdNum)		// firstNum�� ���� ū ���
	{
		cout << "���� ū ����" << firstNum << "�Դϴ�";
	}
	else if (secondNum >= firstNum && secondNum >= thirdNum)	// secondNum�� ���� ū ���
	{
		cout << "���� ū ����" << secondNum << "�Դϴ�";
	}
	else
	{
		cout << "���� ū ����" << thirdNum << "�Դϴ�";		// �� ���� ��� (thirdNum�� ���� ū ���)
	}

	return 0;
}

// ���� ū ���� ���ϴ� �����̱� ������ 
// ���� ���� ��� �� �� �ƹ� ���̳� �������� �ȴ�.

// �� ������
// && : �� �� ��� ���϶� true ��ȯ