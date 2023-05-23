#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "숫자를 입력하세요." << endl;
	getline(cin, s);
	int num = stoi(s);
	
	// 1번째 삼각형
	cout << "1번째 삼각형" << endl;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++) cout << "*";
		cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;

	// 2번째 삼각형
	cout << "2번째 삼각형" << endl;
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < i; k++) cout << " ";
		for (int j = 0; j < num - i; j++) cout << "*";
		cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;

	// printf 사용
	// 3번째 삼각형
	cout << "3번째 삼각형" << endl;
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++) printf(" ");
		for (int k = 0; k < i * 2 + 1; k++) printf("*"); // 별은 홀수개가 찍혀야 한다. 그러므로 2n+1
		printf("\n");
	}
	for (int i = 0; i < num-1; i++) // 위에 삼각형을 반대로 뒤집은 결과 이지만 num의 숫자보다 1이 적은 숫자로 계산
	{
		printf("  ");
		for (int k = 0; k < i; k++) printf(" ");
		for (int j = i * 2; j < (num-1) * 2 - 1; j++) printf("*");
		printf("\n");
	}
}