// 51페이지: 최대한도의 사탕 사기
// 현재 1000원 보유 중, 사탕 300원
// 살 수 있는 사탕의 개수와 나머지 돈 구하기

#include <iostream>
using namespace std;

int main()
{
	int money = 1000;  
	int candy_price = 300;
	// '보유 중인 돈', '사탕의 가격' 변수를 정수형으로 선언
	int max_candy, changes;
	
	cout << "보유 중인 돈:" << money << endl;
	cout << "사탕의 가격:" << candy_price << endl;
	// 현재 금액과 사탕의 가격 출력

	max_candy = money / candy_price;	// 보유 금액/사탕가격 몫을 변수 max_candy에 저장 (살 수 있는 촤대 사탕 개수)
	changes = money % candy_price;		// 보유 금액/사탕가격 나머지를 변수 max_candy에 저장 (잔돈)

	cout << "최대로 살 수 있는 캔디의 개수:" << max_candy << endl;
	cout << "캔디 구입 후 남은 돈:" << changes << endl;
	// 최대한도의 사탕, 잔돈 출력

	return 0;
}