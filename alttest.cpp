#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]) // --> py sys.args
{
  int total = 0;
  for(int i=1; i<argc; i++)
  {
    const std::string snum = argv[i];
    total += std::stoi(snum);
  }

  cout << setprecision(2) << fixed << 1.2;

  return 0;
}