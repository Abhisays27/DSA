#include <iostream>
using namespace std;

class Hero
{
    public:
    // properties
    int health;
    char level;
    //parameterised 
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }
};

int main()
{
    Hero ramesh(10,'k');
    cout<<ramesh.health;
     cout<<ramesh.level;
}