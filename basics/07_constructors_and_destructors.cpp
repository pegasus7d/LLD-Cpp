// =============================================================
// ASSIGNMENT 7: Constructors and Destructors
// =============================================================
//
// WHAT IS A CONSTRUCTOR?
//   A special method called automatically when an object is
//   created. It has the same name as the class, no return type.
//
// WHAT IS A DESTRUCTOR?
//   A special method called automatically when an object is
//   destroyed (goes out of scope or is deleted).
//   Name is ~ClassName(), no parameters, no return type.
//
// -------------------------------------------------------------
// TASK 1: Types of constructors — class "Matrix"
// -------------------------------------------------------------
//   Members:
//     - rows (int)
//     - cols (int)
//     - data (2D vector or dynamically allocated array)
//
//   Implement these constructors:
//
//   a) DEFAULT constructor
//      - sets rows=0, cols=0
//      - prints "Default constructor called"
//
//   b) PARAMETERISED constructor
//      - takes rows and cols
//      - allocates the 2D data structure, fills with 0
//      - prints "Parameterised constructor: <rows>x<cols>"
//
//   c) COPY constructor
//      - takes a const Matrix& other
//      - performs a DEEP copy (copies actual data, not pointer)
//      - prints "Copy constructor called"
//      - HINT: if you just copy a pointer you get two objects
//              sharing the same memory — disaster when one deletes
//
//   d) DESTRUCTOR
//      - frees allocated memory
//      - prints "Destructor called for <rows>x<cols> matrix"
//
//   Add a method fill(int val) — sets every element to val
//   Add a method display() — prints the matrix
//
// -------------------------------------------------------------
// TASK 2: Constructor initialiser list
// -------------------------------------------------------------
//   Create a class "Circle" with:
//     - const double PI  (must be initialised in initialiser list)
//     - double radius
//
//   Constructor MUST use initialiser list:
//     Circle(double r) : PI(3.14159), radius(r) {}
//
//   Why? const members CANNOT be assigned in the body,
//   they MUST be initialised in the initialiser list.
//
// -------------------------------------------------------------
// TASK 3: Observe construction and destruction order
// -------------------------------------------------------------
//   Create a class "Logger" that just prints in its constructor
//   and destructor (with a name passed to the constructor).
//
//   In main(), create:
//     Logger a("A");
//     {
//         Logger b("B");
//         Logger c("C");
//     }   // <-- what order do B and C get destroyed here?
//     Logger d("D");
//
//   Predict the output BEFORE running, then verify.
//   RULE: Objects are destroyed in REVERSE order of creation.
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the Rule of Three? (if you define destructor,
//   copy constructor, or copy assignment — define all three)
//   What is the Rule of Five in modern C++?
//   What is a shallow copy vs a deep copy?
// -------------------------------------------------------------



#include <iostream>
#include <vector>
using namespace std;



class Matrix{
private:
	int rows;
	int cols;
	vector<vector<int>>data;
public:

	Matrix() : rows(0), cols(0) {}
	Matrix(Matrix &other):rows(other.rows),cols(other.cols),data(other.data){
		cout<<"Copy constructor called"<<endl;
	}
	Matrix(int rows,int cols):rows(rows),cols(cols){
		data.resize(rows,vector<int>(cols,0));
	}
	~Matrix() {
    	cout << "Destructor called for " << rows << "x" << cols << " matrix" << endl;
	}



	void fill(int val){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				data[i][j]=val;
			}
		}
	}

	void display(){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cout<<data[i][j]<<" ";
			}
			cout<<endl;
		}

		cout<<"_________________________"<<endl;
	}




};


class Circle{
private:
	const double PI;
	const double radius;
public:
	Circle(double radius):PI(3.14159),radius(radius){}
	double area(){return PI*radius*radius;}



};


class Logger{

private:
	string name;

public:
	Logger(string name):name(name){
		cout<<name<<" created"<<endl;
	}
	~Logger(){
		cout<<name<<" destroyed"<<endl;
	}

};


int main(){
	Matrix m(3,3);
	m.fill(6);
	m.display();

	Matrix m2=m;
	m2.display();

	Circle c1(6);
	cout<<c1.area()<<endl;

	Logger a("A");
	{
	    Logger b("B");
	    Logger c("C");
	}
	Logger d("D");




}



