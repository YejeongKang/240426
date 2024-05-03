#include <iostream>
#include <string>

using namespace std;

// prototype ����� (�Լ� �Ӹ�)
int Input_Check();
void save_print_array(int** array, int m, int n);

int main() {

	// �ڿ��� x, y �Է� �ޱ�
	int x = Input_Check();
	int y = Input_Check();

	// ���� �迭 arr ����
	int** arr = new int* [x];

	for (int n = 0; n < x; n++) {

		arr[n] = new int[y];

	}

	// 2���� �迭�� ���� �����ϰ� ����ϴ� �Լ� ȣ��
	save_print_array(arr, x, y);

	// ���� �迭 arr ���� (�ݳ�)
	for (int i = 0; i < x; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}


int Input_Check() {
	while (1) {
		int v = 0;
		cout << "�ڿ����� �Է��Ͻÿ�. \n";
		cin >> v;

		if (v < 1) {
			cout << "*�Է¿��� : �ڿ����� �Է��Ͻÿ�.* \n";
		}
		return v;
	}
}

void save_print_array(int** array, int m, int n) {
	// �迭�� 1���� x*y ���� ������ ���� ��, ���� ���
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
