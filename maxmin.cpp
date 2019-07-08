#include <iostream>
#include <string>
#include <sstream>

int listaMaxim(int param[])
{
    int maxim = param[0];
    for(unsigned int i=0; i<3; i++)
    {
        if(param[i] > maxim) { maxim = param[i]; }
    }
    return maxim;
}

int listaMinim(int param[])
{
    int minim = param[0];
    for(unsigned int i=0; i<3; i++)
    {
        if(param[i] < minim) { minim = param[i]; }
    }
    return minim;
}

int main()
{
    std::string input, strNumar1, strNumar2, strNumar3, numere3[3], subs;
    int primulNumar, alDoileaNumar, alTreileaNumar, lista[3], count=0;

    getline(std::cin, input);
    std::istringstream iss (input);

    do
    {
        iss >> subs;
        numere3[count] = subs;
        count++;
    } while (iss);
    
    strNumar1 = numere3[0];
    strNumar2 = numere3[1];
    strNumar3 = numere3[2];

    primulNumar = std::stoi(strNumar1);
    alDoileaNumar = std::stoi(strNumar2);
    alTreileaNumar = std::stoi(strNumar3);

    lista[0] = primulNumar;
    lista[1] = alDoileaNumar;
    lista[2] = alTreileaNumar;

    std::cout <<listaMaxim(lista) - listaMinim(lista)<< std::endl;

    return 0;

}
