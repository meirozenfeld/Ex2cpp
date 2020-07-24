//#include "FamilyTree.hpp"
//#include <iostream>
//#include <string>
//
//
//
//using namespace std;
//using namespace family;
#include "FamilyTree.hpp"
#include <string>
#include <stdexcept>
#include <iostream>
#include <cstring>

using namespace std;
using namespace family;


Tree::Tree(string name) {
    this->MyName = name;
    this->Father = NULL;
    this->Mother = NULL;
    this->depth = 0;
    this->key = 0;
    this->rel = "";
    this->found=false;
}

Tree *Tree::curr(Tree *where, string who) {
    if (where == NULL)
    {
        return NULL;
    }
    if (who.compare(where->MyName) == 0)
    {
        return where;
    }
    else
    {
        Tree *f = curr(where->Father, who);
        if (f != NULL)
        {
            return f;
        }
        Tree *m = curr(where->Mother, who);
        if (m != NULL)
        {
            return m;
        }
    }
    return NULL;

}

Tree &Tree::addFather(string name, string father) {

    Tree *temp = this;
    Tree *temp2 = curr(this, name);
    if(temp2 == NULL)
    {
         throw std::invalid_argument(name + " doesnt exist\n");
    }
    this->key = 0;
    if (temp2->MyName.compare(name) == 0) {
        if (temp2->Father == NULL) {
            temp2->Father = new Tree(father);
            temp2->Father->MyName = father;

            string temp3 = curr2(this, name, "");
            this->key = 0;
            int i = 0;
            while (temp->MyName != name) {
                if (temp3[i] == 'f') {
                    temp = temp->Father;
                    i++;
                }
                if (temp3[i] == 'm') {
                    temp = temp->Mother;
                    i++;
                }

            }

            temp2->Father->depth = i + 1;
            int r = i + 1;


            if (r == 0) {
                cout << name + " it's me";

            } else if (r == 1) {

                temp2->Father->rel = "father";
            } else if (r == 2) {

                temp2->Father->rel = "grandfather";
            } else if (r > 2) {
                string times = "";
                int k = 2;
                while (k < r) {
                    times = times + "great-";
                    k++;
                }
                temp2->Father->rel = times + "grandfather";
            }
            temp->Father = temp2->Father;
        }
        else {
            //  cout << name + " has father\n";
            throw std::invalid_argument(name + " has a father\n");

        }
    }
    else {
        cout << name + " doesnt exist\n";
        throw std::invalid_argument(name + " doesnt exist\n");
    }

    return *this;

}

Tree &Tree::addMother(string name, string mother) {
    Tree *temp = this;
    Tree *temp4 = curr(temp, name);
     if(temp4 == NULL)
    {
         throw std::invalid_argument(name + " doesnt exist\n");
    }
    this->key = 0;
    if (temp4->MyName == name) {
        if (temp4->Mother == NULL) {
            temp4->Mother = new Tree(mother);
            temp4->Mother->MyName = mother;

            string temp3 = curr2(temp, name, "");
            this->key = 0;
            int i = 0;
            while (temp->MyName != name) {
                if (temp3[i] == 'f') {
                    temp = temp->Father;
                    i++;
                }
                if (temp3[i] == 'm') {
                    temp = temp->Mother;
                    i++;
                }

            }

            temp4->Mother->depth = i + 1;
            int r = i + 1;


            if (r == 0) {
                cout << name + " it's me";

            } else if (r == 1) {

                temp4->Mother->rel = "mother";
            } else if (r == 2) {

                temp4->Mother->rel = "grandmother";
            } else if (r > 2) {
                string times = "";
                int k = 2;
                while (k < r) {
                    times = times + "great-";
                    k++;
                }
                temp4->Mother->rel = times + "grandmother";
            }
            temp->Mother = temp4->Mother;
        }
        else {

            throw std::invalid_argument(name + " has a mother\n");

        }
    }
    else {
        throw std::invalid_argument(name + " doesnt exist\n");
    }

    return *this;


}

