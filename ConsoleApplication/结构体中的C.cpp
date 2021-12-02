#include <iostream>
#include <string>

using namespace std;

struct student_a {

	string name;
	int age;
	int sorce;
};


void PirntStruct(const struct student_a* s) {

	//s->age = 100;		// 会提示错误：表达式必须是可修改的左值；
	cout << "使用const修饰后，不能随意更改" << endl;
};

int main() {

	struct student_a s;
	s.name = "张三";
	s.age = 10;
	s.sorce = 40;
	PirntStruct(&s);
};