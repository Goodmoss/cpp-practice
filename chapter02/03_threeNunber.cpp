// 74페이지: 입력받은 세개의 정수 중 가장 큰 수 찾기
// if-else문 사용


#include <iostream>
using namespace std;

int main()
{
	int firstNum, secondNum, thirdNum;	//숫자 입력받을 변수

	cout << "숫자 세 개를 입력하시오";
	cin >> firstNum;
	cin >> secondNum;
	cin >> thirdNum;
	// 정수 세개를 입력받아서 각 변수에 저장함

	if (firstNum >= secondNum && firstNum >= thirdNum)		// firstNum이 가장 큰 경우
	{
		cout << "가장 큰 수는" << firstNum << "입니다";
	}
	else if (secondNum >= firstNum && secondNum >= thirdNum)	// secondNum이 가장 큰 경우
	{
		cout << "가장 큰 수는" << secondNum << "입니다";
	}
	else
	{
		cout << "가장 큰 수는" << thirdNum << "입니다";		// 그 외의 경우 (thirdNum이 가장 큰 경우)
	}

	return 0;
}

// 가장 큰 수를 구하는 문제이기 때문에 
// 수가 같을 경우 둘 중 아무 것이나 내보내면 된다.

// 논리 연산자
// && : 양 쪽 모두 참일때 true 반환