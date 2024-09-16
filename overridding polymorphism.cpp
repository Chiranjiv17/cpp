#include <iostream>
using namespace std;

class Animal {
public:
    
    virtual void dance() const {
        cout << "Animal dances" << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void dance() const override {
        cout << "Dog pop dance" << endl;
    }
};
class Cat : public Animal {
public:
    
    void dance() const override {
        cout << "Cat hip-hop " << endl;
    }
};

int main() {

    Animal* animalPtr;

    Dog dog;
    animalPtr = &dog;
    animalPtr->dance(); 

    Cat cat;
    animalPtr = &cat;
    animalPtr->dance(); 

}

