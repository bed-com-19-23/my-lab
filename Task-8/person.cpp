#include "Person.h"

// Default constructor
Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

// Parameterized constructor
Person::Person(string firstName, float newWeight) {
    mFirstName = firstName;
    mWeight = newWeight;
    mAge = 0; 
}

// Destructor
Person::~Person() {
    // Nothing specific needed here
}

// Add operator overload
float Person::operator + (const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

// Equality operator
bool Person::operator == (const Person& otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

// Inequality operator
bool Person::operator != (const Person& otherPerson) {
    return this->mFirstName != otherPerson.mFirstName;
}
