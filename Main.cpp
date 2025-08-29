#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Append some text to a file
    ofstream fout("demo.txt", ios::app);
    fout << "Hello from GitHub C++ file handling!" << endl;
    fout.close();

    // Now read it back
    ifstream fin("demo.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();

    return 0;
}
