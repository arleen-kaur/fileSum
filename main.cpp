#include <fstream>
#include <iostream>
#include <cstdlib> //needed for exit function

using namespace std;
int fileSum(const string &filename);
// Place fileSum prototype (declaration) here
int main() {
   string filename;
   int sum = 0;
   
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << endl;
   
   sum = fileSum(filename);

   cout << "Sum: " << sum << endl;
   
   return 0;
}

int fileSum(const string &filename) {
   ifstream inFS;
   int sum = 0;
   int val = 0;
   inFS.open(filename);
   if (!inFS.is_open()) {
      cout << "Error opening " << filename << endl;
      exit(EXIT_FAILURE);
      
   } else {
      while (inFS >>  val) {
         sum = sum + val;
      }
   }
   inFS.close();
   return sum;
}
// Place fileSum implementation here