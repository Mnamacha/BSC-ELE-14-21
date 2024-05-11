#pragma once
#include "person.h" 
using namespace std;

class Person {
public:
Person() : mWeight(0.0f), mAge(0) {} // Default constructor
Person(float newWeight) : mWeight(newWeight), mAge(0) {} // Constructor with weight parameter
~Person() {} // Destructor

```// Overload the add operator
float operator + (const Person& otherPerson) {
	return mWeight + otherPerson.mWeight;
}
private:
float mWeight;
string mFirstName;
int mAge;
};
