#include <iostream>
#include <cstring>

void New() 
{
    int *p = new int;
    *p = 10;

    std::cout << "Single Integer: " << *p << std::endl;

    delete p;
    p = nullptr; // Prevent dangling pointer
}

void NewArrays() 
{
    int *p = new int[5]; 

    for (int i = 0; i < 5; i++) 
    {
        p[i] = i;
    }

    std::cout << "Array: ";
    for (int i = 0; i < 5; i++) 
    {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;

    delete[] p;
    p = nullptr;
}

void strings() 
{
    char *p = new char[4];

    strcpy(p, "C++");

    std::cout << "String: " << p << std::endl;

    delete[] p;
    p = nullptr;
}

void TwoD() 
{
    int **pData = new int *[2];

    for (int i = 0; i < 2; i++) 
    {
        pData[i] = new int[3];
    }

    pData[0][1] = 2;

    std::cout << "TwoD " << pData[0][1] << std::endl;

    for (int i = 0; i < 2; i++) 
    {
        delete[] pData[i];
    }

    delete[] pData; 
    pData = nullptr;
}

int main() 
{
    New();
    NewArrays();
    strings();
    TwoD();

    return 0;
}

