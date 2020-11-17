#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
class B;

class A{
  private:
   int x;	

  public:
  	A(int a=0):x(a){}
  	void showB(B &b);
  	
};
class B{
   private:
	int y;

   public:
   	B(int b=0):y(b){}
   	//Declaring the friend function showB which has the scope limited to class A.
   	friend void A::showB(B &b);
   	
};
void A::showB(B &b){
	cout<<"B::y="<<b.y<<endl;
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
  a.showB(b);
  return 0;
}