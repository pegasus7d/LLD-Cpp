// =============================================================
// MINI ASSIGNMENT: Composition
// =============================================================
//
// WHAT IS COMPOSITION?
//   A HAS-A relationship where the child object CANNOT exist
//   without the parent. If the parent is destroyed, the child
//   is also destroyed.
//   Example: A Car HAS an Engine. The Engine is part of the Car.
//            If the Car is destroyed, the Engine goes with it.
//
// KEY DIFFERENCE from Aggregation:
//   Composition  = strong ownership, child dies with parent
//   Aggregation  = weak ownership, child can live independently
//
// -------------------------------------------------------------
// TASK: Build a "Car" made of "Engine" and "Wheel" objects
// -------------------------------------------------------------
//
// Step 1: Create a class "Engine"
//   - members: horsepower (int), fuelType (string)
//   - constructor taking horsepower and fuelType
//   - method: start() — prints "Engine started: <hp>HP, fuel: <fuelType>"
//   - destructor — prints "Engine destroyed"
//
// Step 2: Create a class "Wheel"
//   - members: size (int), type (string)  e.g. size=18, type="Alloy"
//   - constructor taking size and type
//   - method: rotate() — prints "<size>inch <type> wheel rotating"
//   - destructor — prints "Wheel destroyed"
//
// Step 3: Create a class "Car"
//   - members: brand (string), engine (Engine), wheels (vector<Wheel>)
//     NOTE: store Engine and Wheel by VALUE — not pointer
//           this is composition — Car owns them completely
//   - constructor taking brand, horsepower, fuelType
//     create the Engine in the initialiser list
//   - method: addWheel(int size, string type) — adds a Wheel to vector
//   - method: drive() — calls engine.start(), then wheel.rotate()
//             on each wheel
//   - destructor — prints "Car destroyed"
//
// Step 4: In main()
//   - Create a Car
//   - Add 4 wheels
//   - Call drive()
//   - Let it go out of scope — observe destruction order
//     (Car destroyed first, then Engine, then all Wheels)
//
// -------------------------------------------------------------
// THINK ABOUT:
//   Why do we store Engine by value (not pointer) in composition?
//   What happens to Engine and Wheels when Car goes out of scope?
// -------------------------------------------------------------



#include <iostream>
#include <vector>
using namespace std;

class Engine {
private:
    int horsepower;
    string fuelType;
public:
    Engine(int hp, string fuel) : horsepower(hp), fuelType(fuel) {}
    void start() {
        cout << "Engine started: " << horsepower << "HP, fuel: " << fuelType << endl;
    }
    ~Engine() {
        cout << "Engine destroyed" << endl;
    }
};


class Wheel{
private:
	int size;
	string type;
public:
	Wheel(int size,string type):size(size),type(type){}

	void rotate(){
		 cout << size << "inch " << type << " wheel rotating" << endl;
	}

	~Wheel(){
		cout<<"Wheel destroyed"<<endl;
	}
};

class Car{
private:
	string brand;
	Engine engine;
	vector<Wheel>wheels;
public:
	Car(string brand, int hp, string fuel) : brand(brand), engine(hp, fuel) {}

	void drive(){
		engine.start();
		for(Wheel& w: wheels){
			w.rotate();
		}
	}

	void addWheel(int size, string type){
		 wheels.emplace_back(Wheel(size, type));
	}

	~Car(){
		cout<<"Car destroyed"<<endl;
	}





};







int main(){

	Car car("Toyota", 150, "Petrol");
	car.addWheel(18, "Alloy");
	car.addWheel(18, "Alloy");
	car.addWheel(18, "Alloy");
	car.addWheel(18, "Alloy");
	car.drive();

}


