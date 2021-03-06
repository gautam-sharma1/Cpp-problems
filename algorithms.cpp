#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>

class Person{
  std::string name;
  int age;
public:
  Person() = default;
  Person(std::string name, int age):name{name}, age{age}{}
  bool operator<(const Person &rhs)const{
    return this->age < rhs.age;
  }
  bool operator==(const Person &rhs) const{
    return(this->name==rhs.name && this->age==rhs.age);
  }
  };
  
  void test1(){
    
    std::list<Person> players{
      {"Larry",18},
      {"Moe",20},
      {"Curly",21}
    };
    
    auto loc1 = std::find(players.begin(),players.end(), Person{"Moe",20});
    if(loc1!= platers.end()){
      std::cout<<"Found"<<std::endl;
    }
  }
  
  
  
