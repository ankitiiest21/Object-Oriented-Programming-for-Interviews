#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
class Base{
	
  public:
  	//use of virtual keyword to implement successfully the function overriding.
  	virtual void print(){
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


  Base*ptr=&d;
  
  // As expected the member function of Derived class will get called.
  ptr->print();
  return 0;
}