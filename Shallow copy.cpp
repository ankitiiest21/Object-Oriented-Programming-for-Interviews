#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

class Test{
	int*ptr;
public:
  Test(int x){
  	ptr=new int(x);
  }
  void set(int x){
  	*ptr=x;
  }
  void print(){
  	cout<<*ptr<<endl;
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
  Test t1(10);
  Test t2(t1);
  t1.print();
  t2.print();
  //Changing t2 will also change t1 as the default copy constructor does a shallow copy
  t2.set(20);
  t1.print();
  t2.print();
  return 0;
}