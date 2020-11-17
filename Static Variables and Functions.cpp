#include<iostream>
#include<bits/stdc++.h> 

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