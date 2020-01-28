

#include <iostream>

using std::cout;
using std::endl;


int main()
{
    // always print this message
    cout << endl << "This message is always shown." << endl << endl;

    // only print the following if the user option was set
    #ifdef USER_OPTION
        cout << "This was compiled with the user option." << endl << endl;
    #endif


    return 0;
}