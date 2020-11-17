#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

class Complex{
  private:
  	long double real,imag;
  public:
  	Complex(long double r=0,long double i=0):real(r),imag(i){}
  	//Overloading '+' operator 
  	Complex operator + (const Complex &obj){
  		Complex ans;
  		ans.real=this->real+obj.real;
  		ans.imag=this->imag+obj.imag;
  		return ans;
  	}
  	//Overloading '-' operator 
  	Complex operator - (const Complex &obj){
  		Complex ans;
  		ans.real=this->real-obj.real;
  		ans.imag=this->imag-obj.imag;
  		return ans;
  	}
  	//Overloading '*' operator 
  	Complex operator * (const Complex &obj){
  		Complex ans;
  		ans.real=(this->real)*obj.real-(this->imag)*obj.imag;
  		ans.imag=(this->real)*obj.imag+(this->imag)*obj.real;
  		return ans;
  	}
  	//Overloading '/' operator 
  	Complex operator / (const Complex &obj){
  		Complex ans;
  		ans.real=(this->real)*obj.real+(this->imag)*obj.imag;
  		ans.imag=(this->imag)*obj.real-(this->real)*obj.imag;
  		ans.real/=(obj.real*obj.real+obj.imag*obj.imag);
  		ans.imag/=(obj.real*obj.real+obj.imag*obj.imag);
  		return ans;
  	}
    void print(){
    	cout<<real<<"+i"<<imag<<endl;
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
  Complex a(3,2),b(2,3);
  Complex add=a+b;
  Complex sub=a-b;
  Complex mul=a*b;
  Complex div=a/b;
  add.print();
  sub.print();
  mul.print();
  div.print();
  return 0;
}

