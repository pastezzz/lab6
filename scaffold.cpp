#include <iostream>
#include <cstdlib>
#include <string>
#include "mathfuncs.h"

using namespace std;

int main(int argc, char *argv[]) {
    const string EXIT = "quit";
    string command;

    do {
        cout << "calc: ";
        cin >> command;

        if ("help" == command) {
            cout << "Swiss Calculator Help" << endl;
            cout << "Commands:" << endl;
            cout << "  subtract a b   subtract b from a" << endl;
            cout << "  multiply a b   multiply a and b" << endl;
            cout << "  divide a b     divide a by b" << endl;
            cout << "  quit           exit the calculator" << endl;
        }
        else if ("subtract" == command) {
            double a, b;
            cin >> a >> b;
            cout << subtract(a, b) << endl;
        }
        else if ("multiply" == command) {
            double a, b;
            cin >> a >> b;
            cout << multiply(a, b) << endl;
        }
        else if ("divide" == command) {
            double a, b;
            cin >> a >> b;

            try {
                cout << divide(a, b) << endl;
            }
            catch (const invalid_argument &e) {
                cout << "error: " << e.what() << endl;
            }
        }
        else if (EXIT == command) {
            cout << "goodbye" << endl;
        }
        else {
            cout << "unknown command" << endl;
        }

    } while (EXIT != command);

    return 0;
}