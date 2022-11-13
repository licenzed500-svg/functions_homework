//Вариант 6 задача 4

#include <iostream>

void arr_out(short* arr, short arr_size)
{
    for (short i = 0; i < arr_size; i++)
    {
        std::cout << arr[i] << "\n";
    }
}

void Swap(short* arr)
{
    std::swap(arr[0], arr[1]);
    std::swap(arr[2], arr[3]);
    std::swap(arr[1], arr[2]);
}

int main()
{
    const short arr_size = 4;
    short arr[arr_size]{ 1,2,3,4 };
    Swap(arr);
    arr_out(arr, arr_size);
}

