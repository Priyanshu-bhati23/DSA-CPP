#include<iostream>
using namespace std;

class A {
public:
    void func1() {
        cout << "i" << endl;
    }
};

class B {
public:
    void func2() {
        cout << "am" << endl;
    }
};

class D {
public:
    void func3() {
        cout << "priyanshu" << endl;
    }
};

class E : public A, public D {
public:
    void func4() {
        cout << "yeahhhhhh" << endl;
    }
};

class C : public B, public E {
public:
    void func5() {
        cout << "Hybrid Inheritance Example" << endl;
    }
};

int main() {
    A ob1;
    B ob2;
    C obj;

    obj.func1();  // Accessing func1() from class A
    obj.func2();  // Accessing func2() from class B
    obj.func3();  // Accessing func3() from class D
    obj.func4();  // Accessing func4() from class E
    obj.func5();  // Accessing func5() from class C

    return 0;
}
