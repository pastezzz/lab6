#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "mathfuncs.h"
#include "randfuncs.h"

using namespace std;

int main(int argc, char *argv[]) {
    const string EXIT = "quit";
    string command;

    srand(time(0));

    do {
        cout << "calc: ";
        cin >> command;

        if ("help" == command) {
            cout << "Swiss Calculator Help" << endl;
            cout << "Commands:" << endl;
            cout << "  subtract a b   subtract b from a" << endl;
            cout << "  multiply a b   multiply a and b" << endl;
            cout << "  divide a b     divide a by b" << endl;
            cout << "  coin           flip a coin" << endl;
            cout << "  d6             roll a six-sided die" << endl;
            cout << "  d20            roll a twenty-sided die" << endl;
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
        else if ("coin" == command) {
            int result = flipCoin();

            if (result == 0) {
                cout << "heads" << endl;
            }
            else {
                cout << "tails" << endl;
            }
        }
        else if ("d6" == command) {
            cout << rollSixSidedDie() << endl;
        }
        else if ("d20" == command) {
            cout << rollTwentySidedDie() << endl;
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