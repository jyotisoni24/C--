#include <iostream>

class MyClass {
private:
    int* data;

public:
     
    MyClass(int value) {
        data = new int(value);
    }

    
    MyClass(const MyClass& other) {
        data = new int(*(other.data));
    }

     
    MyClass& operator=(const MyClass& other) {
        
        if (this != &other) {
            
            delete data;

             
            data = new int(*(other.data));
        }
        return *this;
    }

     
    ~MyClass() {
        delete data;
    }

    // Method to display data
    void display() const {
        std::cout << "Value: " << *data << std::endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    std::cout << "Before assignment:" << std::endl;
    obj1.display();
    obj2.display();

    // Using overloaded assignment operator
    obj1 = obj2;

    std::cout << "After assignment:" << std::endl;
    obj1.display();
    obj2.display();

    return 0;
}