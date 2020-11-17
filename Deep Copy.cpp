#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

class Test{
	int *ptr;
public:
  Test(int x){
  	ptr=new int(x);
  }
  //Declaring our own copy constructor
  Test(const Test &t){
  	int val=*(t.ptr);
  	ptr=new int(val);
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
  //Changing t2 will not change t1 as the we have implemented our own copy constructor which does a deep copy.
  t2.set(20);
  t1.print();
  t2.print();
  return 0;
}