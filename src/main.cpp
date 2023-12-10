#include <iostream>
#include <fstream>
using namespace std;

int main() {

      fstream myFile;
      myFile.open("learn.txt", ios::out);
      myFile << "Hello C++";
      myFile.close();
      return 0;
}