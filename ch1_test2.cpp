#include <iostream>
using namespace std;

class Point_1d
{
  public:
    Point_1d(float x);
    virtual ~Point_1d();

    float get_x() const;
    static int PointCount();

  protected:
    virtual ostream &
    print(ostream &os) const;

    float _x;
    static int _point_count;
};

int main()
{
    int result;
    int a = 2;
    int b = 3;
    result = a + b;
    cout << result << endl;

    Point_1d pt1(12);
    //cout << pt1.get_x() << endl;
    cout << sizeof(pt1) << endl;
    return 0;
}
