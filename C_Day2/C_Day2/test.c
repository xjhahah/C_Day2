#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int swap(int* left, int* right)
{
	int temp;
	temp = *left;
	*left = *right;
	*right = temp;
	return 0;
}
int main()
{
	int a, b, c;
	printf("Please three Num:");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		swap(&a, &b);
	}
	if (a < c)
	{
		swap(&a, &c);
	}
	if (b < c)
	{
		swap(&b, &c);
	}
	printf("%d, %d, %d\n", a, b, c);
	system("pause");
	return 0;
}

//更相减损法
/*
int Gcd(int a, int b)
{
	if (a <= 0 || b <= 0)
		return -1;
	else if (a>b)
		return Gcd(a - b, b);
	else if (a<b)
		return Gcd(a, b-a);
	else
		return a;
}


//辗转相除法
int Gcd(int a, int b)
{
	return (b == 0) ? a : (Gcd(b, a % b));
}
int main()
{
	int a,b,res;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	res=Gcd(a,b);
	if(res==-1)
		printf("Input number should be positive!\n");   //输入数字无效
	else
		printf("Greatest Common Divisor of %d and %d is %d\n",a,b,res);
	getchar();
	return 0;
}
*/


#if 0
int main()
{
	int max = 0;
	int arr[10] = { 2, 1, 4, 3, 5, 8, 7, 9, 6, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	max = arr[0];
	for (int j = 0; j < len; ++j)
	{
		if (max < arr[j])
		{
			max = arr[j];
		}
	}
	printf("The Max Number is %d\n", max);
	getchar();
	return 0;
}
#endif 0
/*
void Swap(int* left,int* right)
{
	int temp;
	temp = *left;
	*left = *right;
	*right = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//法一
	Swap(&a, &b);

	//法二
	a = a + b - a;
	b = (a + b - a) >> 1;

	//法三
	a = a^b;
	b = a^b;
	a = a^b;

	printf("a=%d ,b=%d \n", a, b);
	getchar();
	return 0;
}
*/