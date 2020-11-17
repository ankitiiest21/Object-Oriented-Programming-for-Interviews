#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
class A{
public:
	int x;
};

//class D is deriving from class A using virtual keyword.
class B:virtual public A{
	public:
		int y;
};

//class C is deriving from class A using virtual keyword.
class C:virtual public A{
public:
	int z;
};

//class D is deriving both from B and C using virtual keyword. So,it will have two copies of variable x, one through B and the other through C.
class D:virtual public B,virtual public C{
public:
	int t;
};

int main()
{
 #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  D d;
  //Will run fine as the access specifier is preceded by the virtual keyword.
  cout<<d.x<<endl;
  return 0;
}