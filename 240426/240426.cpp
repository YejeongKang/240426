﻿#include <iostream>
#include <string>

// #define array_size 5

using namespace std;

int main() {

	// 1. 예외 처리 : 사용자가 곱게 숫자만 입력하진 않음 ,,
	// 2. 학습을 목표로 한 주석(혹시나 누군가가 열어서 확인할 스도 있으니)

	int n3 = 5;

	// 동적 배열 선언 & 할당
	int** arr2 = new int* [n3];
	// arr2[n3] : { 주소값, 주소값, 주소값, 주소값, 주소값 };
	// arr2[0] : { 값, 값, 값, 값, 값 };
	// arr2[1] : { 값, 값, 값, 값, 값 };
	// ...

	//arr2[n3][n3] = {
	//{ 값, 값, 값, 값, 값 },
	//{ 값, 값, 값, 값, 값 },
	//{ 값, 값, 값, 값, 값 },
	//{ 값, 값, 값, 값, 값 },
	//{ 값, 값, 값, 값, 값 }
	//}

	for (int i = 0; i < n3; i++) {

		arr2[i] = new int[n3];

	}
	// 동적 배열 해제(반납)
	for (int i = 0; i < n3; i++) {
		delete[] arr2[i];
	}
	delete[] arr2;

	// 1글자만 판단
	string name = "jo2hn*";

	for(int i = 0; i < name.length(); i++)
	{
		isdigit(name[i]); // 이게 숫자야? => 문자나 특수문자는 0
		isalpha(name[i]); // 이게 문자야? => 숫자나 특수문자는 0
		cout << name[i] << " : " << isdigit(name[i]) << endl;
		//isdigit();
		//isalpha();
	}
}

