// 53������: ���� ȭ�� ��ȯ�ϱ�
// �����µ� = 5/9*(ȭ���µ�-32)

#include <iostream>
using namespace std;

int main()
{
	float temp_c = 0;	//�����µ� ����
	float temp_f = 0; //ȭ���µ� ����

	cout << "ȭ���µ��� �Է��Ͻÿ�";
	cin >> temp_c;	

	temp_f = 5.0 / 9.0 * (temp_c - 32.0);		// �µ� ��ȯ ����
	
	cout << "�����µ���" << temp_f << endl;		// �����µ� ��¹�

	return 0;
}