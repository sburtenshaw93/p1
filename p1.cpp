#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    cout << "Program 1 by Sarah Burtenshaw" << endl;
    for (int i = 0; i < argc; ++i) {
        cout << "Argument #" << i << ": " << argv[i] << endl; 
    }
    cout << "Number of arguments printed: " << argc << endl;
    return 0;
}