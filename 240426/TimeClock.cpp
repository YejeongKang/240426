#include <iostream>
#include <time.h>

using namespace std;

int main() {
	time_t start, end;
	double result;

	//// 1) time

	start = time(NULL); // ���� �ð� ��ȯ

	for (int i = 0; i < 1000000000; i++)
	{
		int ad = 421321;
	}

	end = time(NULL);

	result = (double)(end - start);

	cout << "���� �ð� : " << result << " second" << endl;

	return 0;

	// 2) clock

	//start = clock(); 	//���� �ð� ��ȯ
	//
	//for (int i = 0; i < 1000000000; i++)
	//{
	//	int ad = 421321;
	//}

	//end = clock();

	//result = (double)(end - start);

	//cout << "���� �ð� : " << ((result) / CLOCKS_PER_SEC) << " second" << endl;

	//return 0;
}