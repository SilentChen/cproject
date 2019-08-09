#include "dynamic.h"
#include "static.h"
#include "test.h"

int main() {
	StaticSilent::setname("static_sileng");
	StaticSilent::setage(30);

	StaticSilent sobj;
	sobj.showname();
	sobj.showage();

	DynamicSilent::setname("dynamic_sileng");
	DynamicSilent::setage(31);

	DynamicSilent dobj;
	dobj.showname();
	dobj.showage();

	DTest obj;
}
