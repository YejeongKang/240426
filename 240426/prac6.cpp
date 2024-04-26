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
	// 벡터 선언
	vector<int> my_vec;

	// 벡터의 크기를 SIZE 로 예약
	my_vec.reserve(SIZE);

	// SIZE 개의 정수를 입력받아 벡터에 추가하는 함수 호출
	Input_Add_Vector(my_vec);
	
	// 벡터의 크기 출력 & 할당
	int my_vec_size = Vec_Size(my_vec);

	///////////////////////////////////////////////////////////

	// 벡터의 모든 원소 출력
	Print_Vec(my_vec);

	///////////////////////////////////////////////////////////

	// 가장 큰 값을 찾기 & 출력

	cout << endl << "가장 큰 값은 " << *max_element(my_vec.begin(), my_vec.end()) << endl;

	///////////////////////////////////////////////////////////

	// 벡터의 모든 원소를 두배로
	for (int i = 0; i < my_vec_size; i++) {

		my_vec[i] = Get_Double(my_vec[i]);

	}

	// 벡터의 모든 원소 출력
	cout << "[원소의 모든 값 2배 후 원소들의 값] ";

	Print_Vec(my_vec);

	///////////////////////////////////////////////////////////

	// 인덱스를 입력받아 해당 인덱스에 있는 원소 제거
	Erase_Vec(my_vec);

	
	// 벡터의 크기 출력
	cout << "제거 후 벡터의 크기 : ";
	Vec_Size(my_vec);

	// 벡터의 모든 원소 출력
	cout << "제거 후 원소들의 값 : ";
	Print_Vec(my_vec);

	///////////////////////////////////////////////////////////

	// 인덱스를 입력받아 해당 인덱스에 있는 새로운 원소 삽입
	Push_Num_to_Vec(my_vec);

	// 벡터의 크기 출력
	cout << "추가 후 벡터의 크기 : ";
	Vec_Size(my_vec);

	// 벡터의 모든 원소 출력
	cout << "추가 후 원소들의 값 : ";
	Print_Vec(my_vec);
}

void Input_Add_Vector(vector<int> &vec) {

	for (int i = 0; i < 5; i++) {

		int num;

		cout << "벡터에 추가할 " << i + 1 << "번째 정수를 입력하시오. (총 " << SIZE << "개 입력)" << endl;

		cin >> num;

		vec.push_back(num);
	}
}

int Vec_Size(vector<int>& vec) {
	int my_vec_size = vec.size();

	cout << "벡터의 크기는 " << my_vec_size << endl;

	return my_vec_size;
}

void Print_Vec(vector<int>& vec) {

	cout << "벡터에 있는 원소는 ";

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

	cout << "제거를 원하는 값의 인덱스를 입력하시오. : ";

	cin >> idx;

	if (vec.at(idx) != NULL) {
		vec.erase(vec.begin() + idx);
	}
	else {
		cout << "해당 인덱스의 값이 존재하지 않습니다." << endl << "제거를 원하는 값의 인덱스를 입력하시오. : ";
	}

}

void Push_Num_to_Vec(vector<int>& vec) {
	int idx;
	int num;

	cout << "추가를 원하는 값의 인덱스를 입력하시오. : ";

	cin >> idx;

	cout << "추가를 원하는 값을 입력하시오. : ";

	cin >> num;

	vec.insert(vec.begin() + idx, num);
	
}
//
// v[2] 와 .at(2)의 차이?
// => 벡터는 크기가 유동적임. 인덱스가 존재하는지부터 확인해주는 게 .at(인덱스)