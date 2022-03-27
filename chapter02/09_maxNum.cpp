// 102페이지: 배열에서 최대값 찾기
// ...??????

	/*
	int e, max;

	for (auto& e : list)
		if (e > max)
			max = e;

	*/

#include <iostream>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int maxArray[10];
	int max = 0;
	int test;

	for (int i = 0; i <= 9; i++)
	{
		maxArray[i] = (rand() % 99) + 1;
		test = maxArray[i];
		cout << test << endl;
	}

	for (int j : maxArray)
	{
		if (j > max)
			max = j;
	}
	cout << max << endl;
	return 0;
}