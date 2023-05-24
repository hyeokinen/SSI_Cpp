#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	// 파일 읽기 준비

	ofstream outputFile("test.txt");
	string s;
	cout << "숫자를 입력하세요." << endl;
	getline(cin, s);
	int num = stoi(s);

	// 1번째 삼각형
	cout << "1번째 삼각형" << endl;


	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
			outputFile << "*";
		}
		cout << endl;
		outputFile << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;
	outputFile << endl;
	outputFile << endl;
	outputFile << endl;

	// 2번째 삼각형
	cout << "2번째 삼각형" << endl;

	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << " ";
			outputFile << " ";
		}

		for (int j = 0; j < num - i; j++)
		{
			cout << "*";
			outputFile << "*";
		}
		cout << endl;
		outputFile << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;
	outputFile << endl;
	outputFile << endl;
	outputFile << endl;

	// printf 사용
	// 3번째 삼각형
	cout << "3번째 삼각형" << endl;
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			cout << " ";
			outputFile << " ";
		}
		for (int k = 0; k < i * 2 + 1; k++)// 별은 홀수개가 찍혀야 한다. 그러므로 2n+1
		{
			cout << "*";
			outputFile << "*";
		}
		printf("\n");
		outputFile << endl;
	}

	for (int i = 0; i < num - 1; i++) // 위에 삼각형을 반대로 뒤집은 결과 이지만 num의 숫자보다 1이 적은 숫자로 계산
	{
		printf("  ");
		outputFile << "  ";
		for (int k = 0; k < i; k++)
		{
			printf(" ");
			outputFile << " ";
		}
		for (int j = i * 2; j < (num - 1) * 2 - 1; j++)
		{
			printf("*");
			outputFile << "*";
		}
		printf("\n");
		outputFile << endl;
	}

	// 4번째 삼각형

	cout << "4번째 삼각형" << endl;

	// 첫 번째 윗부분
	for (int i = 0; i < num; i++)
	{
		for (int i = 0; i < num-1; i++)
		{
			cout << " ";
			outputFile << " ";
		}

		for (int j = i; j < num; j++)
		{
			printf(" ");
			outputFile << " ";
		}
		for (int k = 0; k < i * 2 + 1; k++)// 별은 홀수개가 찍혀야 한다. 그러므로 2n+1
		{
			printf("*");
			outputFile << "*";
		}
		printf("\n");
		outputFile << endl;
	}

	// 2번째 중간부분
	for (int i = 0; i < num - 1; i++)
	{
		printf(" ");
		outputFile << " ";

		for (int k = 0; k < i; k++)
		{
			printf(" ");
			outputFile << " ";
		}

		for (int j = i * 2; j < (num - 1) * 4 - 1; j++)
		{
			printf("*");
			outputFile << "*";
		}
		printf("\n");
		outputFile << endl;
	}

	// 3번째 중간부분
	for (int i = num - 2; i >= 0; i--)
	{
		printf(" ");
		outputFile << " ";

		for (int k = 0; k < i; k++)
		{
			printf(" ");
			outputFile << " ";
		}

		for (int j = i * 2; j < (num - 1) * 4 - 1; j++)
		{
			printf("*");
			outputFile << "*";
		}
		printf("\n");
		outputFile << endl;
	}


	// 마지막 부분
	for (int i = 0; i < num; i++) // 위에 삼각형을 반대로 뒤집은 결과 이지만 num의 숫자보다 1이 적은 숫자로 계산
	{

		for (int i = 0; i < num; i++)
		{
			cout << " ";
			outputFile << " ";
		}

		
		for (int k = 0; k < i; k++)
		{
			printf(" ");
			outputFile << " ";
		}
		for (int j =2*num-1; j >2*i; j--)
		{
			printf("*");
			outputFile << "*";
		}
		printf("\n");
		outputFile << endl;
	}

	outputFile.close();

}
