#include <iostream>

int main()
{
    char Name[13] = { 0, };

    Name[0] = 'S';
    Name[1] = 'o';
    Name[2] = 'n';
    Name[3] = 'g';
    Name[4] = ' ';
    Name[5] = 'W';
    Name[6] = 'o';
    Name[7] = 'o';
    Name[8] = ' ';
    Name[9] = 'J';
    Name[10] = 'i';
    Name[11] = 'n';
    Name[12] = '\0';

    for (int i = 0; i < 13; i++)
    {
        std::cout << Name[i];
    }
    std::cout << std::endl;
    return 0;
}