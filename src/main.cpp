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

    for (size_t i = 0; i < 200; ++i)
    {
        foo(i);
    }
    

    return 0;
}