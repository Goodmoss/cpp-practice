// 72������: ��� �ڵ� ������
// ��� �ڵ�� a ���� z ������ ���� �� �ϳ�
// ����ڰ� �Է��� ���ڰ� ��� �ڵ��� �տ� �ִ��� �ڿ� �ִ��� �˷���

#include <iostream>
using namespace std;

int main()
{
	char userCode ;
	char secretCode = 'h';

	cout << "�ڵ带 �Է��Ͻÿ�";
	cin >> userCode;

	if (userCode < secretCode)
	{
		cout << userCode << " ���� �ڿ� ����" << endl;
	}
	else if (userCode > secretCode)
	{
		cout << userCode << " ���� �տ� ����" << endl;
	}
	else 
	{
		cout << "����" <<endl;
	}

	return 0;
}