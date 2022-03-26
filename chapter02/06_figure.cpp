// 91페이지: 도형의 면적 계산하기
// 사용자가 직사각형, 원, 직각삼각형 중 하나를 선택하고 숫자를 입력하면
// 그에 맞는 계산을 해서 출력하는 프로그램


#include <iostream>
using namespace std;

int main()
{
	int pigure;		// 도형 선택
	int firstNum = 0;	// 계산에 쓰이는 숫자 1
	int secondNum = 0;	// 계산에 쓰이는 숫자 2
	float result = 0;	// 결과값	

	cout << "도형을 선택하시오\n";
	cout << ("1. 직사각형  2. 원  3. 직각삼각형 ");
	cin >> pigure;

	if (pigure == 1)	// 직사각형의 경우
	{
		cout << "가로: ";
		cin >> firstNum;
		cout << "세로: ";
		cin >> secondNum;

		result = firstNum * secondNum;
		cout << "결과는 " << result << " 입니다";
	}
	else if (pigure == 2)	// 원의 경우
	{
		cout << "반지름: ";
		cin >> firstNum;

		result = firstNum * firstNum * 3.14;
		cout << "결과는 " << result << " 입니다";
	}
	else if (pigure == 3)	// 직각삼각형의 경우
	{
		cout << "밑변: ";
		cin >> firstNum;
		cout << "높이: ";
		cin >> secondNum;

		result = firstNum * secondNum * 0.5;
		cout << "결과는 " << result << " 입니다";
	}

	return 0;
}