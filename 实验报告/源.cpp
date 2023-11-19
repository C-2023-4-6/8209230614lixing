/*#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	int j = 1;
	cout << j++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}*/   //第一次实验第一题



/*#define pi 3.1415926
#include<iostream>
using namespace std;
int main()
{
	double r;
	cin >> r;
	double h ;
	cin >> h;
	double V;
	V = (pi * r * r * h) / 3;
	cout << V << endl;
	system("pause");
	return 0;
}*/   //第一次实验第二题




/*#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
}*/  //第一次实验第三题




/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnit = 65534;//
	cout << "output in unsigned int 1 type:" << testUnit << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnit) << endl;
	cout << "output in short type:" << static_cast<short>(testUnit) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnit) << endl;
	cout << "output in double type:" << static_cast<double>(testUnit) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnit) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnit << endl; //16进制输出
	double a;
	cin >> a;
	cout << (int)a << endl;
	system("pause");
	return 0;
}  */ //第一次实验第四题


/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float h;
	cin >> h;
	float s;
	s = (h - 32) * 5 / 9;
	cout << fixed<<setprecision(2)<<s << endl;
	system("pause");
	return 0;
}*/    //第一次实验第五题



/*#include<iostream>
using namespace std;
int main()
{
	char c;
	cin >> c;
	
	if (c >= 97 && c <= 122) 
	{
		cout <<(char) (c - 32) << endl;
	}
	else {
		cout << c + 1 << endl;
	}
	return 0;
}*/   //第二次实验第一题


/*#include<iostream>
using namespace std;
int main()
{
	double x;
	for (int i = 0; i < 4; i++)
	{
		cin >> x;
		if (x < 1 && x>0)
		{
			cout << (3 - 2 * x) << endl;
		}
		else if (x >= 1 && x < 5)
		{
			cout << (4 * x / 2 + 1) << endl;
		}
		else if (x >= 5 && x < 10)
		{
			cout << (x * x) << endl;
		}
	}
	system("pause");
	return 0;
}*/    //第二次实验第二题


/*#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;
	int c=0;
	cin >> a;
	cin >> b;
	cin >> c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		cout << (a + b + c) << endl;
		if(a==b||b==c||c==a)
		{
			cout << "是等腰三角形" << endl;
		}
		else { cout << "不是等腰三角形" << endl; }
    }
	else { cout << "不是三角形" << endl; }
	system("pause");
	return 0;
}*/      //第二次实验第三题



/*#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int b;
	cin >> b;
	char c;
	cin >> c;
	switch (c)
	{
		case '+':cout << a << "+" << b << "=" << a + b << endl; break;
		case '-':cout << a << "-" << b << "=" << a - b << endl; break;
		case '*':cout << a << "*" << b << "=" << a * b << endl; break;
		case '%': {
			if (b == 0)
			{
				cout << "b不合法" << endl;
			}
			else
			{
				cout << a << "%" << b << "=" << a % b << endl;
			}
		}break;
		case '/': {
			if (b == 0) 
			{ cout << "b不合法" << endl; }
			else 
			{ cout << a << "/" << b << "=" << a % b << endl; }
		}break;
		default:cout << "运算符非法" << endl; break;

    }
	system("pause");
	return 0;
}*/   //第二次实验第四题


/*#include<iostream>
using namespace std;
int main()
{
	char c;
	
	int m = 0, n = 0, i = 0,j = 0;
	while ((c = getchar()) != '\n')
	{
		
		if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
		{
			m++;

		}
		else if (c <= '9' && c >= '0')
		{
			n++;
		}
		else if (c == ' ')
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	cout << "中英文字母" << m << endl;
	cout << "数字字符" << n << endl;
	cout << "空格" << i << endl;
	cout << "其他字符" << j << endl;
	system("pause");
	return 0;
}*/    //第二次实验第五题







/*#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "a = " ;
	cin >> a;
	cout << "b = " ;
	cin >> b;
	int m = 1, n = 1, k = 2;
	while (k <= a && k <= b)
	{
		if (a % k == 0 && b % k == 0)
		{
			m = k;
		}
		k++;
	}
	n = (a * b) / m;
	cout << a << "和" << b << " 最大公约数为" << m << endl;
	cout << a << "和" << b << " 最小公倍数为" << n << endl;
	system("pause");
	return 0;
} */     //第二次实验第六题




/*#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 6; i++)
	{
		for(int j=0;j<i;j++)
		{
			cout << "* ";
		}
		cout << endl;

	}
	system("pause");
	return 0;
}*/     //第二次实验第七题




/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, xn, xn1;
	cout << "输入:";
	cin >> a;
	xn = 10086;
	xn1 = (xn + a / xn) / 2;
	if(a<0)
	{
		cout << "wrong" << endl;
	}
	else
	{
		do
		{
			xn = xn1;
			xn1 = (xn + a / xn) / 2;
		} while (fabs(xn - xn1) >= 0.000000001);
		cout << "输出:"<< fixed << setprecision(5)<<xn << endl;
	}
	

	system("pause");
	return 0;
}*/       //第二次实验第八题




/*#include<iostream>
using namespace std;
int main()
{
	double a = 0.8;
	double sum = 0;
	int x = 0;
	for(int i=2;i<=100;i=i*2)
	{ 
		x++;
		sum = sum + a * i;
	}
	cout << "平均每天花费：" << sum / x << "元" << endl;
	system("pause");
	return 0;
}*/        //第二次实验第九题