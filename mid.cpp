#include <iostream>
#include<math.h>
#include<string>
using namespace std;
class sh
{
protected:
	double L;
public:
	void set()
	{
		cout<<"L:"; cin>>L;
	}
	virtual double dis_area()
	{
		return 0;
	}
};
class sq :public sh
{
public:
	double dis_area()
	{
		return (L*L);
	}
};
class ci :public sh
{
public:
	double dis_area()
	{
		return (L*L)*(3.14);
	}
};
void main()
{
	sh s,*p;
	sq q;
	ci c;
	p=&s;
	p->set();
	cout<<p->dis_area()<<endl;
	p=&q;
	p->set();
	cout<<"sq:"<<p->dis_area()<<endl;
	p=&c;
	p->set();
	cout<<"ci:"<<p->dis_area()<<endl;

	system("pause");
}