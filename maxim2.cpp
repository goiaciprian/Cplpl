#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


int main()
{
    int count = 0, intList[2], rezultat;
    std::ifstream infile;
    std::string fisier("maxim.in");
    std::string sLine;
    std::string lista[2];
    std::ofstream outFile;

    infile.open(fisier);
    getline(infile, sLine);
    std::istringstream iss(sLine);

    do
    {
        std::string subs;
        iss >> subs;
        lista[count] = subs;
        count++;
    } while (iss);
    
    for(int i=0;i<2;i++)
    {
        int numar = std::stoi(lista[i]);
        intList[i] = numar;
    }

    if(intList[0] > intList[1])
    {
        rezultat = intList[0];
    }
    else
    {
        rezultat = intList[1];
    }

    outFile.open("maxim.out");
    outFile << rezultat << std::endl;
    outFile.close();

    return 0;
}