
#include "Copycat.h"

int main()
{
    Copycat cc1("ȫ�浿");
    Copycat cc2(cc1);

    cc1.whoRU();
    cc2.whoRU();
    return 0;
}