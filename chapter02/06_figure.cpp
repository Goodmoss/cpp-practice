// 91������: ������ ���� ����ϱ�
// ����ڰ� ���簢��, ��, �����ﰢ�� �� �ϳ��� �����ϰ� ���ڸ� �Է��ϸ�
// �׿� �´� ����� �ؼ� ����ϴ� ���α׷�


#include <iostream>
using namespace std;

int main()
{
	int pigure;		// ���� ����
	int firstNum = 0;	// ��꿡 ���̴� ���� 1
	int secondNum = 0;	// ��꿡 ���̴� ���� 2
	float result = 0;	// �����	

	cout << "������ �����Ͻÿ�\n";
	cout << ("1. ���簢��  2. ��  3. �����ﰢ�� ");
	cin >> pigure;

	if (pigure == 1)	// ���簢���� ���
	{
		cout << "����: ";
		cin >> firstNum;
		cout << "����: ";
		cin >> secondNum;

		result = firstNum * secondNum;
		cout << "����� " << result << " �Դϴ�";
	}
	else if (pigure == 2)	// ���� ���
	{
		cout << "������: ";
		cin >> firstNum;

		result = firstNum * firstNum * 3.14;
		cout << "����� " << result << " �Դϴ�";
	}
	else if (pigure == 3)	// �����ﰢ���� ���
	{
		cout << "�غ�: ";
		cin >> firstNum;
		cout << "����: ";
		cin >> secondNum;

		result = firstNum * secondNum * 0.5;
		cout << "����� " << result << " �Դϴ�";
	}

	return 0;
}