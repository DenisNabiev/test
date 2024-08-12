#include <iostream>
#include<string>
class Animal {
	int age;
public:
	std::string name;
	Animal(std::string name, int age) {
		this->name = name;
		this->age = age;
	}
	void print ()
	{
		std::cout << "Название: " << name << "\tВозраст: " << age<<std::endl;
	} 
	//Возраст выводится на экран, потому что метод print() не пытается получить доступ к полю age напрямую. 
	//Он использует метод print(), который является частью класса Animal, и имеет доступ к приватному полю age.  
	void birthday(int number) {
		age += number;
		print();

	}
};
int main() {
	setlocale(LC_ALL, "RU");
	Animal animal1("Слон", 12);
	Animal animal2("Кит", 6);
	Animal animal3("Тигр", 2);
	animal1.print();
	animal2.print();
	animal3.print();
	std::cout << "Возраст после дня рождения\n";
	animal1.birthday(1);
	animal2.birthday(1);
	animal3.birthday(1);
	return 0;
}
