// element equal to subscript
#include <iostream>
#include <string>

int array[10];
int x, y;

int main()
{
    for ( x = 0 ; x < 10; x++){
        array[x] = x;
        std:: cout << "This is subscript number: " << x << " with element = " << array[x] << "\n";
    }
}
