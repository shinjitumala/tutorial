// hello.cpp
#include <iostream>
using namespace std;

class Cat {
  string name;
  int age;

public:
  Cat(string s){
    name = s;
    age = 0;
  }

  void aYearHasPassed(){
    age++;
  }

  string getName(){
    return name;
  }

  int getAge(){
    return age;
  }
};

int main(){
  string s = "hello, world!";
  cout << s << endl;

  Cat neko1("sam");
  cout << "A cat is born!" << endl;
  cout << "The cat is called \"" << neko1.getName() << "\"." << endl;
  neko1.aYearHasPassed();
  cout << "A year passed." << endl;
  cout << "The cat is now " << neko1.getAge() << " years old." << endl;

  cout << "goodbye, world!" << endl;
}
