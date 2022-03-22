// 72페이지: 비밀 코드 맞히기
// 비밀 코드는 a 부터 z 사이의 문자 중 하나
// 사용자가 입력한 문자가 비밀 코드의 앞에 있는지 뒤에 있는지 알려줌

#include <iostream>
using namespace std;

int main()
{
	char userCode ;
	char secretCode = 'h';

	cout << "코드를 입력하시오";
	cin >> userCode;

	if (userCode < secretCode)
	{
		cout << userCode << " 보다 뒤에 있음" << endl;
	}
	else if (userCode > secretCode)
	{
		cout << userCode << " 보다 앞에 있음" << endl;
	}
	else 
	{
		cout << "정답" <<endl;
	}

	return 0;
}