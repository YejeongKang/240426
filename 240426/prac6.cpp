#include <iostream>
#include <string>
#include <vector>

#define SIZE 5

using namespace std;

void Input_Add_Vector(vector<int> &vec);
int Vec_Size(vector<int>& vec);
void Print_Vec(vector<int>& vec);
int Get_Double(int x);
void Erase_Vec(vector<int>& vec);
void Push_Num_to_Vec(vector<int>& vec);

int main() {
	// ���� ����
	vector<int> my_vec;

	// ������ ũ�⸦ SIZE �� ����
	my_vec.reserve(SIZE);

	// SIZE ���� ������ �Է¹޾� ���Ϳ� �߰��ϴ� �Լ� ȣ��
	Input_Add_Vector(my_vec);
	
	// ������ ũ�� ��� & �Ҵ�
	int my_vec_size = Vec_Size(my_vec);

	///////////////////////////////////////////////////////////

	// ������ ��� ���� ���
	Print_Vec(my_vec);

	///////////////////////////////////////////////////////////

	// ���� ū ���� ã�� & ���

	cout << endl << "���� ū ���� " << *max_element(my_vec.begin(), my_vec.end()) << endl;

	///////////////////////////////////////////////////////////

	// ������ ��� ���Ҹ� �ι��
	for (int i = 0; i < my_vec_size; i++) {

		my_vec[i] = Get_Double(my_vec[i]);

	}

	// ������ ��� ���� ���
	cout << "[������ ��� �� 2�� �� ���ҵ��� ��] ";

	Print_Vec(my_vec);

	///////////////////////////////////////////////////////////

	// �ε����� �Է¹޾� �ش� �ε����� �ִ� ���� ����
	Erase_Vec(my_vec);

	
	// ������ ũ�� ���
	cout << "���� �� ������ ũ�� : ";
	Vec_Size(my_vec);

	// ������ ��� ���� ���
	cout << "���� �� ���ҵ��� �� : ";
	Print_Vec(my_vec);

	///////////////////////////////////////////////////////////

	// �ε����� �Է¹޾� �ش� �ε����� �ִ� ���ο� ���� ����
	Push_Num_to_Vec(my_vec);

	// ������ ũ�� ���
	cout << "�߰� �� ������ ũ�� : ";
	Vec_Size(my_vec);

	// ������ ��� ���� ���
	cout << "�߰� �� ���ҵ��� �� : ";
	Print_Vec(my_vec);
}

void Input_Add_Vector(vector<int> &vec) {

	for (int i = 0; i < 5; i++) {

		int num;

		cout << "���Ϳ� �߰��� " << i + 1 << "��° ������ �Է��Ͻÿ�. (�� " << SIZE << "�� �Է�)" << endl;

		cin >> num;

		vec.push_back(num);
	}
}

int Vec_Size(vector<int>& vec) {
	int my_vec_size = vec.size();

	cout << "������ ũ��� " << my_vec_size << endl;

	return my_vec_size;
}

void Print_Vec(vector<int>& vec) {

	cout << "���Ϳ� �ִ� ���Ҵ� ";

	for (int num : vec) {

		cout << num << " ";

	}
	cout << endl;
}

int Get_Double(int x) {

	return x * 2;

}

void Erase_Vec(vector<int>& vec) {

	int idx = 0;

	cout << "���Ÿ� ���ϴ� ���� �ε����� �Է��Ͻÿ�. : ";

	cin >> idx;

	if (vec.at(idx) != NULL) {
		vec.erase(vec.begin() + idx);
	}
	else {
		cout << "�ش� �ε����� ���� �������� �ʽ��ϴ�." << endl << "���Ÿ� ���ϴ� ���� �ε����� �Է��Ͻÿ�. : ";
	}

}

void Push_Num_to_Vec(vector<int>& vec) {
	int idx;
	int num;

	cout << "�߰��� ���ϴ� ���� �ε����� �Է��Ͻÿ�. : ";

	cin >> idx;

	cout << "�߰��� ���ϴ� ���� �Է��Ͻÿ�. : ";

	cin >> num;

	vec.insert(vec.begin() + idx, num);
	
}
//
// v[2] �� .at(2)�� ����?
// => ���ʹ� ũ�Ⱑ ��������. �ε����� �����ϴ������� Ȯ�����ִ� �� .at(�ε���)