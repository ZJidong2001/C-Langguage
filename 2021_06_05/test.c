#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//
//int a = 100;//全局变量
//
//void test()
//{
//	printf("%d\n", a);//100
//}
//int main()
//{
//	int a = 10;//局部变量
//
//	printf("%d\n", a);//局部优先 - 10
//	a = 20;
//	test();
//	printf("%d\n", a);//局部优先 - 20
//
//	return 0;
//}


//
//int main()
//{
//	int b = 100;
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//		printf("b = %d\n", b);
//
//	}
//	printf("b = %d\n", b);
//	return 0;
//}


//int a = 100;
//
//void test()
//{
//	printf("test: a=%d\n", a);
//}
//
//int main()
//{
//	test();
//	printf("main: a=%d\n", a);
//
//	return 0;
//}

//声明外部变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//

//
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	
//
//	return 0;
//}

//
//int main()
//{
//	{
//		int a = 10;
//
//	}
//
//	return 0;
//}


//int main()
//{
//	//字面常量
//	float a = 3.14;//浮点型的字面常量
//	100;
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 100;//局部变量
//
//	//一个变量不能被改变我们就说具有常属性 - 不能被改变的属性
//
//	//const int a = 100;
//	//a = 200;
//
//	//printf("%d\n", a);
//	//const修饰的常变量
//
//	//const int n = 100;//n不是常量，只是具有常属性，不能被修改而已
//
//	//int arr[n] = {0};//数组
//
//
//	return 0;
//}


//#define定义的标识符常量
//
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	int arr[MAX] = {0};
//
//	printf("a = %d\n", a);
//	//MAX = 200;//ERR
//
//	return 0;
//}


//性别
//enum Sex 枚举类型
//
//enum Sex
//{
//	//枚举的可能取值 - 枚举常量
//	MALE=3,
//	FEMALE=7,
//	SECRET
//};
//
//int main()
//{
//	//enum Sex s = SECRET;
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	MALE = 4;//ERR
//
//	return 0;
//}
//
//

//#define PAI 3.1415

//C
//C89 C90 C99
//C99中引入一个：变长数组
//编译器一定要支持C99标准
//
//int main()
//{
//	const int n = 3;
//	int arr[n] = { 0,1,2 };
//	printf("%d", arr[0]);
//	printf("%d", arr[1]);
//	printf("%d", arr[2]);
//	return 0;
//}



//
//#include <string.h>
//
//int main()
//{
//	//char - 字符类型;
//	//字符串类型？
//	//'a';
//	//'x';
//	//"abcdef"  -字符串
//	//数组 - 一组数
//	//1 2 3 4 5
//	//int arr[] = { 1,2,3,4,5 };
//	//字符串字面值
//	//%s - 打印字符串的格式
//	//strlen 是库函数 - 求字符串长度的,\0是字符串的结束标志，不算长度
//
//	char ch1[] = "abcdef";
//	//printf("%s\n", ch1);
//	printf("%d\n", strlen(ch1));
//	
//	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f'};
//	//printf("%s\n", ch2);
//	printf("%d\n", strlen(ch2));
//
//	//abcdef\0\0\0\0
//	return 0;
//}

//
//int main()
//{
//	//printf("%d\n", 100);
//	printf("%d\n", 100);
//
//	//printf("%s\n", "c:\test\test.c");
//
//	return 0;
//}
//
//int main()
//{
//	//三字母词;
//	//??) --> ]
//	//??( --> [
//	//printf("%s\n", "????)");
//	//??]
//
//	//printf("%c", 'a');
//	//printf("%c", '\'');
//	//printf("%s\n", "\"");
//	
//	//printf("%s\n", "c:\\test\\test.c");
//	//printf("%c\n", '\065');
//	//\ddd - ddd的8进制数字转换成10进制后的值，作为ASCII值代表的字符
//	
//	//8进制的065转换成10进制是：53
//
//	//printf("%c\n", '5');
//	//printf("%c\n", '\x51');//81 -Q
//
//	return 0;
//}

//int main()
//{
//	//C++注释风格
//	//创建整型变量a，并赋值10
//	int a = 10;
//
//	/* C语言的注释风格
//	int b = 20;
//	*/
//
//	return 0;
//}
//

//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好敲代码吗(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}
//
//


//20000行
//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line<20000)
//	{
//		printf("敲代码:%d\n", line);
//		line++;
//	}
//
//	if(line >= 20000)
//		printf("好offer\n");
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入
//	scanf("%d %d", &num1, &num2);
//
//	//计算
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//
//	//盘子 = 张三(20元， 蛋炒饭)
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//数组 - 一组数
//	return 0;
//}
//

//
//int main()
//{
//	//char ch[5] = {'a', 'b', 'c'};
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 9;
//	while (i>=0)
//	{
//		printf("%d ", arr[i]);
//		i--;
//	}
//
//
//	//0-9
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//	//printf("%d\n", arr[5]);
//
//	return 0;
//}
//
//
//int main()
//{
//	float a = 5.0 / 2.0;//商2余1
//	printf("%f\n", a);//2
//
//	return 0;
//}

//int main()
//{
//	//% - 取模(余)得到的是整除之后的余数
//	int a = 7 % 2;//3 ... 1
//	printf("%d\n", a);
//
//	return 0;
//}

int main()
{
	int a = 6;
	int b = a<<1;
	//int b = a + 1;
	printf("%d\n", b);//12
	printf("%d\n", a);//?


	//移动的是二进制位
	//a=6  -4个字节 - 32bit
	//00000000000000000000000000000110
	//
	return 0;
}