#include<iostream>
#include<string>
using namespace std;

// 使用struct关键字进行定义
struct Student {
	// 对内置的数据类型进行组合成用户自己定义的数据结构
	string name;
	int age;
	int source;

}s3;		// 在定义结构体时，顺便创建了结构体变量


// 结构体数字


int main_jiegouti() {

	// 结构体变量的定义
	// 1.创建一个结构体变量，然后分别进行赋值
	struct Student s1;
	s1.source = 100;
	s1.age = 20;
	s1.name = "zhangsan";
	
	// 2.在创建结构体变量的时候直接赋值
	struct Student s2 = {"lisi", 21, 90};
	cout << s2.age << endl;

	// 3.在结构体定义时顺便创建结构体变量
	s3.age = 10;
	s3.name = "wangwu";
	s3.source = 80;

	// 使用结构体初始化为数组
	Student arr[3] = { {"lisi", 10, 80}, {"zhangsan", 20, 90}, {"wangwu", 30, 100} };
	cout << arr[1].age << endl;		// 修改结构体数组中的元素

	// 遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << arr[i].name << "的年龄：" << arr[i].age << "source:" << arr[i].source << endl;
	}

};
