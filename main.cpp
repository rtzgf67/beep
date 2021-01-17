#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {

  string data;
  int length;
  string tok;
  string str;

  ifstream inStream;
  inStream.open("src.beep");
  inStream >> data;

  length = data.length();

  for (int i; i < length; i++) {
    tok += data[i];

    if (tok == "bout") {
      tok = "";
    }
    else if (tok == "::") {
      tok = "";
    }
    else {
      str = "";
      str += tok;
    }
  }
  cout << str << endl;
}