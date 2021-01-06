#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello Michael! What you want to do today?\n";

    string name = "Mike ";
    string last = "Wencel";

    //Concat
    string concat = name + last;

    //Parsing

    int number = 45;
    string numStr = to_string(number);

    cout << concat << endl;
    cout << numStr << endl;


}

