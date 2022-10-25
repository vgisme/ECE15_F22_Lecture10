#include <iostream>

class Foo {
public:
    ~Foo() { std::cout << "Foo Destructor Called" << std::endl; }
    void printAMessage() { std::cout << "I'm your friend foo!" << std::endl; }
};

void FooRun(int aValue) {
    Foo theFoo;

    if(aValue > 1) throw std::runtime_error("Yikes!!");

    theFoo.printAMessage();
}

int main() {

    try {
        FooRun(10);
    }
    catch(std::runtime_error ex) {
        std::cout << "Let's handle the issue" << std::endl;
        std::cout << ex.what() << std::endl;
    }
    return 0;
}
