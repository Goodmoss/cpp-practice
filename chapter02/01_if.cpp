// 69페이지 예제 #1
// 사용자로부터 받은 두개의 정수 중 더 큰 수를 찾는 프로그램

#include <iostream>		
using namespace std;	

int main()
{
	int x;
	int y;

	cout << "x 값을 입력하시오:";
	cin >> x;
	cout << "y 값을 입력하시오:";
	cin >> y;
	// 두 수를 입력받음

	if (x > y)	// x가 y보다 크다면
	{
		cout << x << "가" << y << "보다 더 큽니다";
	}
	else if (y > x)	// y가 x보다 크다면
	{
		cout << y << "가" << x << "보다 더 큽니다";
	}
	else	// 둘 다 아니라면
	{
		cout << "두 수는 같습니다";
	}

	return 0;
}