string Tree::relation(string name) {
    // this->key=0;
    // cout << name +" is ";
    if(this->MyName.compare(name)==0)
    {
        return "me";
    }
    Tree *temp = this;
    Tree *temp2 = curr(temp, name);
    if(temp2 == NULL)
    {
       // throw std::invalid_argument(name + " doesnt exist\n");
        return "unrelated";
    }
    this->key = 0;
    this->found = false;
    return temp2->rel;
}
////////////////
string Tree::find_helper(Tree *now, string name ) {
    //Tree temp = *now;
    string n = now->MyName;
    if ((now->rel).compare(name) == 0) {
        this->key = 1;
        this->found = true;
        return n;
    }
    if (now->Mother != NULL && now->rel != name && this->key != 1 && this->found!=true) {
        n = find_helper(now->Mother, name);
    }
    if (now->Father != NULL && now->rel != name && this->key != 1 && this->found!=true) {
        n = find_helper(now->Father, name);
    }

    if (now->rel == name) {
        this->found = true;
        return n;
    }

    if (this->key == 1) {
        this->found = true;
        return n;
    }
    if(this->found==false )
    {
        return "";
    }
    return "";
}
/////////////////

string Tree::find(string rel) {
    // string p = new string();
    string p = find_helper(this, rel);
    this->key=0;
    this->found=false;
    if(p.compare("")==0)
    {
       throw runtime_error("not found");
    }
    return p;
}

void Tree:: printT(Tree *temp) {
    if (temp != nullptr)
    {
        cout << temp->rel + ": " + temp->MyName << endl;
        if (temp->Father != NULL && temp->Mother != NULL)
        {
            printT(temp->Father);
            printT(temp->Mother);
        }
        else if (temp->Father != NULL)
        {
            printT(temp->Father);
        }
        else if (temp->Mother != NULL)
        {
            printT(temp->Mother);
        }
    }
}
void Tree::display() {
    Tree *temp = this;
    printT(temp);
}
void Tree::del(Tree *root) {

    if(root != nullptr) {

        if (root->Mother != nullptr) {
            root->Mother = nullptr;
        }
        if (root->Father != nullptr) {
            root->Father = nullptr;
        }
        delete root;
    }
}

void Tree::remove(string name) {
    Tree *temp = this;
    Tree *temp9 = this;
    int i = 0;
    

    // Tree temp2 = curr(temp, name);
    this->key=0;
    string temp2 = curr2(temp,name,"");
  

    if(temp2.length()==0 ||  this->MyName.compare(name)==0 )
    {

        throw std::invalid_argument(name + " cant delete\n");

    }
    else{
    while (temp->MyName != name) {
        if (temp2[i] == 'f') {
            temp = temp->Father;
            i++;
        }
        if (temp2[i] == 'm') {
            temp = temp->Mother;
            i++;
        }
    }
    i = 0;
    if(temp2.length()==1)
    {
        //f
    }
    else {
        while (i<temp2.length()-1) {
            if (temp2[i] == 'f') {
                temp9 = temp9->Father;
                i++;
            }
            else  {
                temp9 = temp9->Mother;
                i++;
            }
        }
    }
    this->found = false;
    this->key = 0;

        if(temp2[i]=='f'){
             delete temp9->Father;
             temp9->Father = nullptr;
        }
        if(temp2[i]=='m')
        { 
            delete temp9->Mother;
            temp9->Mother = nullptr;
        }
    } 

    this->key=0;
    this->found=false;
}

string Tree::curr2(Tree *now, string name, string ans) {
    //Tree temp = *now;
    string t = ans;
    if (now->MyName.compare(name)==0) {
        this->key = 1;
        return t;
    }

    if (now->Father != NULL && now->MyName != name && this->key != 1) {
        t = curr2(now->Father, name, ans + "f");
    }
    if (now->Mother != NULL && now->MyName != name && this->key != 1) {
        t = curr2(now->Mother, name, ans + "m");
    }
    if (this->key == 1) {
        return t;
    }
     return "";
}
