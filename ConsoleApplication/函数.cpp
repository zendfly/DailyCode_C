#include <iostream>
#include <string>

using namespace std;

// 函数步骤， 1.返回类型；2.函数名；3.参数类型；4.函数体语句；5.return表达式
//
// 返回值类型 函数名(参数列表)
// {
//	   函数体语句；
//     return 表达式
 // }

int int_num_add(int a,int n) {

	int sum = a + n;

	return sum;
}



int main(){

	int a = 1;
	int b = 2;
	int sum = int_num_add(a, b);
	cout << sum;

}