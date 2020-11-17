#include<iostream>
#include<bits/stdc++.h> 

using namespace std;


class A{
  private:
   int x;	

  public:
  	A(int a=0):x(a){}
  	//A global friend function is declared. 
  	friend void showA(A &a);
  	
};

void showA(A &a){
	//since showA is a friend, it can access the private members of class A.
	cout<<"A::x="<<a.x<<endl;
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
  showA(a);
  return 0;
}