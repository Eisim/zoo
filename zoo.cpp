#include<iostream>
#include<vector>

class Animal {
	static int globalID;
	int ID;
	std::string name;

public:

	Animal() :name("unnamed") { ID = globalID; globalID++; };
	Animal(std::string name_) :name(name_) { ID = globalID; globalID++; };
	virtual std::string Voice() { return ""; }
	virtual std::string getName() { return "It's a "+name; };
	virtual int getID() { return ID; };
};







class Mammal :public Animal {
public:
	Mammal() :Animal() {};
	Mammal(std::string name) :Animal(name) {};
	std::string Voice() override { return ""; }
};
class Bird :public Animal {
public:
	Bird() :Animal() {};
	Bird(std::string name) :Animal(name) {};
	std::string Voice() override { return ""; }
};

class Cat : public Mammal {
public:
	Cat() :Mammal() {};
	Cat(std::string name) :Mammal(name) {};
	std::string Voice() override { return"Meow"; };
};

class Dog : public Mammal {
public:
	Dog() :Mammal() {};
	Dog(std::string name) :Mammal(name) {};
	std::string Voice() override { return"Whoof"; };
};
class Fox : public Mammal {
public:
	Fox() :Mammal() {};
	Fox(std::string name) :Mammal(name) {};
	std::string Voice() override { return"Waff"; };
};

class Sparrow : public Bird {
public:
	Sparrow() :Bird() {};
	Sparrow(std::string name) :Bird(name) {};
	std::string Voice() override { return"Tweet"; };
};

class Cockerel : public Bird {
public:
	Cockerel() :Bird() {};
	Cockerel(std::string name) :Bird(name) {};
	std::string Voice() override { return"Cuckoo"; };
};


class Zoo {
	std::vector<Animal*> zoo;

public:

	void push_back(Animal* animal) {
		zoo.push_back(animal);

	}
	void pop_back() {
		zoo.pop_back();
	}
	std::string Voice() {
		std::string voice;
		for (unsigned int i = 0; i < zoo.size(); i++) voice += (zoo[i]->Voice() + " ");
		return voice;
	}

	int birdCounter() {
		int counter = 0;
		for (int i = 0; i < zoo.size(); i++) {
			Bird* p=dynamic_cast<Bird*>(zoo[i]);
			if (p != nullptr) counter++;


		}
		return counter;
	}
};

