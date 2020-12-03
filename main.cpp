#include <iostream>
#include <zooanimal.h>

using namespace std;

int main()
{
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName() << endl;

    bozo.Destroy ();

    return 0;
}
