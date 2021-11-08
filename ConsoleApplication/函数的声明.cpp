#include <iostream>
#include <string>

using namespace std;

// 声明可以多次，定义只能一次
// 
// 提前声明，可以告知编译器该函数的存在， 在main后面定义该函数的具体操作。
int max(int a, int b);

//int main() {
//
//	int a = 1;
//	int b = 2;
//
//	int c = max(a, b);
//	cout << c << endl;
//}

int max(int a, int b) {

	return a > b ? a : b;
}