// Example program
#include <iostream>
#include <string>

int array[5][4];
int x, y;

main()
{
for (x = 0; x < 5; x++)
    for (y = 0; y < 4; y++){
        array[x][y] = rand();
        std:: cout << "array[" << x << "][" << y << "] = " << array[x][y] << "\n";
    }
}
