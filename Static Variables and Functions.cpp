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

class Player{
public:
  //static variable is created once for a class and is shared by all the objects of the class.
  static int count;
  Player(){
  	count++;
  }
  ~Player(){
  	count--;
  }
  //static function can only access the static data and also doesn't have a this pointer.
  //Non static function can access both static as well as non static data.
  static int getCount(){
  	return count;
  }
};
int Player::count=0;
int main()
{
 #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  Player p1;
  cout<<Player::getCount()<<endl;
  {
  	Player p2;
  	cout<<Player::getCount()<<endl;
  	{
     Player p3;
     cout<<Player::getCount()<<endl;
  	}
  	cout<<Player::getCount()<<endl;
  }
  cout<<Player::getCount()<<endl;
  return 0;
}