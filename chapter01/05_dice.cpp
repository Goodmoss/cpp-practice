// 55페이지: 주사위 게임
// 주사위 두 개를 던져서 합을 구하기


/*
!! 1부터 6 사이의 난수 발생시키는 코드 !!

int main()
{
	srand(time(NULL));
	int number = (rand() % 6) + 1;
	return 0;
}
*/


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int addTwoNumber;
	srand(time(NULL));
	int firstNumber = (rand() % 6) + 1;
	int secondNumber = (rand() % 6) + 1;

	addTwoNumber = firstNumber + secondNumber;

	cout << "두 주사위 합" << addTwoNumber;

	return 0;
}