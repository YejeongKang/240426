#include <iostream>
#include <string>

using namespace std;

void save_print_array(int **array , int m , int n){
	// 배열에 1부터 x*y 까지 값으로 저장 후, 값을 출력
	int num = 1;

	for (int i = 0; i < m; i++) {

		cout << endl;

		for (int j = 0; j < n; j++) {

			array[i][j] = num;
			cout << array[i][j] << " ";
			num++;
		}
	}
}

int main() {
	// 변수 선언
	int x, y;
	
	// 자연수 x, y 입력 받기
	do {
		cout << "자연수 x를 입력하시오. \n";
		cin >> x;
		cout << "자연수 y를 입력하시오. \n";
		cin >> y;
		
		if (x < 1 or y < 1) {
			cout << "*입력오류 : 자연수만 입력하시오.* \n";
		}
	} while (x < 1 or y < 1);

	// 동적 배열 arr 선언
	int** arr = new int* [x];

	for (int n = 0; n < x; n++) {

		arr[n] = new int[y];

	}
	// 2차원 배열에 값을 저장하고 출력하는 함수 호출
	save_print_array(arr, x, y);
	
	// 동적 배열 해제(반납)
	for (int i = 0; i < x; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}