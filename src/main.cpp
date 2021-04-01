#include <string>
#include <iostream>

void foo(int x)
{
    int buf[10];
    if (x == 1000)
        buf[x] = 0; // <- ERROR
}

int main (){
    std::string text = "ahoj";
    std::cout << text << std::endl;


    foo(4);

    return 0;
}