#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

class A{
private:
	int x;
public:
	A(int a=0):x(a){}
	//show() is declared as a global friend function.
	friend void show();
};

class B:public A
{
private:
	int y;
public:
	 B(int b=0):y(b){}
	 
};

void show(){
	B b;
	cout<<"Default value of A::x="<<b.x<<endl;
//show() is a friend of Base class A which tries to access the private data member of Derived class B, so an error.
	cout<<"Default value of B::y="<<b.y<<endl;
}

int main()
{
 #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  A a(10);
  B b(12);
  return 0;
}