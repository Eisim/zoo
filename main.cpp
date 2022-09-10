#include<iostream>
#include"zoo.cpp"


int Animal::globalID = 0;


int main() {
	Bird a,b,zz;
	Sparrow s;
	Cockerel coc("coc");
	Cat t;
	Zoo z;
	z.push_back(&zz);
	z.push_back(&a);
	z.push_back(&b);
	z.push_back(&t);
	z.push_back(&s);
	z.push_back(&coc);
	
	std::cout<<z.Voice();
	std::cout << z.birdCounter();

	return 0;
}