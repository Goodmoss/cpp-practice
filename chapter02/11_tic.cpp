// 109������
// Tic-Tac-Toe ���� �����

#include <iostream>
using namespace std;



int main()
{

	int k;
	int a = 0; 
	int b = 0;		// �ݺ��� ����
	int x, y;	// ����ڷκ��� ���� ��ǥ
	char board[3][3];	// ���带 ��Ÿ���� 2���� �迭  (���� ���� ���ڿ� ����)
	int r, c, i;

	// �迭 �������� ä�� (�ʱ�ȭ)
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			board[r][c] = ' ';
		}
	}


	for (k = 1; k < 10; k++)		
	{

		cout << "(x, y) ��ǥ: ";
		cin >> x >> y;		// x ��ǥ y ��ǥ ���� ����

		if (k == 1)	
			board[x][y] = 'o';
		else if (k % 2 == 1)   
			board[x][y] = 'o';
		else
			board[x][y] = 'x';

		for (i = 0; i < 3; i++)
		{
			if (i == 0)
				a = 0, b = 0;
			else if (i == 1)
				a = 0, b = 1;
			else
				a = 0, b = 2;

			cout << "---|---|---" << endl;
			cout << " " << board[a][b] << " | " << board[a+1][b] << " | " << board[a+2][b] << endl;


		}

		cout << "---|---|---" << "\n" << endl;

	}

	return 0;
}