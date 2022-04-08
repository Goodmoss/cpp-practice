// 109페이지
// Tic-Tac-Toe 게임 만들기

#include <iostream>
using namespace std;



int main()
{

	int k;
	int a = 0; 
	int b = 0;		// 반복문 변수
	int x, y;	// 사용자로부터 받을 좌표
	char board[3][3];	// 보드를 나타내는 2차원 배열  (전부 공백 문자열 삽입)
	int r, c, i;

	// 배열 공백으로 채움 (초기화)
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			board[r][c] = ' ';
		}
	}


	for (k = 1; k < 10; k++)		
	{

		cout << "(x, y) 좌표: ";
		cin >> x >> y;		// x 좌표 y 좌표 공백 구분

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