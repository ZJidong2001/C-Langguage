#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//#define NUM 100
//
//#define MAX(X,Y)  (X>Y?X:Y)
//
//
//int main()
//{
//	//printf("%d\n", NUM);
//	int a = 10;
//	int b = 20;
//
//	int c = MAX(a+2, b);
//
//	//int c = (a+2 > b ? a+2 : b);
//
//	printf("%d\n", c);
//
//	return 0;
//}


//声明函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);//
//	return 0;
//}

//
//void test()
//{
//	//static修饰局部变量
//	static int a = 1;
//	a++;
//	printf("%d ", a);//2 - 11
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}



//
//int main()
//{
//	//建议把100存放在寄存器中，编译器最终决定
//	register int num = 100;
//	//&num;//err
//
//	return 0;
//}

//typedef unsigned int uint;
//
//int main()
//{
//	//int ch;
//	unsigned int num = 100;
//	uint num2 = 200;
//
//	return 0;
//}

//int main()
//{
//	//auto 
//	int a = 10;//局部变量 - 自动变量
//
//	return 0;
//}


//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test()
//{
//
//}
//int main()
//{
//	//()函数调用操作符
//	test();
//	printf("hehe\n");
//	int ret = Add(3, 5);
//	//
//	//
//	// 
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//	//arr[9];//[] 下标引用操作符
//
//	//arr 9
//	//a + b;
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = -1;
//	//,  - 逗号表达式
//	//逗号表达式会从左向右依次计算
//	//整个逗号表达式的结果是最后一个表达式的结果
//	       //a=-2  b=-3           c=-5        c=-10
//	int d = (a = b - 5, b = a + c, c = a + b, c -= 5);
//
//	printf("%d\n", d);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 0;
//	if (a == 5)
//	{
//		b = -6;
//	}
//	else
//	{
//		b = 6;
//	}
//
//	b = ((a == 5) ? (-6) : (6) );
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 5;
//	//如果a==3 并且b==4，打印哈哈
//	//if ((a == 3) && (b == 4))
//	//{
//	//	printf("哈哈\n");
//	//}
//	//如果a==3 或者 b==4,打印呵呵
//	if ((a == 3) || (b == 4))
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//不可取的代码
//int main()
//{
//	int a = 10;
//	printf("%d %d\n", --a, --a);//?
//
//	return 0;
//
//}

//错误的代码
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("b = %d\n", b);
//
//	return 0;
//}


//
//int main()
//{
//	int a = 2;
//	//++  --
//	//++ 前置++ 后置++
//	// 
//	//int c = --a;//前置--，先--,后使用
//	int c = a--;//后置--，先使用，再--
//	printf("c = %d\n", c);//2
//	printf("a = %d\n", a);//1
//
//	//int c = ++a;//前置++, 先++，后使用
//	//int c = a++;//后置++,先使用，后++
//
//	//printf("c = %d\n", c);//2
//	//printf("a = %d\n", a);//3
//
//
//	//a = a + 1;
//	//a += 1;
//	//a++;//++
//	//printf("%d\n", a);
//
//	return 0;
//}

//
//整数在内存中存储的时候，存储是二进制
//一个整数的二进制表示有3种形式：
//原码
//反码
//补码
//
//正的整数：原码、反码、补码相同
//负的整数：原码、反码、补码是计算的
//
//有符号的整数，最高位是0，表示正数
//            最高位是1，表示负数
// 
//int a = 1;//4个字节-32bit
//00000000000000000000000000000001 - 原码
//00000000000000000000000000000001 - 反码
//00000000000000000000000000000001 - 补码
//
//int a = -1;
//10000000000000000000000000000001 - 原码
//11111111111111111111111111111110 - 反码 （原码的符号位不变，其他位按位取反得到反码）
//11111111111111111111111111111111 - 补码 （反码的二进制序列+1就是补码）
//
//内存中存储整数的时候，存储的是二进制的补码
//计算的时候采用也是补码
//

//int main()
//{
//	int a = 0;
//	//
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - 补码
//	//11111111111111111111111111111110 - 反码
//	//10000000000000000000000000000001 - 原码
//
//	printf("%d\n", ~a);//-1
//	//
//	return 0;
//}

//+-10;

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = -a;//负值
//	int c = +a;//
//
//	return 0;
//}
//单目操作符
//只有一个操作数

//a+b
//+,a和b是+的两个操作数
//+ 双目操作符

//真和假
//非0就是真   5 - 真
//0就是假     0 - 假

//int main()
//{
//	//int a = 10;
//	//int a = 0;
//	//printf("%d\n", !a);//1
//	int a = 10;
//	if (a)//a为真，要进入if语句
//	{
//
//	}
//
//	if (!a)//a为假，进入if语句
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;//创建变量a，并且初始化为10
//
//	a = 20;//赋值
//
//	a = a + 10;
//	a += 10;//符合赋值
//
//	a = a - 8;
//	a -= 8;
//
//	a = a >> 1;
//	a >>= 1;
//
//	return 0;
//}


//位操作符
// & - 按2进制位与 -  
// ^ - 按2进制位异或
// | - 按2进制位或
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//按位或
//	int c = a | b;
//	printf("%d\n", c);
//
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	//
//	
//	//按位异或 - 相同为0，相异为1
//	//int c = a ^ b;
//	//printf("%d\n", c);
//
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//
//	//按位与
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//
//	//int c = a & b;
//
//	//printf("%d\n", c);//1
//
//	return 0;
//}