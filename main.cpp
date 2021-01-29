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
  int dtree;
  int idtree;
  int sidtree;

  ifstream inStream;
  inStream.open("src.beep");
  inStream >> data;

  length = data.length();

  for (int i; i < length; i++) {
    tok += data[i];

    // Desizion Tree strats here:

    if (tok == "bout") {
      tok = "";
      dtree = 1;
    }
    else if (tok == "riruraru") {
      tok = "";
      while (true) {
        cout << "riruraru" << endl;
      }
    }
    else if (dtree == 1) {
      if (tok == "=>") {
        tok = "";
        idtree = 1;
      }
      else if (idtree == 1) {
        stri = "";
        stri += tok;
      }
    }

  }
  cout << stri << endl;
}