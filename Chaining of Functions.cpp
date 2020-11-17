#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

class Point{
	int x,y;
public:
  Point(int x,int y){
  	this->x=x;
  	this->y=y;
  }
        //& is used to get hold of the same object 
  Point &setX(int x){
   this->x=x;
   return *this;
  }
  Point &setY(int y){
  	this->y=y;
  	return *this;
  }
  void print(){
  	cout<<"(x,y): "<<x<<","<<y<<endl;
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
  Point p1(0,0);
  p1.print();
  (p1.setX(10)).setY(20);
  p1.print();
  return 0;
}