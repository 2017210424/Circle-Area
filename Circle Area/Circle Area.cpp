// Circle Area.cpp: 定义控制台应用程序的入口点。
//
/*
	This c++ program
Name       : Circle	Area
Class name : CCircle
Author     : Tamir
Date       : 2018.05.24
						*/
#include "stdafx.h"
#include<iostream>
#define PI 3.1415926535
using namespace std;
class CCircle {
private :
	int R;
	double area;
	double perimeter;
public:
	CCircle();
	~CCircle();
	void Area();
	void Perimeter();
	void Init(int a);
	double Putit();
};
int main()
{
	CCircle a;
	int x,temp;
	cout << "请输入圆的半径（单位为米）：" << endl;
	cin >> x;
	a.Init(x);
	cout << "求面积请输入1，求周长请输入2，求出全部请输入3：" << endl;
	cin >> temp;
	if (temp == 1)
		a.Area();
	else if (temp == 2)
		a.Perimeter();
	else if (temp == 3)
	{
		a.Area();
		a.Perimeter();
	}
	return 0;
}
CCircle::CCircle()
{
	R = 0;
	area = 0.0;
	perimeter = 0.0;
}
CCircle::~CCircle()
{
}
void CCircle::Area()
{
	area = PI * R;
	cout << "此圆得面积是：" << area << "平方米" << endl;
}
void CCircle::Perimeter()
{
	perimeter = 2 * PI * R;
	cout << "此圆得周长是：" << perimeter << "米" << endl;
}
void CCircle::Init(int a)
{
	R = a;
}
double CCircle::Putit()
{
	return R;
}
