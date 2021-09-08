/*#include<iostream>
using namespace std;
struct TIME
    { 

	int hours; 
    int minutes;
    int seconds;
};  

void read (TIME&  t){
    cout<<"Enter the time: \n";
    cout<<"Enter hours, minutes and seconds : "; 
    cin>>t.hours>>t.minutes>>t.seconds;
}

void display (TIME t){
cout<<t.hours<<" :  "<<t.minutes<<"  :  "<<t.seconds<<endl;
}

void increment (int& c,TIME& t){
	int n;
	cout<<"To increment a number of seconds from "<<t.seconds<<" to : ";
	cin>>c;
	t.seconds=c+t.seconds;
	if(t.seconds>60){
	t.minutes+=t.seconds/60;
	
	for(int i=0;t.seconds>60;i++){
		t.seconds-=60;
	}
	
	}
	if(t.minutes>60){
		t.hours+=t.minutes/60;
	
		for(int i=0;t.minutes>60;i++){
		t.minutes-=60;
	}
	}
	if(t.seconds==60){
		t.seconds=00;
    	t.minutes++;
	}
	 if (t.minutes==60){
		t.minutes==00;
	    t.hours++;
	}
	 if (t.hours>24){
		 cout<<"error"<<endl;
		 t.seconds=00;
	     t.minutes=00;
	     t.hours=00;
}	
	cout<<t.hours<<":"<<t.minutes<<":"<<t.seconds<<endl;
}



void main()
{     
	TIME t;
	int c;
	read(t);
	display (t);
	increment (c,t);
	


 system("pause");
}





#include<iostream>
using namespace std;

struct book {
int id;
float price;

};
void read (int n,book a[]){
for(int i=1;i<=n;i++){
	cout<<"enter the id of book "<<i<<": ";
	 cin>>a[i].id;
	 cout<<"enter the price of book"<<i<<": ";
	 cin>>a[i].price;
	 cout<<"========================="<<endl;
}
}

void display (int v , book a[]){
	
for(int i=1;i<=v;i++){
	cout<<"the book number "<<i<<endl;
	cout<<"the id is :"<<a[i].id<<endl;
	cout<<"the price is :"<<a[i].price<<endl;
	cout<<"============================="<<endl;
	cout<<"============================="<<endl;
}
}

void cost (int n, book a[]){
	float max; 
	int r,m=0;
	if(n>1){
	cout<<"the most costly books"<<endl;
	max=a[1].price;
	for(int i=1;i<=n;i++){
			if(a[i].price>max){
			max=a[i].price;
			r=a[i].id;
			m=i;
			}
			}
			cout<<"the book number "<<m<<endl;
	        cout<<"the id is :"<<r<<endl;
        	cout<<"the price is :"<<max<<endl;
         	cout<<"============================="<<endl;

	}
}

void main(){
 int n;
 book a[1000];
 cout<<"enter the number of books : ";
 cin>>n;
 cout<<"\n";
 read(n,a);
 display(n,a);
 cost(n,a);

system("pause");
}


#include<iostream>
using namespace std;

struct dimension {
	int width;
	int length;

};

struct result {
	float area;
	double perimeter;
};

struct rectangle {
	dimension w;
	result a;

	
};
void read(dimension a[],result b[],rectangle c[]){

	for(int i=1;i<=5;i++){

	cout<<"enter the width of "<<i<<" : ";
    cin>>a[i].width;

	cout<<"enter the length of "<<i<<" : ";
    cin>>a[i].length;

	b[i].area=a[i].width*a[i].length;

	b[i].perimeter=2*(a[i].width+a[i].length);

	c[i].w.length=a[i].length;
	c[i].w.width=a[i].width;
	c[i].a.area=b[i].area;
	c[i].a.perimeter=b[i].perimeter;
	cout<<"======================"<<endl;
	
}
}
void res (rectangle c[]){
	for(int i=1;i<=5;i++){
    cout<<"the width of "<<i<<" : "<<c[i].w.length<<endl;
	cout<<"the length of "<<i<<" : "<<c[i].w.width<<endl;
	cout<<"the area of "<<i<<" : "<<c[i].a.area<<endl;
	cout<<"the perimeter of "<<i<<" : "<<c[i].a.perimeter<<endl;
	cout<<"------------------------------"<<endl;

}
}

void main(){

	dimension a[10];
	result b[10];
	rectangle c[10];
	read(a,b,c);
	res(c);

system("pause");
}
*/