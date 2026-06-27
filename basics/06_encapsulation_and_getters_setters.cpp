// =============================================================
// ASSIGNMENT 6: Encapsulation
// =============================================================
//
// WHAT IS ENCAPSULATION?
//   Encapsulation means bundling data and the methods that
//   operate on that data inside one class, AND restricting
//   direct access to the data from outside.
//   It protects the internal state of an object.
//
// -------------------------------------------------------------
// TASK 1: Build a class "BankAccount" with encapsulation
// -------------------------------------------------------------
//   Private members:
//     - accountNumber (string)
//     - ownerName     (string)
//     - balance       (double)
//     - pin           (int)
//
//   Public methods:
//     - constructor: takes accountNumber, ownerName, initialBalance, pin
//     - getAccountNumber() — returns account number (read-only)
//     - getOwnerName()     — returns owner name     (read-only)
//     - getBalance()       — returns balance         (read-only)
//       NOTE: no setBalance() — balance should only change
//             through controlled deposit/withdraw methods
//
//     - deposit(double amount)
//         validate: amount must be > 0
//         if valid: add to balance, print success message
//         if not:   print error message
//
//     - withdraw(double amount, int enteredPin)
//         validate: enteredPin must match stored pin
//         validate: amount must be > 0
//         validate: balance must be sufficient
//         if all valid: subtract from balance, print success
//         if pin wrong: print "Incorrect PIN"
//         if insufficient: print "Insufficient funds"
//
//     - changePin(int oldPin, int newPin)
//         validate old pin, then update to newPin
//
// -------------------------------------------------------------
// TASK 2: In main()
// -------------------------------------------------------------
//   - Create a BankAccount
//   - Try depositing a negative amount — should fail gracefully
//   - Deposit a valid amount
//   - Try withdrawing with wrong pin — should fail
//   - Withdraw with correct pin
//   - Print balance at each step
//
// -------------------------------------------------------------
// TASK 3: Build a class "Student" with validation in setters
// -------------------------------------------------------------
//   Private members:
//     - name  (string)
//     - age   (int)      — must be between 5 and 100
//     - grade (double)   — must be between 0.0 and 10.0
//
//   Public methods:
//     - constructor with all three members
//     - getters for all three
//     - setAge(int a)       — validate range before setting
//     - setGrade(double g)  — validate range before setting
//     - display()           — prints all info
//
// -------------------------------------------------------------
// THINK ABOUT:
//   Why is direct access to "balance" dangerous?
//   What is the difference between a getter and a setter?
//   When should you NOT provide a setter for a member?
// -------------------------------------------------------------


#include<iostream>  
using namespace std;

class BankAccount{
private:
	string accountNumber;
	string ownername;
	double balance;
	int pin;
public:
	BankAccount(string accountNumber,string ownername,double balance,int pin):accountNumber(accountNumber),ownername(ownername),balance(balance),pin(pin){}
	string getAccountNumber(){return accountNumber;}
	string getOwnerName(){return ownername;}
	double getBalance(){return balance;}

	void deposit(double amount){
		if(amount>0){
			balance+=amount;
		}
	}

	void withdraw(double amount,int enteredPin){
		if(pin==enteredPin){
			if(amount>0){
				if(balance-amount>=0){
					balance-=amount;
				}
			}
		}else{
			cout<<"Wrong Pin"<<endl;
		}
	}

	void changePin(int oldPin,int newPin){
		if(pin==oldPin){
			pin=newPin;
		}else{
			cout<<"Wrong Pin"<<endl;
		}
	}

};


class Student{
private:
	string name;
	int age;
	double grade;
public:
	Student(string name,int age,double grade)
	:name(name),age(age),grade(grade){}

	string getName(){return name;}
	int getAge(){return age;}
	double getGrade(){return grade;}

	void setAge(int age){
		if(age>=0 && age<=150)
			this->age=age;
		else
			cout<<"Invalid Age"<<endl;
	}

	void setGrade(double grade){
		if(grade>=0 && grade<=10){
			this->grade=grade;
		}else{
			cout<<"Invalid grade"<<endl;
		}
		
	}

	void display(){
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Grade: "<<grade<<endl;
	}

};


int main(){


	BankAccount acc("ACC001", "Debayan", 1000.0, 1234);
	cout << acc.getBalance() << endl;
	acc.deposit(500);
	cout << acc.getBalance() << endl;
	acc.withdraw(200, 9999);   // wrong pin
	cout << acc.getBalance() << endl;
	acc.withdraw(200, 1234);   // correct pin
	cout << acc.getBalance() << endl;

	Student s1("Debayan",23,8.0);
	s1.display();



	s1.setAge(200);
	s1.setGrade(15.0);
	s1.setAge(25);
	s1.display();





}

