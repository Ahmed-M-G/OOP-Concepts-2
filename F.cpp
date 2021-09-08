#include<iostream>
#include<math.h>
#include<string>
using namespace std;
struct st
{
	int id;
	float deg[3];
	string name;
}s;
void main()
{
	float sum=0;
	cout<<"name :"; cin>>s.name;
	cout<<"id :";  cin>>s.id;
	for(int i=0;i<3;i++)
	{
		cout<<"deg["<<i+1<<"] :";
		cin>>s.deg[i];
		sum+=s.deg[i];
	}
	cout<<"name :"<<s.name<<endl;
	cout<<"id :"<<s.id<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"deg["<<i+1<<"] :"<<s.deg[i]<<endl;
	}
	cout<<"sum :"<<sum<<endl;


	system("pause");
}