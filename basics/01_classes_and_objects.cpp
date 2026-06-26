// =============================================================
// ASSIGNMENT 1: Classes and Objects
// =============================================================
//
// WHAT IS A CLASS?
//   A class is a blueprint. It defines what data (attributes)
//   and what behaviour (methods) an object will have.
//
// WHAT IS AN OBJECT?
//   An object is an instance of a class — the actual thing
//   created in memory from that blueprint.
//
// -------------------------------------------------------------
// TASK 1: Define a class called "Car"
// -------------------------------------------------------------
//   It should have the following PRIVATE data members:
//     - brand  (string)
//     - speed  (int)
//     - fuelLevel (double)
//
//   It should have the following PUBLIC methods:
//     - a constructor that takes brand, speed, fuelLevel
//       and initialises the members using an initialiser list
//     - accelerate(int amount) — increases speed by amount
//     - brake(int amount)      — decreases speed by amount, min 0
//     - refuel(double litres)  — adds litres to fuelLevel
//     - display()              — prints all member values
//
// HINT: Use access specifiers — private: and public:
// HINT: Initialiser list syntax:  Car(string b, int s) : brand(b), speed(s) {}
//
// -------------------------------------------------------------
// TASK 2: In main()
// -------------------------------------------------------------
//   - Create two Car objects on the STACK (direct declaration)
//   - Create one Car object on the HEAP (using new)
//   - Call accelerate, brake, refuel, display on each
//   - Remember to delete the heap object when done
//
// HINT: Stack object  →  Car c("Toyota", 0, 50.0);
// HINT: Heap object   →  Car* c = new Car("BMW", 0, 60.0);
//                         delete c;
//
// -------------------------------------------------------------
// THINK ABOUT:
//   Why do we keep data members private?
//   What would go wrong if speed could be set to -100 directly?
// -------------------------------------------------------------
#include <iostream>
#include<string>


using namespace std;

class Car{

	private:
		string brand;
		int speed;
		double fuelLevel;

		
		
	public:


		Car(string brand,int speed,double fuelLevel)
			:brand(brand),speed(speed),fuelLevel(fuelLevel){}
		
		void accelerate(int amount){

			speed+=amount;
		}
		 void brake(int amount){
			if(speed-amount<=0){
				speed=0;
			}else{
				speed-=amount;
			}
			
		}

		void refuel(double litres){
			fuelLevel+=litres;
		}

		void display(){

			cout<<"--------------------------"<<endl;
			cout<<"brand:"<<brand<<endl;
			cout<<"speed:"<<speed<<endl;
			cout<<"fuelLevel:"<<fuelLevel<<endl;

			cout<<endl;
			cout<<"--------------------------"<<endl;

		}


};



int main(){

	Car c1("Toyota",40,100.0);
	c1.display();

	c1.accelerate(30);
	c1.brake(10);
	c1.refuel(20.5);

	c1.display();


	Car c2("LR",80,90.0);
	c2.display();


	c2.accelerate(50);
	c2.brake(20);
	c2.refuel(30.5);

	c2.display();


	Car* ptr=new Car("Bmw",0,60.0);
	ptr->display();
	delete ptr;

}










