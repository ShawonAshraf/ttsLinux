/*******************************************************

    A simple text to speech program
    for computers running on linux.
    This program uses espeak to convert
    text to speech.

    You can install espeak in ubuntu by typing the
    following command in the terminal

    sudo apt-get install espeak

    However this has been tested on Ubuntu 14.04.
    You can check on other distros as well.
    Feel free to use the code and make any improvements
    you want. :D

********************************************************/


#include <iostream>
#include <cstdlib>
#include <string>
#include <exception>

using namespace std;

int main()
{
    string message = ""; // this will be taken as input and will be
                         // converted to speech
    string command = "echo "; // the command that will be passed to cmd
                              // your message will be appended with it

    cout << "Enter your text to convert to speech : " << endl;
    getline(cin, message);


    // using a try cacth block
    // for worst situations

    try {
        command = command + message + "|espeak";

        // one important thing here is, we can't pass a string type
        // to system() as it is a C function and string is a C++ type
        // so we have to convert the command string to C type const char*
        // using string.c_str()

        system(command.c_str());

    } catch(exception e) {
        cout << "Error!" << endl;
    }

    return 0;
}
