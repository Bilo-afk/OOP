#include <iostream>
using namespace std;

// 1. Single Inheritance
class Animal {
public:
    void eat() {
        cout << "Animal can eat." << endl;
    }
};

class Dog : public Animal { // Single inheritance
public:
    void bark() {
        cout << "Dog can bark." << endl;
    }
};

// 2. Multiple Inheritance
class Engine {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

class Vehicle {
public:
    void move() {
        cout << "Vehicle is moving." << endl;
    }
};

class Car : public Engine, public Vehicle { // Multiple inheritance
public:
    void honk() {
        cout << "Car can honk." << endl;
    }
};

// 3. Multilevel Inheritance
class LivingBeing {
public:
    void breathe() {
        cout << "Living being can breathe." << endl;
    }
};

class Mammal : public LivingBeing {
public:
    void milkFeed() {
        cout << "Mammals feed milk to their babies." << endl;
    }
};

class Human : public Mammal {
public:
    void speak() {
        cout << "Human can speak." << endl;
    }
};

// 4. Hierarchical Inheritance
class Shape {
public:
    void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void drawSquare() {
        cout << "Drawing a square." << endl;
    }
};

// 5. Hybrid Inheritance (combination: Hierarchical + Multiple)
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C { // Hybrid (B from A, and D from B+C)
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    cout << "=== Single Inheritance ===" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n=== Multiple Inheritance ===" << endl;
    Car car;
    car.startEngine();
    car.move();
    car.honk();

    cout << "\n=== Multilevel Inheritance ===" << endl;
    Human h;
    h.breathe();
    h.milkFeed();
    h.speak();

    cout << "\n=== Hierarchical Inheritance ===" << endl;
    Circle c;
    Square s;
    c.draw();
    c.drawCircle();
    s.draw();
    s.drawSquare();

    cout << "\n=== Hybrid Inheritance ===" << endl;
    D obj;
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}
