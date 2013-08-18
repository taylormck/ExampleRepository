/**
 * This is a simple program that defines a few basic functions.
 * These functions aren't particularly exciting, they're just placeholders
 * to show of some of the technology in this repository.
 *
 * @author Taylor McKinney, taylorsmck@gmail.com
 */

namespace example {
    int plus (int i, int j) {
        return i + j;
    }

    int minus (int i, int j) {
        return i - j;
    }

    int multiply (int i, int j) {
        return i * j;
    }

    int divide (int i, int j) {
        return i / j;
    }

    int pow (int i, int j) {
        // Will be refactored later
        int v = 1;
        while (j-- != 0)
            v *= i;
        return v;
    }
}
