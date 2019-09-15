/* Program that executes the java small projects and takes the 1 arguments and removes the ".\" and the extension.
*/
#include <iostream>

using std::string;

void runCommand(string);

int main(int argc, char const *argv[])
{
    if (argv[1])
    {
        runCommand(argv[1]);
    } else {
        std::cout << "Error::No file entered\nExample: jrun NameOfTheFile";
    }
    return 0;
}

void runCommand(string file) {
    string finalCommand = "java ";
    int countPuncte = 0;
    for(char i: file) {
        if (countPuncte == 2) {
            break;
        } else if (i != '.' && i != '\\') {
            finalCommand += i;
        }else if (i == '.') {
            countPuncte++;
        }
    }
    system(finalCommand.c_str());
}