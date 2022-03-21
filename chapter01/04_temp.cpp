// 53페이지: 섭씨 화씨 변환하기
// 섭씨온도 = 5/9*(화씨온도-32)

#include <iostream>
using namespace std;

int main()
{
	float temp_c = 0;	//섭씨온도 변수
	float temp_f = 0; //화씨온도 변수

	cout << "화씨온도를 입력하시오";
	cin >> temp_c;	

	temp_f = 5.0 / 9.0 * (temp_c - 32.0);		// 온도 변환 계산식
	
	cout << "섭씨온도는" << temp_f << endl;		// 섭씨온도 출력문

	return 0;
}