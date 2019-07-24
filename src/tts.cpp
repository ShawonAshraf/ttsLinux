/*******************************************************

    A simple text to speech program
    for computers running on linux.
    This program uses espeak to convert
    text to speech.

    refer to the readme for more information.

********************************************************/


#include <iostream>
#include <cstdlib>
#include <string>
#include <exception>

int main()
{
    std::string message = ""; // this will be taken as input and will be
                         // converted to speech
    std::string command = "echo "; // the command that will be passed to cmd
                              // your message will be appended with it

    std::cout << "Enter your text to convert to speech : " << std::endl;
    std::getline(std::cin, message);

    try {
        command = command + message + "|espeak";

        // one important thing here is, we can't pass a string type
        // to system() as it is a C function and string is a C++ type
        // so we have to convert the command string to C type const char*
        // using string.c_str()

        system(command.c_str());

    } catch(exception e) {
        std::cout << "Error!" << std::endl;
        return -1;
    }

    return 0;
}
