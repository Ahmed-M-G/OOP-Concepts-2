#include<iostream>
#include<math.h>
#include<string>
using namespace std;
/*struct book
{
	int id;
	float price;
};
void set(int n,book a[])
{
	for (int i=0;i<n;i++)
	{
		cout<<"id=";
		cin>>a[i].id;
		cout<<"book price =";
		cin>>a[i].price;
	}
}
void display(int v,book a[])
{
	for(int i=0;i<v;i++)
	{
		cout<<"book["<<i+1<<"]="<<a[i].id<<endl;
		cout<<"price of book"<<i+1<<"="<<a[i].price<<endl;
	}
}
void cost(int w,book b[])
{
	int max;
	cout<<"most cost";
	for(int i=0;i<w;i++)
	{
		max=b[0].price;
		if(max<b[i].price){max=b[i].price;}
	}
	cout<<"cost ="<<max<<endl;
}*/
//---------------------------------------------------
/*class student
{
	int id;
	string name;
	float mark[6];
public:
	void set()
	{
		cout<<"id ="; cin>>id;
		cout<<"name :";cin>>name;
		for(int i=0;i<6;i++)
		{
			cout<<"mark"; cin>>mark[i];
		}
	}
	void dis()
	{
		cout<<"id ="<<id<<endl;
		cout<<"name :"<<name<<endl;
		for(int i=0;i<6;i++)
		{
			cout<<"mark"<<mark[i]<<endl;
		}
	}
	float total()
	{
		float sum=0;
		for(int i=0;i<6;i++)
		{
			sum+=mark[i];
		}
		return sum;
	}
	float avg(float a)
	{
		return a/6.0;
	}
};*/
//----------------------------------------------------------------------
/*class it
{
	string name;
	int price;
	static int SN;
public:
	void set()
	{
		cout<<"name :";cin>>name;
		cout<<"price :"; cin>>price;
	}
	static void SN_INC()
	{
		SN++;
	}
	void dis()
	{
		cout<<"name :"<<name<<endl;
		cout<<"price :"<<price<<endl;
	}
	static void SN_D()
	{
		cout<<"SN :"<<SN<<endl;
	}
};
int it::SN=123456;*/
//--------------------------------------------------
class point
{
	float x,y,z;
public:
	void set()
	{
		cout<<"x ="; cin>>x;
		cout<<"y ="; cin>>y;
		cout<<"z ="; cin>>z;
	}
	void dis()
	{
		cout<<"x ="<<x<<endl;
		cout<<"y ="<<y<<endl;
		cout<<"z ="<<z<<endl;
	}
	float norm()
	{
		float d;
		d=sqrt((x*x)+(y*y)+(z*z));
		return d;
	}
	friend float dist(point A,point B)
	{
		float C;
		C=sqrt(pow((double)A.x-B.x,2)+pow((double)A.y-B.y,2)+pow((double)A.z-B.z,2));
		return C;
	}
	friend float maxnorm(point D,point E)
	{
		float max;
		max=D.norm();
		if(D.norm()<E.norm()){max=E.norm();}
		return max;
	}
};
void main()
{
	/*int n;
	book A[100];
	cout<<"enter no of book =";
	cin>>n;
	set(n,A);
	display(n,A);
	cost(n,A);
	cout<<endl;*/
	//---------------------------------------------
	/*student A;
	A.set();
	cout<<"sum :"<<A.total()<<endl;
	cout<<"avg :"<<A.avg(A.total())<<endl;
	A.dis();*/
	//----------------------------------------------

	/*it A,B,C,D;
	A.set();   it::SN_INC();
	A.dis();   it::SN_D();*/
	
	//--------------------------------------

	point P,W,S,Q,O;
	O.set();
	cout<<"norm : "<<O.norm()<<endl;
	P.set();
	W.set();
	cout<<"distance :"<<dist(P,W)<<endl;
	S.set();
	Q.set();
	cout<<"max :"<<maxnorm(S,Q)<<endl;




	system("pause");
}