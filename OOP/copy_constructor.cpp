#include <iostream>
sing namespace std;
<include> string

class Player{
private:
string name_, health_;
int xp_;
public:
Player(const Player &source): name{source.name}, health{source.health},xp{source.xp}{
cout<<"Copy constructor initiated"<<endl;

}

}

int main(){

Player p1;
Player p2{p1};

}
