#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���ڸ� �Է��ϼ���." << endl;
	getline(cin, s);
	int num = stoi(s);
	

	cout << "1��° �ﰢ��" << endl;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++) cout << "*";
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "2��° �ﰢ��" << endl;
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < i; k++) cout << " ";
		for (int j = 0; j < num - i; j++) cout << "*";
		cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "3��° �ﰢ��" << endl;
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++) printf(" ");
		for (int k = 0; k < i * 2 + 1; k++) printf("*");
		printf("\n");
	}
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < i; k++) printf(" ");
		for (int j = i * 2; j < num * 2 - 1; j++) printf("*");
		printf("\n");
	}
}