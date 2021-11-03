#include <iostream>
#include <string>

using namespace std;

int main2() {

	// 数组：就是一个集合，里面存放了相同类型的数据元素
	// 特点：1.相同的数据类型；2.由连续的内存位置组成

	// 数组定义方式：
	// 1. 数据类型 数组名[数组长度]；
	// 2. 数据类型 数组名[数组长度] = {值1，值2 ...};  如果在数组初始化时，没有给出全部的数据，会自动用0进行填充
	// 3. 数据类型 数组名[] = {值1，值2 ...};

	//int arr[5] = {1,2,3,4,5};		// 在申明数组时，数组长度可以不用提前给
	//cout << arr[1] << endl;		// 通过下标进行输出，下标从0开始


	/*
	一维数组名的用处：
		1.统计整个数组在内存中的长度；使用sizeof()方法来获取
		2.获取数组在内存的中的首地址：使用cout << arr << endl; 来获取首地址
	*/
	//eg:
	//cout << sizeof(arr) << endl;
	//cout << arr << endl;


	/*
	练习：数组元素逆置
	描述：请申明一个5个元素的数组，并且将元素逆置
	例如：{1,2,3,5,4}---> {4,5,3,2,1}

	数组的长度计算： int len_arr = sizeof(arr)/sizeof(arr[0]);
	数组末尾下标：int end_index = len_arr - 1; 
	*/

	int arr[5] = { 1,2,3,5,4 };
	//int re_arr[5];
	//for (int i = 0; i < 5; i++) {
	//	int re_index = 4 - i;
	//	re_arr[re_index] = arr[i];
	//}
	//cout << "反置的数组为：" << re_arr << endl;

	// 空间复杂度为1
	//int temp = 0;/*
	//float arr_len = sizeof(arr) / sizeof(arr[0]) - 1;
	//cout << "--------------" << arr_len << endl;
	//int loop_begin_index = 0;
	//int loop_endl_index = arr_len;
	//while(loop_begin_index < loop_endl_index) {
	//	int tmp = arr[loop_endl_index];
	//	arr[loop_endl_index] = arr[loop_begin_index];
	//	arr[loop_begin_index] = tmp;
	//	loop_begin_index++;
	//	loop_endl_index--;
	//}
	//for (int i = 0; i < 5; i++) {
	//	cout << arr[i];
	//}*/

	// 冒泡排序
	// 总结：相邻比较，然后交换，双层循环
	int bubble_arr[5] = {4,2,6,8,1};
	int arr_len = sizeof(bubble_arr) / sizeof(bubble_arr[0]);
	cout << arr_len << endl;
	for (int i = 0; i < arr_len; i++) {
		for (int j = 0; j < arr_len - i - 1; j++) {
			if (bubble_arr[j] > bubble_arr[j + 1]) {
				int temp = bubble_arr[j];
				bubble_arr[j] = bubble_arr[j + 1];
				bubble_arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后的结果：";
	for (int i = 0; i < arr_len; i++) {
		cout << bubble_arr[i];
		cout << " ";

	}

	return 0;
}