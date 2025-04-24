
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(string firstName, float newWeight);
    ~Person();

    // Overload the add operator
    float operator + (const Person& otherPerson);

    // Overload relational operators
    bool operator == (const Person& otherPerson);
    bool operator != (const Person& otherPerson);

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
