// 88������: ���� ������ ����
// ����ڰ� 1~100������ ���ڸ� �Է��ϸ� ����� ���� up-down�� �˷��ְ�,
// ��������� �ɸ� Ƚ���� ���


#include <iostream>
using namespace std;

int main()
{
	int userNum;		// ����ڰ� �Է��� ����
	int realNum = 50;	// ���� ����	
	int countNum = 0;	// �õ� Ƚ��

	while (1)
	{
		cout << "������ �����Ͽ� ������: ";
		cin >> userNum;

		if (userNum < realNum)			// ������ �� ū ���
		{
			cout << "������ �� ������ �� Ů�ϴ�.\n";
			countNum++;
		}
		else if (userNum > realNum)		// ������ �� ���� ���
		{
			cout << "������ �� ������ �� �۽��ϴ�.\n";
			countNum++;
		}
		else		// ������ �˾Ƴ� ���
		{
			countNum++;
			cout << "�����Դϴ�. \n";
			cout << countNum << "�� �ɷȽ��ϴ�.";
			break;
		}
	}

	return 0;
}

// ���� ���� �������� ������ �Ϸ���
/*
	srand(time(NULL));
	int number = (rand() % 100) + 1;
	return 0;
*/