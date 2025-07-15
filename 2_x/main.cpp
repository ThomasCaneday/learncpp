#include "io.h"

int main() {
    int first{ readNumber() };
    int second{ readNumber() };
    writeNumber(first + second);
    return 0;
}