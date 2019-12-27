#include <iostream>
using namespace std;

class ZooAnimal
{
public:
  ZooAnimal();
  ZooAnimal(string name)
  {
    name = name;
  }
  virtual ~ZooAnimal();

  //
  virtual void rotate();
  static int PointCount();

protected:
  int loc;
  string name;
};

class Bear : public ZooAnimal
{
public:
  Bear();
  Bear(string name)
  {
    name = name;
  }
  ~Bear();

  //
  void rotate();
  virtual void dance();

protected:
  enum Dances
  {
  };
  Dances dances_known;
  int cell_block;
};

int main()
{
  Bear b("bear");
  Bear *pb = &b;
  Bear &rb = *pb;

  cout << sizeof(b) << endl;
}
