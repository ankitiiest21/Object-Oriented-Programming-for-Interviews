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