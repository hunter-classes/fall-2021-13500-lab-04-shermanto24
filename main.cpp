#include <iostream>
#include "funcs.h"

int main()
{
  //testing task A
  std::cout << "---------- Testing Task A ----------\n" << '\n';

  std::cout << "width = 7, height = 4\nshape:\n" << '\n';
  std::string a1 = box(7, 4);
  std::cout << a1 << '\n';

  std::cout << "width = 3, height = 5\nshape:\n" << '\n';
  std::string a2 = box(3, 5);
  std::cout << a2 << '\n';

  //testing task B
  std::cout << "---------- Testing Task B ----------\n" << '\n';

  std::cout << "width = 11, height = 6\nshape:\n" << '\n';
  std::string b1 = checkerboard(11, 6);
  std::cout << b1 << '\n';

  std::cout << "width = 7, height = 5\nshape:\n" << '\n';
  std::string b2 = checkerboard(7, 5);
  std::cout << b2 << '\n';

  std::cout << "width = 6, height = 6\nshape:\n" << '\n';
  std::string b3 = checkerboard(6, 6);
  std::cout << b3 << '\n';

  //testing task C
  std::cout << "---------- Testing Task C ----------\n" << '\n';

  std::cout << "size = 8\nshape:\n" << '\n';
  std::string c1 = cross(8);
  std::cout << c1 << '\n';

  std::cout << "size = 5\nshape:\n" << '\n';
  std::string c2 = cross(5);
  std::cout << c2 << '\n';

  std::cout << "size = 1\nshape:\n" << '\n';
  std::string c3 = cross(1);
  std::cout << c3 << '\n';

  //testing task D
  std::cout << "---------- Testing Task D ----------\n" << '\n';

  std::cout << "length = 6\nshape:\n" << '\n';
  std::string d1 = lower(6);
  std::cout << d1 << '\n';

  std::cout << "length = 3\nshape:\n" << '\n';
  std::string d2 = lower(3);
  std::cout << d2 << '\n';

  //testing task E
  std::cout << "---------- Testing Task E ----------\n" << '\n';

  std::cout << "length = 5\nshape:\n" << '\n';
  std::string e1 = upper(5);
  std::cout << e1 << '\n';

  std::cout << "length = 8\nshape:\n" << '\n';
  std::string e2 = upper(8);
  std::cout << e2 << '\n';

  //testing task F
  std::cout << "---------- Testing Task F ----------\n" << '\n';

  std::cout << "width = 12, height = 5\nshape:\n" << '\n';
  std::string f1 = trapezoid(12, 5);
  std::cout << f1 << '\n';

  std::cout << "width = 5, height = 3\nshape:\n" << '\n';
  std::string f2 = trapezoid(5, 3);
  std::cout << f2 << '\n';

  std::cout << "width = 12, height = 7\nshape:\n" << '\n';
  std::string f3 = trapezoid(12, 7);
  std::cout << f3 << '\n';

  std::cout << "width = 12, height = 6\nshape:\n" << '\n';
  std::string f4 = trapezoid(12, 6);
  std::cout << f4 << '\n';

  std::cout << "width = 9, height = 5\nshape:\n" << '\n';
  std::string f5 = trapezoid(9, 5);
  std::cout << f5 << '\n';

  std::cout << "width = 9, height = 6\nshape:\n" << '\n';
  std::string f6 = trapezoid(9, 6);
  std::cout << f6 << '\n';

  //testing task G
  std::cout << "---------- Testing Task G ----------\n" << '\n';

  std::cout << "width = 16, height = 11\nshape:\n" << '\n';
  std::string g1 = checkerboard3x3(16, 11);
  std::cout << g1 << '\n';

  std::cout << "width = 27, height = 27\nshape:\n" << '\n';
  std::string g2 = checkerboard3x3(27, 27);
  std::cout << g2 << '\n';
}
