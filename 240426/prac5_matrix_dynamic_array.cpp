#include <iostream>
#include <string>

using namespace std;

// prototype 선언부 (함수 머리)
int Input_Check();
void save_print_array(int** array, int m, int n);

int main() {

	// 자연수 x, y 입력 받기
	int x = Input_Check();
	int y = Input_Check();

	// 동적 배열 arr 선언
	int** arr = new int* [x];

	for (int n = 0; n < x; n++) {

		arr[n] = new int[y];

	}

	// 2차원 배열에 값을 저장하고 출력하는 함수 호출
	save_print_array(arr, x, y);

	// 동적 배열 arr 해제 (반납)
	for (int i = 0; i < x; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}


int Input_Check() {
	while (1) {
		int v = 0;
		cout << "자연수를 입력하시오. \n";
		cin >> v;

		if (v < 1) {
			cout << "*입력오류 : 자연수만 입력하시오.* \n";
		}
		return v;
	}
}

void save_print_array(int** array, int m, int n) {
	// 배열에 1부터 x*y 까지 값으로 저장 후, 값을 출력
	int num = 1;

	for (int i = 0; i < m; i++) {

		cout << endl;

		for (int j = 0; j < n; j++) {

			array[i][j] = num;
			cout << array[i][j] << "\t";
			num++;
		}
	}
}
