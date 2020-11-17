#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

class A{
  private:
   int x;	
   void setA(int a){
   	x=a;
   }
  public:
  	A(int a=0):x(a){}
  	//Declaring class B as the friend class of A.
  	friend class B;
};
class B{
   private:
	int y;

   public:
   	B(int b=0):y(b){}
   	//Since class B is a friend class of A, B can access the private and protected members like "x" and member functions like "setA" of A.
   	void show(A &a){
   		cout<<"A::x="<<a.x<<endl;
   	}
   	void set(int b,A &a,int c){
   		y=b;
   		//B can access the member function setA() of class A since it is a friend of class A.
        a.setA(c);
   	}
};

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
  b.show(a);
  b.set(24,a,20);
  b.show(a);
  return 0;
}