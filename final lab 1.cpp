#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
template<class t>
t sum(t A[],int n)
{
	t sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=A[i];
	}
	return sum;
}
void main()
{


	system("pause");
}