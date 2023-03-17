#include<iostream>
#include<string.h>
using namespace std;
class points
{
	public:
		int a,b;
		void set(int n1,int n2)
		{
			this->a=n1;
			this->b=n2;
		}
		void get()
		{
			cout<<"A :- "<<this->a<<endl;	
			cout<<"B :- "<<this->b<<endl;
		}
	 	points operator+ (points n)
		{
			points temp;
			temp.a=this->a+n.a;
			temp.b=this->b+n.b;
			return temp;
		}
};
int main()
{
	points p1,p2,p3;
	p1.set(1,2);
	p1.get();
	p2.set(3,4);
	p2.get();
	p3=p1+p2;
	p3.get();

	return 0;
}
