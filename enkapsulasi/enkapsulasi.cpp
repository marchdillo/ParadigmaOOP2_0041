#include <iostream>
using namespace std;

class orang
{
public:
    int umur;

    orang(int pUmur) : umur(pUmur)
    {
        cout << "orang di buat dengan umur " << umur << "\n"
             << endl;
    }
};

class pekerja : virtual public orang
{
public:
    pekerja(int pUmur) : orang(pUmur)
    {
        cout << "pekerja di buat\n"
             << endl;
    }
};