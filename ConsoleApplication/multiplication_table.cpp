//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int val()
//{
//
//	for (int i=0; i < 10; i= i +1)
//	{
//		for (int j=i; j < 10; j= j+1)
//		{
//			std::cout << i << "*" << j << "=" << i * j << " ";
//		}
//		std::cout << "\n" << std::endl;
//	}
//
//
//	// 运算符操作
//	int a = 0;
//	int b = 0;
//	++a;
//	b++;
//	cout << a << endl;
//	cout << b << endl;
//
//	// 前置递增 变量先+1，然后进行后续操作（例如：表达式计算）
//	int a1 = 10;
//	int b1 = ++a1 * 10;
//	cout << "前置递增" << a1 << endl;
//	cout << "前置递增后进行乘法运算" << b1 << endl;
//
//	// 后置递增，先进行表达式计算，然后再进行+1
//	int a2 = 10;
//	int b2 = a2++ * 10;
//	cout << "后置递增" << a2 << endl;		// a2=10
//	cout << "后置递增后进行乘法运算" << b2 << endl;		// a2=11,b2=100;先进行表达式计算得到b2=100,然后a2在自增+1
//
//	// 后置、前置递减和上面类似
//
//	return 0;
//}