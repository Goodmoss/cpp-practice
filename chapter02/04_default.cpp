// 86페이지: 자음과 모음 개수 세기
// 사용자로부터 영어를 입력받아서 모음과 자음 개수를 출력하는 문제


#include <iostream>
using namespace std;

int main()
{
	char eng;		//입력받은 문자
	int countA = 0;	//모음자 개수
	int countB = 0;	//자음자 개수

	cout << "영문자를 입력하고 0을 치시오.";

	while (1)
	{
		cin >> eng;			// 알파벳 입력받음

		if (eng == '0')		// 0을 입력받으면 while문을 빠져나가서 cout문 출력
			break;

		switch (eng)
		{
		case 'a':
		case 'i':
		case 'e':
		case 'o':
		case 'u':						// aieou를 입력받으면
			countA = countA + 1;		// 모음자 개수를 저장하는 변수 -> 1 증가
			break;	// while문 시작으로 돌아감

		default:						// 그 외의 알파벳을 입력받으면
			countB = countB + 1;		// 자음자 개수를 저장하는 변수 -> 1 증가
			break;	// while문 시작으로 돌아감
		}

	}
	
	cout << "모음 개수: " << countA << "\n" ;
	cout << "자음 개수: " << countB << "\n" ;

	return 0;
}