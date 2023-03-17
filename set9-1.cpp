#include<iostream>
#include<string.h>
using namespace std;
class unary
{
	public:
		int a;
		void set(int n)
		{
			this->a=n;
		}
		void get()
		{
			cout<<"A :- "<<this->a<<endl;
		}
		unary operator++(int)
		{
			unary temp;
			temp.a=this->a++;
		}
};
int main()
{
	unary u1,u2;
	u1.set(25);
	u1.get();
	u2=u1++;
	u1.get();
	return 0;
}
