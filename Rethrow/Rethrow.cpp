#include "pch.h"

using namespace System;

void func(int a)
{
    try
    {
        if (a <= 0)
            throw gcnew ArgumentException("Aaaargh");
    }
    catch (ArgumentException^ ex)
    {
        Console::WriteLine("Exception caught in func()");
        throw; // rethrow exception
    }
}

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Throw Test");

    try
    {
        int n = 0;
        Console::WriteLine("Calling with n=0");
        func(n);
    }
    catch (ArgumentException^ ex)
    {
        Console::WriteLine("Exception caught in main()");
    }
    Console::WriteLine("All done");
    return 0;
}
