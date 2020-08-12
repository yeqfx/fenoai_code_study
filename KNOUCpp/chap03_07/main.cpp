#include "ProcTab.h"

int main()
{
    const char* str = "a\tbcd\tabcdefghi\tabc";

    PrString(str);
    PrString(str, 4);

    return 0;
}