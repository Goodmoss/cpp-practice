// 69������ ���� #1
// ����ڷκ��� ���� �ΰ��� ���� �� �� ū ���� ã�� ���α׷�

#include <iostream>		
using namespace std;	

int main()
{
	int x;
	int y;

	cout << "x ���� �Է��Ͻÿ�:";
	cin >> x;
	cout << "y ���� �Է��Ͻÿ�:";
	cin >> y;
	// �� ���� �Է¹���

	if (x > y)	// x�� y���� ũ�ٸ�
	{
		cout << x << "��" << y << "���� �� Ů�ϴ�";
	}
	else if (y > x)	// y�� x���� ũ�ٸ�
	{
		cout << y << "��" << x << "���� �� Ů�ϴ�";
	}
	else	// �� �� �ƴ϶��
	{
		cout << "�� ���� �����ϴ�";
	}

	return 0;
}