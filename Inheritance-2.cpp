#include<iostream>
#include<bits/stdc++.h> 
#include<limits.h>
#include<string>
#include<map>
#include<time.h>
#include<queue>
#define UB upper_bound
#define LB lower_bound
#define BS binary_search
#define IN insert
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define NL cout<<endl
#define ll long long
#define ld long double
#define pl pair<ll,ll>
#define ql queue<ll>
#define vl vector<ll>
#define sl set<ll>
#define ml map<ll,ll>
#define sc set<char>
#define li list<ll>
#define vp vector<pair<ll, ll> >
#define vs vector<string>
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define REPI(i,a,b) for(ll i=b-1;i>=a;i--)
#define REPIT(it,a) for(auto it=a.begin();it!=a.end();it++)
#define DB(x) cout<<"Debug "<<x<<endl
#define N (ll)51
#define INF (ll)10000000000
#define mod (ll)1000000007 
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