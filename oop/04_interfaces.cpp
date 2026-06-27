// =============================================================
// MINI ASSIGNMENT: Interfaces
// =============================================================
//
// WHAT IS AN INTERFACE IN C++?
//   A class with ONLY pure virtual functions — no data members,
//   no implementation. It defines a CONTRACT that any class
//   implementing it must follow.
//
// WHY USE INTERFACES?
//   - Forces classes to implement certain behaviour
//   - Allows different classes to be used interchangeably
//   - Supports multiple inheritance safely
//
// -------------------------------------------------------------
// TASK 1: IShape interface with multiple implementations
// -------------------------------------------------------------
//
// Step 1: Define an interface "IShape"
//   - pure virtual: double area()
//   - pure virtual: double perimeter()
//   - pure virtual: void draw()
//   - virtual destructor
//
// Step 2: Implement three classes:
//   - Circle     (member: radius)
//                area()      = 3.14159 * r * r
//                perimeter() = 2 * 3.14159 * r
//                draw()      = prints "Drawing Circle"
//
//   - Rectangle  (members: width, height)
//                area()      = width * height
//                perimeter() = 2 * (width + height)
//                draw()      = prints "Drawing Rectangle"
//
//   - Triangle   (members: a, b, c sides, base, height)
//                area()      = 0.5 * base * height
//                perimeter() = a + b + c
//                draw()      = prints "Drawing Triangle"
//
// Step 3: In main()
//   - Create a vector<IShape*> with all three shapes
//   - Loop and call draw(), area(), perimeter() on each
//   - Clean up memory
//
// -------------------------------------------------------------
// TASK 2: Multiple interfaces on one class
// -------------------------------------------------------------
//
// Define two interfaces:
//   IPlayable   — pure virtual: play()
//   IDownloadable — pure virtual: download()
//
// Create a class "Song" that implements BOTH:
//   - play()     — prints "Playing the song"
//   - download() — prints "Downloading the song"
//
// In main():
//   Song s;
//   IPlayable* p = &s;
//   p->play();
//   IDownloadable* d = &s;
//   d->download();
//
// This shows a single class satisfying multiple contracts
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the difference between an interface and an abstract class?
//   Can an interface have data members? Should it?
//   Why is virtual destructor important in interfaces?
// -------------------------------------------------------------

#include <iostream>
#include <cmath>
#include<vector>


using namespace std;

class IShape{
public:
	virtual double area()=0;
	virtual double perimeter()=0;
	virtual void draw()=0;
	virtual ~IShape(){}

};


class Circle:public IShape{

private:
	double radius;
public:
	Circle(double radius):radius(radius){}
	double area() override { return 3.14159 * radius * radius; }
    double perimeter() override { return 2 * 3.14159 * radius; }
    void draw() override { cout << "Drawing Circle" << endl; }

};


class Rectangle:public IShape{
private:
	double width;
	double height;

public:
	Rectangle(double width,double height):width(width),height(height){}
	double area()override{return width*height;}
	double perimeter()override{return 2*(width+height);}
	void draw()override{ cout << "Drawing Rectangle" << endl; }
};

class Triangle:public IShape{
private:
	double a;
	double b;
	double c;

public:
	Triangle(double a,double b,double c):a(a),b(b),c(c){}
	double area()override{
		double s = (a + b + c) / 2;
		return sqrt(s * (s-a) * (s-b) * (s-c));
	}
	double perimeter()override{return a+b+c;}
	void draw()override{ cout << "Drawing Triangle" << endl; }
};


class IPlayable {
public:
    virtual void play() = 0;
    virtual ~IPlayable() {}
};

class IDownloadable {
public:
    virtual void download() = 0;
    virtual ~IDownloadable() {}
};


class Song : public IPlayable, public IDownloadable {
public:
    void play() override { cout << "Playing the song" << endl; }
    void download() override { cout << "Downloading the song" << endl; }
};


int main(){


	vector<IShape*>shapes;
	shapes.push_back(new Circle(5));
	shapes.push_back(new Rectangle(4,6));
	shapes.push_back(new Triangle(3,4,5));


	for(IShape* s:shapes){
		s->draw();
		cout << "Area: " << s->area() << endl;
        cout << "Perimeter: " << s->perimeter() << endl;
	}
	for (IShape* s : shapes)
        delete s;

    Song s;
	IPlayable* p = &s;
	p->play();
	IDownloadable* d = &s;
	d->download();
	   


}






