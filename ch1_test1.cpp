#include <iostream>
using namespace std;

template <class type, int dim>
class Point_nd
{
  public:
    Point_nd();
    Point_nd(type coords[dim])
    {
        for (int i = 0; i < dim; i++)
        {
            _coords[i] = coords[i];
        }
    }

    type &operator[](int index)
    {
        assert(index >= 0 && index < dim);
        return _coords[index];
    }

  private:
    type _coords[dim];
};

template <class type, int dim>
ostream &
operator<<(ostream &os, const Point_nd<type, dim> &pt)
{
    os << "( ";
    for (int i = 0; i < dim - 1; i++)
        os << pt[i] << " ";
    os << pt[dim - 1];
    os << " )";
}

int main()
{
    int result;
    int a = 2;
    int b = 3;
    result = a + b;
    cout << result << endl;

    Point_nd<float, 3> pt(float a[3]);
    for (int i = 0; i < 3; i++)
        cout << pt << endl;

    return 0;
}
