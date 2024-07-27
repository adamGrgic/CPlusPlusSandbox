
// C++ 20 uses import statements but currently experimental we'll say 
using namespace std;
#include <iostream>;



// Sandbox environment for understanding concepts in "A Tour of C++" By Bjarne Stroustrup


int main() {
	cout << "Welcome to A Tour of C++ Tutorial" << endl;

	// Chapter 1 
	// The Basics


	// Functions
	//
	// Example signature
	// int getNumber(int num)
	// return type + strongly typed params, just like in c#
	// 
	// Types, Variables, and Arithmetic
	// Declaration - statement that introduces an entity into the program and specifies its type
	//	Type - defines a set of possible values and a set of operations (for an object)
	//	Object - Some memory that holds a value of some type
	//	Value - set of bit interpreted according to a type 
	//	Variable - named object 
	// 
	// Example Types
	//	bool
	//	char
	//	int
	//	double
	//	unsigned
	// 
	// C compatability allows for implicitly narrowing conversions
	// ex: double -> decimal
	// to avoid this (since it can cause translation issues) use {} when initializing a variable
	// 
	// 
	// Scope & Lifetime
	// Local Scope - Name declared in a scope {}
	// Class Scope - Often called a member name. Scope extends from the opening {}
	// Namespace Scope - Scope extends from point of declaration to the end of its namespaces. 
	//						Defined anywhere outside of a function or lambda
	// 
	// 
	// Constants - 2 ways to declare
	// (Objects with an unchangeable state)
	// 
	// const: a contract that this value will not be changed. Useful in pointers where you don't want 
	// instances of your address value changed. May be evaluated at runtime. 
	// 
	// constexpr: evaluated at compile time.  
	//				allow placement of data in read-only memory 
	// 
	// (TODO: revisit)
	// 
	// Pointers Arrays and References
	// 
	// 
	// 
	//


	return 0;
}