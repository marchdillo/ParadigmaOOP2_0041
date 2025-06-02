#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan() final
    {
        cout << "Hello saya Function dari base class";
    }
};

class derivedClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "Hello saya Function dari derived Class";
    }
};

int main()
{
    derivedClass a;

    a.perkenalan();

    return 0;
};