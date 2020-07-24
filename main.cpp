#include "FamilyTree.hpp"
#include <string.h>
using namespace family;
using namespace std;

int main() {

    Tree a("a"); 
    a.addFather("a","b");
    a.addMother("a","c");

    a.addFather("b","d");
    a.addMother("b","e");

    a.relation("b");
    cout<< "father is :"<<a.find("father");
    a.display();
    return 0;
}