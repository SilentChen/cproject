#include "dynamic.h"
#include <iostream>
using namespace std;

DynamicPerson DynamicSilent::person {name:"default"};

DynamicSilent::DynamicSilent() {

}

DynamicSilent::~DynamicSilent() {

}

void DynamicSilent::setname(char* name) {
	person.name = name;
}

void DynamicSilent::setage(int age) {
	person.age = age;
}

void DynamicSilent::showname() {
	cout << "showing name: " << person.name <<endl;
}

void DynamicSilent::showage() {
	cout << "showing age: " << person.age << endl;
}
