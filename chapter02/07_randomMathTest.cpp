// 93������: ��� ���� ���� ����
// ������ ����, Ʋ���� ���� ������ ������
// 0~99������ ���� ���� �� ���� ���� ��� 


#include <iostream>
using namespace std;

int main()
{

	srand((unsigned int)time(NULL));
	int firstNum;
	int secondNum;
	int userNum;

	cout << "��� ������ �ڵ����� ����մϴ�.\n";

	while (1)
	{
		firstNum = (rand() % 99) + 1;
		secondNum = (rand() % 99) + 1;
		//������ �� ����

		cout << firstNum << " + " << secondNum << " = ";
		cin >> userNum;		//���� ���, �� �Է�

		if (userNum == firstNum + secondNum) 
		{
			cout << "�����Դϴ�";
			break;	//������ ��� ���α׷� ����
		}
		else
			cout << "�����Դϴ�\n";	//������ ��� �ݺ�
	}

	return 0;
}