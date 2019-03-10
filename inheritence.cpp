/* A programming exercise to learn types of inheritence in object oriented programming through c++,
   @uthor: Saichand A V R P,
   created on 10 March 2019.
*/

#include<iostream>

using namespace std;

/* We take the example of Games, because I like to play a lot,
   Super class: class which is inherited by other classes, also called as Base class
   Sub class: Class which inherits the properties of the Base class, also called as Derived class
*/
/*
   In our case, Sports would be the Base class,
   where all the games are derived from the sports class,
   which have some common properties to all the games.
*/

class Sports //Base class
{
  public:
   Sports()
   {
     cout << " This is the sports class " << endl;
   }
};

class OutDoorSports : public Sports //Derived class 1 with public inheritence
{
  public:
  OutDoorSports()
  {
    cout << "This is the OutDoorSports class " << endl;
  }
};

class InDoorSports : public Sports //Derived class 2 with public inheritence
{
  public:
  InDoorSports()
  {
    cout << "This is the InDoorSports class " << endl;
  }
};
/* The below class amounts to the hierarchical inheritence, where Chess is derived from InDoorSports
   and InDoorSports is inturn derived from Sports class which is the super class or Base class for all the classes.
*/
class Chess : public InDoorSports //Derived class of InDoorSports with public inheritence
{
  public:
  Chess()
  {
    cout << "This is the Chess Game class " << endl;
  }
};

class Cricket : public OutDoorSports //Derived class of OutDoorSports with public inheritence
{
  public:
  Cricket()
  {
    cout << "This is the Cricket Game Class " << endl;
  }
};

int main()
{
  cout << "In main function " << endl;
  Chess ch1;
  Cricket cr1;
  return 0;
}
