#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//
//int a = 100;//ȫ�ֱ���
//
//void test()
//{
//	printf("%d\n", a);//100
//}
//int main()
//{
//	int a = 10;//�ֲ�����
//
//	printf("%d\n", a);//�ֲ����� - 10
//	a = 20;
//	test();
//	printf("%d\n", a);//�ֲ����� - 20
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

//�����ⲿ����
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
//	//���泣��
//	float a = 3.14;//�����͵����泣��
//	100;
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 100;//�ֲ�����
//
//	//һ���������ܱ��ı����Ǿ�˵���г����� - ���ܱ��ı������
//
//	//const int a = 100;
//	//a = 200;
//
//	//printf("%d\n", a);
//	//const���εĳ�����
//
//	//const int n = 100;//n���ǳ�����ֻ�Ǿ��г����ԣ����ܱ��޸Ķ���
//
//	//int arr[n] = {0};//����
//
//
//	return 0;
//}


//#define����ı�ʶ������
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


//�Ա�
//enum Sex ö������
//
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ö�ٳ���
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
//C99������һ�����䳤����
//������һ��Ҫ֧��C99��׼
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
//	//char - �ַ�����;
//	//�ַ������ͣ�
//	//'a';
//	//'x';
//	//"abcdef"  -�ַ���
//	//���� - һ����
//	//1 2 3 4 5
//	//int arr[] = { 1,2,3,4,5 };
//	//�ַ�������ֵ
//	//%s - ��ӡ�ַ����ĸ�ʽ
//	//strlen �ǿ⺯�� - ���ַ������ȵ�,\0���ַ����Ľ�����־�����㳤��
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
//	//����ĸ��;
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
//	//\ddd - ddd��8��������ת����10���ƺ��ֵ����ΪASCIIֵ������ַ�
//	
//	//8���Ƶ�065ת����10�����ǣ�53
//
//	//printf("%c\n", '5');
//	//printf("%c\n", '\x51');//81 -Q
//
//	return 0;
//}

//int main()
//{
//	//C++ע�ͷ��
//	//�������ͱ���a������ֵ10
//	int a = 10;
//
//	/* C���Ե�ע�ͷ��
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
//	printf("�������\n");
//	printf("Ҫ�ú��ô�����(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}
//
//


//20000��
//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line<20000)
//	{
//		printf("�ô���:%d\n", line);
//		line++;
//	}
//
//	if(line >= 20000)
//		printf("��offer\n");
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
//	//����
//	scanf("%d %d", &num1, &num2);
//
//	//����
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//
//	//���� = ����(20Ԫ�� ������)
//	//���
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//���� - һ����
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
//	float a = 5.0 / 2.0;//��2��1
//	printf("%f\n", a);//2
//
//	return 0;
//}

//int main()
//{
//	//% - ȡģ(��)�õ���������֮�������
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


	//�ƶ����Ƕ�����λ
	//a=6  -4���ֽ� - 32bit
	//00000000000000000000000000000110
	//
	return 0;
}