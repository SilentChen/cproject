#include "static.h"
#include <stdio.h>

StaticPerson StaticSilent::person{name:"default", age:0};

StaticSilent::StaticSilent() {

}


StaticSilent::~StaticSilent() {

}

void StaticSilent::setname(char* name) {
	person.name = name;
}

void StaticSilent::setage(int age) {
	person.age = age;
}

void StaticSilent::showname() {
	printf("person's name is: %s \n", person.name);
}

void StaticSilent::showage() {
	printf("person's age is %d\n", person.age);
}
