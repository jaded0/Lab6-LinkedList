#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "LinkedList.h"
using namespace std;

int main() {


    LinkedList<int> intll;
    intll.insertHead(4);
    std::cout << "size: " << intll.size() << '\n';
    std::cout << "list: " << intll.toString() << '\n';

    std::cout << "..." << '\n';

    intll.insertHead(3);
    intll.insertHead(42);
    intll.insertHead(41);
    intll.insertHead(1);
    intll.insertHead(9);
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

    std::cout << "..." << '\n';


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

    //lets test the remove function now
    //middle
    ll.remove("know");
    std::cout << "list: " << ll.toString() << '\n';
    //head
    ll.remove("I");
    std::cout << "list: " << ll.toString() << '\n';
    //tail
    ll.remove("bro");
    std::cout << "list: " << ll.toString() << '\n';

    std::cout << "remove works!" << '\n';

    std::cout << "..." << '\n';

    std::cout << "list: " << ll.toString() << '\n';
    ll.clear();
    std::cout << "list:" << ll.toString() << "<="<< '\n';
    std::cout << "clear works!" << '\n';

    std::cout << "..." << '\n';

    std::cout << "list:" << ll.toString() << "<="<< '\n';
    ll.insertTail("CS");
    ll.insertTail("EcEN");
    ll.insertHead("Haircut");
    ll.insertTail("eat something");
    std::cout << "list:" << ll.toString() << "<="<< '\n';
    std::cout << "insertTail works!" << '\n';

    // std::cout << "..." << '\n';
    //
    // std::cout << "testing find()" << '\n';
    // cout << "should output 1: " << ll.find("CS") << endl;
    // cout << "should output 0: " << ll.find("Haircut") << endl;
    // cout << "should output 2: " << ll.find("EcEN") << endl;
    // cout << "should output 3: " << ll.find("eat something") << endl;
    // cout << "should output -1: " << ll.find("sleep") << endl;
    // std::cout << "find works!" << '\n';

    std::cout << "..." << '\n';

    std::cout << "list:" << ll.toString() << "<="<< '\n';
    std::cout << "inserting after..." << '\n';
    ll.insertAfter("buy soda", "Haircut");
    std::cout << "list:" << ll.toString() << "<="<< '\n';
    std::cout << "inserting after..." << '\n';
    ll.insertAfter("be better", "eat something");
    std::cout << "list:" << ll.toString() << "<="<< '\n';
    std::cout << "inserting after..." << '\n';
    //this next one will test whether it adds after a noxexistent member
    ll.insertAfter("shoudn'texist", "nothing");
    std::cout << "list:" << ll.toString() << "<="<< '\n';
    std::cout << "insertAfter works!!!" << '\n';

    std::cout << "..." << '\n';

    std::cout << "testing whether it'll accept duplicates" << '\n';
    std::cout << "list:" << ll.toString() << "<="<< '\n';
    ll.insertHead("Haircut");
    ll.insertTail("CS");
    ll.insertAfter("CS", "eat something");
    std::cout << "list:" << ll.toString() << "<="<< '\n';
    std::cout << "no duplicates accepted!" << '\n';

    std::cout << "..." << '\n';



}
