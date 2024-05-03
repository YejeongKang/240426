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
	// 1. ���� ����
	vector<int> my_vec;

	// 2. SIZE ���� ������ �Է¹޾� ���Ϳ� �߰��ϴ� �Լ� ȣ��
	Input_Add_Vector(my_vec);
	
	// 3. ������ ũ�� ��� & �Ҵ�
	int my_vec_size = Vec_Size(my_vec);

	///////////////////////////////////////////////////////////

	// 4. ������ ��� ���� ���
	cout << endl << "���Ϳ� �ִ� ���Ҵ� ";
	Print_Vec(my_vec);

	///////////////////////////////////////////////////////////

	// 5. ���� ū ���� ã�� & ���

	cout << endl << "���� ū ���� " << *max_element(my_vec.begin(), my_vec.end()) << endl;

	///////////////////////////////////////////////////////////

	// 6. ������ ��� ���Ҹ� �ι��
	for (int i = 0; i < my_vec_size; i++) {

		my_vec[i] = Get_Double(my_vec[i]);

	}

	// ������ ��� ���� ���
	cout << endl << " ===> ��� �� 2�� �� ���ҵ��� ��: ";

	Print_Vec(my_vec);

	///////////////////////////////////////////////////////////

	// 7. �ε����� �Է¹޾� �ش� �ε����� �ִ� ���� ����
	Erase_Vec(my_vec);

	// ������ ��� ���� ���
	cout << endl << " ===> ���� �� ���ҵ��� �� : ";
	Print_Vec(my_vec);

	///////////////////////////////////////////////////////////

	// 8. �ε����� �Է¹޾� �ش� �ε����� �ִ� ���ο� ���� ����
	Push_Num_to_Vec(my_vec);

	// ������ ��� ���� ���
	cout << endl << " ===> �߰� �� ���ҵ��� �� : ";
	Print_Vec(my_vec);
}

// 2
void Input_Add_Vector(vector<int> &vec) {

	for (int i = 0; i < 5; i++) {

		int num;

		cout << " Q. ���Ϳ� �߰��� " << i + 1 << "��° ������ �Է��Ͻÿ�. (�� " << SIZE << "�� �Է�)" << endl;

		cin >> num;

		vec.push_back(num);
	}
}

// 3
int Vec_Size(vector<int>& vec) {
	int my_vec_size = vec.size();

	cout << "������ ũ��� " << my_vec_size << endl;

	return my_vec_size;
}

// 4
void Print_Vec(vector<int>& vec) {

	for (int num : vec) {

		cout << num << " ";

	}
	cout << endl;
}

// 6
int Get_Double(int x) {

	return x * 2;

}

// 7
void Erase_Vec(vector<int>& vec) {

	int idx = 0;

	
		cout << endl << " Q. ���Ÿ� ���ϴ� ���� �ε����� �Է��Ͻÿ�. ( 0 ~ " << vec.size() - 1 << " ������ �� �Է� ) : ";

		cin >> idx;

		vec.erase(vec.begin() + idx);
}

// 8
void Push_Num_to_Vec(vector<int>& vec) {
	int idx;
	int num;

	cout << endl << " Q. �߰��� ���ϴ� ���� �ε����� �Է��Ͻÿ�. ( 0 ~ " << vec.size() << " ������ �� �Է� ) : "; 
	
	cin >> idx;

	cout << endl << " Q. �߰��� ���ϴ� ���� �Է��Ͻÿ�. : ";

	cin >> num;

	vec.insert(vec.begin() + idx, num);
	
}