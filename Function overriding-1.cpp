#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
class Base{
	
  public:
  	void print(){
  		cout<<"Base\n";
  	}
  	
};
class Derived:public Base{
	
 public:
 
 	void print(){
 		cout<<"Derived\n";
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
  Base b;
  Derived d;
  b.print();
  d.print();

  //A Base class pointer can refer to a Derived class object

  Base*ptr=&d;
  
  //A peculiar output in which the base class print() member function is called when we are expecting the derived class print() member function to get called.
  ptr->print();
  //Type of pointer should not define which function to be called, it should ideally be decided to the object it is pointing to.

  return 0;
}