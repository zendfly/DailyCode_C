#include<iostream>
using namespace std;

// 传递地址， 函数在定义的时候，使用指针的类型
void temp(int* a, int* b) {
    // 使用地址传递的时候，函数内部的修改会影响外部的实参（外部的实参一同被修改）
    int temp = *a;
    *a = *b;
    *b = temp;
};

// 传递值， 
void temp01(int a, int b) {
    // 使用普通的值传递时，外部的实参不受影响
    int temp = a;
    a = b;
    b = a;
};

int main2222222222() {

    int a = 10;
    int b = 20;
    temp(&a, &b);		// 使用"&"解引用符号将地址传递给函数，在temp函数中使用指针对指向的地址空间中的值进行修改。a, b值改变
    cout << "a = " << a << endl;		// 
    cout << "b = " << b << endl;
    temp01(a, b);
    cout << "a = " << a << endl;		// 值不改变
    cout << "b = " << b << endl;

}