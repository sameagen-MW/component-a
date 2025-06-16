#include "cpp-package/include/greetings.h"
#include <iostream>

using namespace std;

namespace greetings {
    void greet(string name) {
        cout << "Hello " << name << "!";
    }
}