#include <iostream>
using namespace std;

int main() 
{
  int product;
  cout << "Hello would you like Coke, Water, Sprite, Rootbeer, or Mountaindew?\n";
  cout << "Coke = 1, Water = 2, Sprite = 3, Rootbeer = 4, Mountaindew = 5\n";
  cout << "Choose your number: ";
  cin  >> product;
  switch (product) {
  case 1:
    cout << "Cola";
    break;
  case 2:
    cout << "Water";
    break;
  case 3:
    cout << "Sprite";
    break;
  case 4:
    cout << "Rootbeer";
    break;
  case 5:
    cout << "Mountaindew";
    break;
  }
  
  if ( (product >= 6) || (product <=0))
  {
    cout << "ERROR, please restart transaction";
    
  }




  return 0;
}