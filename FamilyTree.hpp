#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace family{
    static bool found=false;
    class Tree{

    private :

        string MyName;
        Tree *Mother;
        Tree *Father;
        int depth;
        int key; //0 or 1
        string rel;
        bool found;

    public :
     
        Tree(string name);
     
        Tree &addFather(string name, string father);
        Tree &addMother(string name, string mother);
         ~Tree()
        {
          if(Father)
          delete Father;
          if(Mother)
          delete Mother;
        }
        string relation(string name);
        string find(string rel);
        void display();
        void remove(string name);
        Tree *curr(Tree *now,string name);
        string curr2(Tree *now,string name,string ans);
        string find_helper(Tree *now, string name);
        void del(Tree *root) ;
        void printT(Tree *root);
    };

}
