#include <iostream>
# include <string>
using namespace std;

//int main() {


	//// 定义方式1： 数据类型 数组名[行数][列数]
	//int arr_1[3][3];
	//arr_1[0][0] = 0;
	//cout << arr_1[0][0] << endl;


	//// 定义方式2： 数据类型 数组名[行数][列数] = {{数据1，数据2},{数据1，数据2}}
	//int arr_2[2][2] = { {1,1},{2,2} };
	//cout << arr_2[1][1] << endl;


	//// 定义方式3： 数据类型 数组名[行数][列数] = {数据1，数据2, 数据4，数据4}
	//int arr_3[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr_3[i][j];
	//	}
	//	cout << " " << endl;
	//};

	//// 定义方式4：数据类型 数组名[][列数] = {数据1，数据2, 数据4，数据4}
	//int arr_4[][3] = { 1,2,3,4,5,6,7,8,9 };
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr_4[i][j];
	//	};
	//};


	//// 二维数组名的用途
	//// 1. 查看其内存占用大小
	//// 2. 查看其首地址
	//cout << sizeof(arr_3) << endl;


	//// 查看首地址, 直接cout矩阵即可
	//cout << arr_1 << endl;

//
//	// 练习题
//	string student_name[4] = { "张三", "李四", "王五", "陈三" };
//	int student_sorce[4][3] = { {100,99,98},{97,92,93},{100,98,99},{92,91,100} };
//	for (int i = 0; i < 4; i++) {
//		int source_sum = 0;
//		for (int j = 0; j < 3; j++) {
//			source_sum += student_sorce[i][j];
//		};
//		cout << student_name[i] <<"成绩分别为：" << source_sum << endl;
//	};
//}