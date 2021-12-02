#include<iostream>
#include<string>

using namespace std;


struct Student {

	string name;
	int age;
	int source;
};


// 结构体嵌套，在Teacher结构体中包含Student结构体
struct Teacher {

	string name;
	int age;
	struct Student stu;
};

int main11111111() {
	// 结构体指针

	struct Student stu = { "张三", 10, 20 };

	// 在使用 &解应用符时， 等号两边的数据结构要一样
	// 即，在对结构体使用 "&"符号时， 等号右边的数据类型要是结构体类型（struct可以省略）
	struct Student* p = &stu;

	// 通过指针访问结构体内部属性时，要是使用 "->"符号
	p->age = 80;
	cout << p->name << "的分数为：" << p->source << "，年龄为：" << p->age << endl;


	struct Teacher tea = {"张1", 50, stu};
	cout << tea.name << "老师的学生是：" << tea.stu.name << endl;

	struct Teacher* t = &tea;
	cout << "指针结构体下：" << t->name << "老师的学生是：" << t->stu.name << endl;

};