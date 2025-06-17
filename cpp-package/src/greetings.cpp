#include "cpp-package/include/greetings.h"
#include <iostream>

using namespace std;

namespace greetings {
    string greet(string name) {
        return "Hello " + name + "!";
    }
}