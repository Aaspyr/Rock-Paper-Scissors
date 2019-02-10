#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{
  int r, p, s, x;
  srand(time(NULL));
  int a=rand() % 3 + 1;
  int user = 0;
  std::cout << "Enter:\n 1 - ✌️\n 2 - ✋\n 3 - ✊\n";
  std::cin >> x;
  if (x == 1)
  {
    std::cout << "✌️\n vs\n";
  }
  if (x==2)
  {
    std::cout << "✋\n vs\n";
  }
  if (x==3)
  {
    std::cout << "✊\n vs\n";
  }

  if (x>0)
  {
  if (a==1)
  {
    std::cout << "✌️\n";
  }
  if (a==2)
  {
    std::cout << "✋\n";
  }
  if (a==3)
  {
    std::cout << "✊\n";
  }
  }

  if (a==x)
  {
    std::cout << "TIE\n";
  }
  if (x<a)
  {
    std::cout << "VICTORY\n";
  }
  if (x>a)
  {
    std::cout << "DEFEAT\n";
  }
  return 0;
}
