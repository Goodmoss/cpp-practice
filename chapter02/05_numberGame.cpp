// 88페이지: 숫자 맞히기 게임
// 사용자가 1~100까지의 숫자를 입력하면 정답과 비교해 up-down을 알려주고,
// 맞히기까지 걸린 횟수를 출력


#include <iostream>
using namespace std;

int main()
{
	int userNum;		// 사용자가 입력한 숫자
	int realNum = 50;	// 정답 숫자	
	int countNum = 0;	// 시도 횟수

	while (1)
	{
		cout << "정답을 추측하여 보세요: ";
		cin >> userNum;

		if (userNum < realNum)			// 정답이 더 큰 경우
		{
			cout << "정답은 그 수보다 더 큽니다.\n";
			countNum++;
		}
		else if (userNum > realNum)		// 정답이 더 작은 경우
		{
			cout << "정답은 그 수보다 더 작습니다.\n";
			countNum++;
		}
		else		// 정답을 알아낸 경우
		{
			countNum++;
			cout << "정답입니다. \n";
			cout << countNum << "번 걸렸습니다.";
			break;
		}
	}

	return 0;
}

// 정답 숫자 랜덤으로 나오게 하려면
/*
	srand(time(NULL));
	int number = (rand() % 100) + 1;
	return 0;
*/