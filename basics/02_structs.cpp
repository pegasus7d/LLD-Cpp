// =============================================================
// ASSIGNMENT 2: Structs
// =============================================================
//
// WHAT IS A STRUCT?
//   A struct is almost identical to a class in C++.
//   The only real difference: members are PUBLIC by default
//   in a struct, and PRIVATE by default in a class.
//
//   Structs are typically used for plain data containers —
//   things that just group related values together with little
//   or no behaviour.
//
// -------------------------------------------------------------
// TASK 1: Define a struct called "Point"
// -------------------------------------------------------------
//   Members:
//     - x (double)
//     - y (double)
//
//   Add a constructor that takes x and y.
//
//   Add a method: distanceTo(Point other)
//     - returns the Euclidean distance between this point
//       and the other point
//     - formula: sqrt((x2-x1)^2 + (y2-y1)^2)
//     - include <cmath> for sqrt and pow
//
// -------------------------------------------------------------
// TASK 2: Define a struct called "Rectangle"
// -------------------------------------------------------------
//   Members:
//     - topLeft     (Point)
//     - bottomRight (Point)
//
//   Add methods:
//     - width()  — returns the width  (difference in x)
//     - height() — returns the height (difference in y)
//     - area()   — returns width * height
//     - perimeter() — returns 2 * (width + height)
//
// -------------------------------------------------------------
// TASK 3: In main()
// -------------------------------------------------------------
//   - Create two Point objects and print the distance between them
//   - Create a Rectangle using those two points
//   - Print area and perimeter of the rectangle
//
// -------------------------------------------------------------
// THINK ABOUT:
//   When would you choose a struct over a class?
//   What is the difference between struct and class in C++?
// -------------------------------------------------------------


#include<iostream>
#include<cmath>
using namespace std;


struct Point{
	double x;
	double y;

	Point(double x,double y):x(x),y(y){};

	double distanceTo(Point other){
		double deltax=x-other.x;
		double deltay=y-other.y;
		return sqrt(deltax*deltax+deltay*deltay);

	}


};



struct Rectangle{
	Point topLeft;
	Point bottomRight;

	Rectangle(Point topLeft, Point bottomRight)
	:topLeft(topLeft),bottomRight(bottomRight){};


	double width(){
		return abs(bottomRight.x-topLeft.x);

	}

	double height(){
		return abs(bottomRight.y-topLeft.y);
	}

	double area(){
		return width()*height();
	}

	double perimeter(){
		return 2*(width()+height());

	}

	void display(){
	    cout << "Width: " << width() << endl;
	    cout << "Height: " << height() << endl;
	    cout << "Area: " << area() << endl;
	    cout << "Perimeter: " << perimeter() << endl;
	}
};



int main(){


	Point p1(1,4);
	Point p2(5,1);

	cout<<"Distance:"<<p1.distanceTo(p2)<<endl;


	Rectangle r1(p1,p2);
	r1.display();



}












