//This is the last update in Alpha version! Beta will be closed to the public

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {

  string data;
  int length;
  string tok;
  string stri;

  ifstream inStream;
  inStream.open("src.beep");
  inStream >> data;

  length = data.length();

  for (int i; i < length; i++) {
    tok += data[i];

    if (tok == "bout") {
      tok = "";
    }
    else if (tok == "-->") {
      tok = "";
    }
    else {
      stri = "";
      stri += tok;
    }
  }
  cout << stri << endl;
}