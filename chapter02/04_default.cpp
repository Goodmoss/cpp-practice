// 86������: ������ ���� ���� ����
// ����ڷκ��� ��� �Է¹޾Ƽ� ������ ���� ������ ����ϴ� ����


#include <iostream>
using namespace std;

int main()
{
	char eng;		//�Է¹��� ����
	int countA = 0;	//������ ����
	int countB = 0;	//������ ����

	cout << "�����ڸ� �Է��ϰ� 0�� ġ�ÿ�.";

	while (1)
	{
		cin >> eng;			// ���ĺ� �Է¹���

		if (eng == '0')		// 0�� �Է¹����� while���� ���������� cout�� ���
			break;

		switch (eng)
		{
		case 'a':
		case 'i':
		case 'e':
		case 'o':
		case 'u':						// aieou�� �Է¹�����
			countA = countA + 1;		// ������ ������ �����ϴ� ���� -> 1 ����
			break;	// while�� �������� ���ư�

		default:						// �� ���� ���ĺ��� �Է¹�����
			countB = countB + 1;		// ������ ������ �����ϴ� ���� -> 1 ����
			break;	// while�� �������� ���ư�
		}

	}
	
	cout << "���� ����: " << countA << "\n" ;
	cout << "���� ����: " << countB << "\n" ;

	return 0;
}