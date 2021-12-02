#include <iostream>
#include <string>

using namespace std;

struct Student {

	string name;
	int age;
	int source;
	int index;
};


void PrintStruct_0(struct Student s) {

	cout << "结构体作为参数传递：" << s.name << s.source << s.age << s.index << endl;


};


void PrintStruct_1(struct Student *s) {

	// 通过指针方式传递时，函数内部可以改变该地址的存储内容
	s->age = 40;
	cout << "结构体以指针方式作为参数传递：" << s->age << "改变" << endl;

};


int main1001() {

	struct Student s;
	s.age = 20;
	s.name = "张三";
	s.source = 100;
	s.index = 1;

	PrintStruct_0(s);
	PrintStruct_1(&s);		// 传递指针地址时，使用"&"地址符
};