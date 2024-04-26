#include <iostream>
#include <string>

using namespace std;

void save_print_array(int **array , int m , int n){
	// �迭�� 1���� x*y ���� ������ ���� ��, ���� ���
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
	// ���� ����
	int x, y;
	
	// �ڿ��� x, y �Է� �ޱ�
	do {
		cout << "�ڿ��� x�� �Է��Ͻÿ�. \n";
		cin >> x;
		cout << "�ڿ��� y�� �Է��Ͻÿ�. \n";
		cin >> y;
		
		if (x < 1 or y < 1) {
			cout << "*�Է¿��� : �ڿ����� �Է��Ͻÿ�.* \n";
		}
	} while (x < 1 or y < 1);

	// ���� �迭 arr ����
	int** arr = new int* [x];

	for (int n = 0; n < x; n++) {

		arr[n] = new int[y];

	}
	// 2���� �迭�� ���� �����ϰ� ����ϴ� �Լ� ȣ��
	save_print_array(arr, x, y);
	
	// ���� �迭 ����(�ݳ�)
	for (int i = 0; i < x; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}