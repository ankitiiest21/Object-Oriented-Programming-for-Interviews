#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

class Box{
 public:
 	int l,b,h;
 	Box(){
 		cout<<"Default Constructor called"<<endl;
 	}
 	Box(int x,int y,int z):l(x),b(y),h(z){
 		cout<<"Parameterized Constructor called"<<endl;
 	}
 	~Box(){
 		cout<<"Destructor for l="<<l<<",b="<<b<<",h="<<h<<" is called"<<endl;
 	}
 	void volume(){
 		cout<<" Volume is: "<<l*b*h<<endl;
 	}
};

class Cube{
	Box b;
public:
	Cube(int e):b(e,e,e){
		// b=Box(e,e,e);
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
  Cube c=Cube(10);
  return 0;
}