// =============================================================
// ASSIGNMENT 3: Pointers and References
// =============================================================
//
// WHY DOES THIS MATTER FOR OOP?
//   In C++ you constantly work with objects via pointers and
//   references — especially for polymorphism, heap allocation,
//   and avoiding expensive copies.
//
// -------------------------------------------------------------
// PART A — RAW POINTERS
// -------------------------------------------------------------
//
// TASK A1: Basic pointer practice
//   - Declare an int variable x = 42
//   - Declare a pointer p that points to x
//   - Print the value of x using the pointer  (*p)
//   - Print the address stored in p            (p)
//   - Change x to 100 through the pointer and print x again
//
// TASK A2: Heap allocation
//   - Allocate an int on the heap using new
//   - Assign it the value 7
//   - Print it, then delete it
//   - Set the pointer to nullptr after deleting
//     (HINT: always do this — avoids dangling pointer bugs)
//
// TASK A3: Pointer to an object
//   - Create a simple class "Box" with a member: int side
//     and a method volume() that returns side * side * side
//   - Create a Box on the HEAP using new
//   - Access volume() using the arrow operator (->)
//   - Delete the Box when done
//
// -------------------------------------------------------------
// PART B — REFERENCES
// -------------------------------------------------------------
//
// TASK B1: Basic reference
//   - Declare an int a = 10
//   - Declare a reference ref that refers to a
//   - Change a to 20 through ref and print a
//   - Notice: a reference is an alias, not a copy
//
// TASK B2: Pass by reference vs pass by value
//   - Write a function: void doubleValue(int val)
//     that doubles val — call it and check if the original changes
//   - Write a function: void doubleRef(int& val)
//     that doubles val — call it and check if the original changes
//   - Understand WHY the results differ
//
// TASK B3: Const reference
//   - Write a function: void printBox(const Box& b)
//     that prints b.side and b.volume()
//   - Why is const Box& better than passing Box by value?
//     (Think: no copy, no accidental modification)
//
// -------------------------------------------------------------
// PART C — SMART POINTERS (modern C++, prefer these)
// -------------------------------------------------------------
//   Include <memory>
//
// TASK C1: unique_ptr
//   - Create a Box using make_unique<Box>(5)
//   - Call volume() on it using ->
//   - Notice: you do NOT call delete — it deletes itself
//
// TASK C2: shared_ptr
//   - Create a shared_ptr<Box> using make_shared<Box>(3)
//   - Create a second shared_ptr pointing to the same Box
//   - Print use_count() — how many owners are there?
//   - Let both go out of scope and the Box is auto-deleted
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is a dangling pointer?
//   What is a memory leak?
//   Why should you prefer unique_ptr over raw new/delete?
// -------------------------------------------------------------



#include <iostream>
#include <memory>


using namespace std;




class Box{

	

	public:
		int side;
		Box(int side):side(side){};
		double volume(){
			return side*side*side;
		}

		void display(){		
			cout << "Side:" <<side<<endl;
		    cout << "Voume: " << volume() << endl;
		}	


};


void doubleValue(int val) { val=2*val;}   // works on a copy
void doubleRef(int& val) { val=2*val;}    // works on the original





void printBox(Box& b){
	b.display();
}





int main(){
	int x=42;
	int* ptr=&x;

	cout<<(*ptr)<<endl;

	*ptr=100;

	cout<<(ptr)<<endl;

	cout<<(*ptr)<<endl;



	int* ptr1=new int(7);
	cout<<(*ptr1)<<endl;
	delete ptr1;
	ptr1=nullptr;


	Box* b1=new Box(4);
	b1->display();
	delete b1;
	b1=nullptr;



	int a=7;;
	int &ref=a;
	ref=10;
	cout<<a<<endl;

	doubleValue(a);
	cout<<a<<endl;



	doubleRef(a);
	cout<<a<<endl;


	unique_ptr<Box> b=make_unique<Box>(5);
	b->display();


	Box stackBox(6);
	printBox(stackBox);


	shared_ptr<Box> s1=make_shared<Box>(3);
	cout<<s1.use_count()<<endl;
	shared_ptr<Box> s2 = s1;
	cout << s1.use_count() << endl;











}




