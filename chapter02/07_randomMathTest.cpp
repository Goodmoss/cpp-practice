// 93페이지: 산수 문제 자통 출제
// 맞으면 종료, 틀리면 다음 문제가 출제됨
// 0~99까지의 난수 생성 후 뎃셈 문제 출력 


#include <iostream>
using namespace std;

int main()
{

	srand((unsigned int)time(NULL));
	int firstNum;
	int secondNum;
	int userNum;

	cout << "산수 문제를 자동으로 출력합니다.\n";

	while (1)
	{
		firstNum = (rand() % 99) + 1;
		secondNum = (rand() % 99) + 1;
		//랜덤한 수 생성

		cout << firstNum << " + " << secondNum << " = ";
		cin >> userNum;		//문제 출력, 답 입력

		if (userNum == firstNum + secondNum) 
		{
			cout << "정답입니다";
			break;	//정답일 경우 프로그램 종료
		}
		else
			cout << "오답입니다\n";	//오답일 경우 반복
	}

	return 0;
}