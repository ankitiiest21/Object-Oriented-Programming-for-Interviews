//Program to calculate the no of objects in the heap section......

#include<bits/stdc++.h>
using namespace std;

class A{
public:
	static int x;
	//Constructor Declaration
	A()
	{

	}
	//Destructor Declaration
	~A()
	{

	}
	//overloading new operator
	void *operator new(size_t sz){
		x++;
	}
	//overloading delete operator
	void operator delete(void*sz){
		x--;
	}
};
int A::x=0;
int main()
{
 #ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 #endif

 //Dynamic objects(ptr,f) created at run time in heap section of memory.
 A*ptr=new A;
 A*f = new A;

 //Deallocating memory which in turn calls our overloaded new and delete operator.
 delete f;
 cout<<A::x<<endl;
 delete ptr;
 cout<<A::x<<endl;
}
