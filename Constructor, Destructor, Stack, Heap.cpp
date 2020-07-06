#include<bits/stdc++.h>
using namespace std;

class A{
public:
	static int x;
	//Constructor Declaration
	A()
	{
	 x++;
	}
	//Destructor Declaration
	~A()
	{
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
 // Local variables (a,b,c,d,e) are stored in stack section of memory.
 A a,b,c;
 A d,e;

 //Dynamic objects(ptr,f) created at run time in heap section of memory.
 A *ptr=(A *)malloc(sizeof(A)); //C-Style(allocates the memory with no call to constructor.)
 A*f = new A; //C++-Style(allocates the memory along with constructor call.)
 free (ptr); //C-Style(deallocates the memory with no call to destructor.)
 delete f; //C++-Style(deallocates the memory along with destructor call.)
 cout<<A::x<<endl;
}
