#include "doctest.h"
#include "FamilyTree.hpp"

using namespace family;

TEST_CASE("TEST"){
           Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));
}
TEST_CASE("TEST2"){
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));
}
TEST_CASE("TEST3"){
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));
}
TEST_CASE("TEST4"){
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));
}
TEST_CASE("TEST5"){
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));
}
TEST_CASE("TEST88"){
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));
}
TEST_CASE("Test add father") {
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));

}

TEST_CASE("Test add mother") {
    Tree t("1");
            CHECK_NOTHROW(t.addMother("1", "2"));
            CHECK_NOTHROW(t.addMother("2", "3"));
            CHECK_NOTHROW(t.addMother("3", "4"));
            CHECK_NOTHROW(t.find("mother") == "2");
            CHECK_NOTHROW(t.find("grandmother") == "3");
            CHECK_NOTHROW(t.find("great-grandmother") == "4");
            CHECK_THROWS(t.addMother("1", "2")); 
            CHECK_THROWS(t.addMother("2", "5")); 
}
TEST_CASE("TESTRR"){
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));
}
TEST_CASE("Test add father2") {
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));

}

TEST_CASE("Test add mother2") {
    Tree t("1");
            CHECK_NOTHROW(t.addMother("1", "2"));
            CHECK_NOTHROW(t.addMother("2", "3"));
            CHECK_NOTHROW(t.addMother("3", "4"));
            CHECK_NOTHROW(t.find("mother") == "2");
            CHECK_NOTHROW(t.find("grandmother") == "3");
            CHECK_NOTHROW(t.find("great-grandmother") == "4");
            CHECK_THROWS(t.addMother("1", "2")); 
            CHECK_THROWS(t.addMother("2", "5")); 
}
TEST_CASE("Test add father3") {
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));

}

TEST_CASE("Test add mother3") {
    Tree t("1");
            CHECK_NOTHROW(t.addMother("1", "2"));
            CHECK_NOTHROW(t.addMother("2", "3"));
            CHECK_NOTHROW(t.addMother("3", "4"));
            CHECK_NOTHROW(t.find("mother") == "2");
            CHECK_NOTHROW(t.find("grandmother") == "3");
            CHECK_NOTHROW(t.find("great-grandmother") == "4");
            CHECK_THROWS(t.addMother("1", "2")); 
            CHECK_THROWS(t.addMother("2", "5"));  
}
TEST_CASE("Test add father32") {
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));

}

TEST_CASE("Test add mother23") {
    Tree t("1");
            CHECK_NOTHROW(t.addMother("1", "2"));
            CHECK_NOTHROW(t.addMother("2", "3"));
            CHECK_NOTHROW(t.addMother("3", "4"));
            CHECK_NOTHROW(t.find("mother") == "2");
            CHECK_NOTHROW(t.find("grandmother") == "3");
            CHECK_NOTHROW(t.find("great-grandmother") == "4");
            CHECK_THROWS(t.addMother("1", "2")); 
            CHECK_THROWS(t.addMother("2", "5")); 
}
TEST_CASE("Test add father33") {
    Tree t("1");

            CHECK_NOTHROW(t.addFather("1", "2"));
            CHECK_NOTHROW(t.addFather("2", "3"));
            CHECK_NOTHROW(t.addFather("3", "4"));
            CHECK_NOTHROW(t.find("father") == "2");
            CHECK_NOTHROW(t.find("grandfather") == "3");
            CHECK_NOTHROW(t.find("great-grandfather") == "4");
            CHECK_THROWS(t.addFather("1", "5"));
            CHECK_THROWS(t.addFather("2", "6"));

}

TEST_CASE("Test add mother33") {
    Tree t("1");
            CHECK_NOTHROW(t.addMother("1", "2"));
            CHECK_NOTHROW(t.addMother("2", "3"));
            CHECK_NOTHROW(t.addMother("3", "4"));
            CHECK_NOTHROW(t.find("mother") == "2");
            CHECK_NOTHROW(t.find("grandmother") == "3");
            CHECK_NOTHROW(t.find("great-grandmother") == "4");
            CHECK_THROWS(t.addMother("1", "2")); 
            CHECK_THROWS(t.addMother("2", "5"));
}
























// CHECK(T.find("grandmother").compare("galb2")==0);




















//            .addMother("ahmad", "rasmya")
//            .addFather("galb", "mohmed")
//            .addMother("galb", "latife")
//            .addFather("rasmya", "ahmad")
//            .addMother("rasmya", "soaad");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("ahmad") == "ahmad");
//            CHECK(T.find("rasmya") == "rasmya");
//            CHECK(T.find("mohamed") == "mohamed");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//            CHECK(T.find("galb") == "galb");
//}


