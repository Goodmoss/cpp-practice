// 51������: �ִ��ѵ��� ���� ���
// ���� 1000�� ���� ��, ���� 300��
// �� �� �ִ� ������ ������ ������ �� ���ϱ�

#include <iostream>
using namespace std;

int main()
{
	int money = 1000;  
	int candy_price = 300;
	// '���� ���� ��', '������ ����' ������ ���������� ����
	int max_candy, changes;
	
	cout << "���� ���� ��:" << money << endl;
	cout << "������ ����:" << candy_price << endl;
	// ���� �ݾװ� ������ ���� ���

	max_candy = money / candy_price;	// ���� �ݾ�/�������� ���� ���� max_candy�� ���� (�� �� �ִ� �Ҵ� ���� ����)
	changes = money % candy_price;		// ���� �ݾ�/�������� �������� ���� max_candy�� ���� (�ܵ�)

	cout << "�ִ�� �� �� �ִ� ĵ���� ����:" << max_candy << endl;
	cout << "ĵ�� ���� �� ���� ��:" << changes << endl;
	// �ִ��ѵ��� ����, �ܵ� ���

	return 0;
}