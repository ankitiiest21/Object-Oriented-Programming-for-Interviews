#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
class Person{
	
  public:
  	int x,y;
  	Person(int a,int b):x(a),y(b){
  	 cout<<"Constructor of Person class with x="<<x<<" , y="<<y<<endl;
  	}
};

class Student:public Person{

//even if the access specifier is private or protected we can use same code(s)	
 
 public:
 	int z;
 	Student(int a,int b,int c):Person(a,b),z(c){
     cout<<"Constructor of Student class with x="<<x<<" , y="<<y<<", z="<<z<<endl;
 	}
  void set(int a,int b,int c){
    x=a; y=b; z=c;
  }
  void print(){
    cout<<"x="<<x<<" , y="<<y<<", z="<<z<<endl;
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
  Student s1(1,2,3),s2(4,5,6);
  s1.set(7,8,9);
  s1.print();
  return 0;
}