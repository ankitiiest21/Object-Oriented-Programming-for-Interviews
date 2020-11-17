#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
class Person{
  public:
  	Person(){
  		cout<<"Constructor in Person is called..\n";
  	}
  	~Person(){
 		cout<<"Destructor in Person is called..\n";
 	}
};
class Student:public Person{
 public:
 	Student(){
 		cout<<"Constructor in Student is called..\n";
 	}
 	~Student(){
 		cout<<"Destructor in Student is called..\n";
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
  {
    //constructor of Person class will be called first followed by Student class.
  	Student s1;
  }
  

  //constructor of Person class will be called first followed by Student Class.
  
  Student s3;
  //destructor of Student class will be called first followed by Person class.
  return 0;
}