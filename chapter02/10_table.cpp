// 107������ ���� #1
// ������ǥ�� �Ϻθ� 2���� �迭�� �����ϰ� ����غ���

#include <iostream>
using namespace std;

#define WIDTH 9
#define HEIGHT 3

int main()
{

	int table[HEIGHT][WIDTH] = { 0, };
	int a, b;

	for (a = 0; a < HEIGHT; a++)
		for (b = 0; b < WIDTH; b++)
			table[a][b] = (a + 1) * (b + 1);

	for (a = 0; a < HEIGHT; a++) {
		for (b = 0; b < WIDTH; b++) {
			cout << table[a][b] << ", ";
		}
		cout << "\n";
	}

	return 0;
}