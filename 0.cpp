#include <iostream>
#include <string>
using namespace std;

int main() {
 string text= "0.";
 for (int x = 0; x < 20000; x++) text += "0";
 cout << text;
}

