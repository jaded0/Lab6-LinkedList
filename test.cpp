#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "LinkedList.h"
using namespace std;

int main() {
  LinkedList<string> ll;
  ll.insertHead("bro");
  std::cout << "size: " << ll.size() << '\n';
  std::cout << "list: " << ll.toString() << '\n';

  std::cout << "..." << '\n';

  ll.insertHead("ok");
  ll.insertHead("what's");
  ll.insertHead("know");
  ll.insertHead("don't");
  ll.insertHead("I");
  std::cout << "size: " << ll.size() << '\n';
  std::cout << "list: " << ll.toString() << '\n';

  std::cout << "..." << '\n';

  std::cout << "item at 0: " << ll.at(0) << '\n';
  std::cout << "item at 5: " << ll.at(5) << '\n';
  try{
    std::cout << "item at 6: " << ll.at(6) << '\n';
  }
  catch (std::out_of_range){
    std::cout << "out_of_range" << '\n';
  }

  std::cout << "..." << '\n';


  LinkedList<int> intll;
  intll.insertHead(4);
  std::cout << "size: " << intll.size() << '\n';
  std::cout << "list: " << intll.toString() << '\n';

  std::cout << "..." << '\n';

  intll.insertHead(4);
  intll.insertHead(4);
  intll.insertHead(4);
  intll.insertHead(4);
  intll.insertHead(4);
  std::cout << "size: " << intll.size() << '\n';
  std::cout << "list: " << intll.toString() << '\n';

  std::cout << "..." << '\n';

  std::cout << "item at 0: " << intll.at(0) << '\n';
  std::cout << "item at 5: " << intll.at(5) << '\n';
  try{
    std::cout << "item at 6: " << intll.at(6) << '\n';
  }
  catch (std::out_of_range){
    std::cout << "out_of_range" << '\n';
  }
}
