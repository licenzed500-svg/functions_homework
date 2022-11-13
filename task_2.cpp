//Вариант 6 задача 7

#include <iostream>

void arr_out(float* task_arr_one, float* task_arr_two, const short arr_size)
{
    for (short i = 0; i < arr_size; i++)
    {
        std::cout << task_arr_one[i] << "\n";
    }
    std::cout << "\n";
    for (short i = 0; i < arr_size; i++)
    {
        std::cout << task_arr_two[i] << "\n";
    }
}

void ShiftLeft3(float* task_arr_one, float* task_arr_two, const short arr_size)
{
   
    for (short i = 0; i < arr_size-1; i++)
    {
        std::swap(task_arr_one[i], task_arr_one[i + 1]);
        std::swap(task_arr_two[i], task_arr_two[i + 1]);
    }
    
}

int main()
{
    const short arr_size = 3;
    float task_arr_one[arr_size] = {1,2,3};
    float task_arr_two[arr_size] = {4,5,6};
    ShiftLeft3(task_arr_one, task_arr_two, arr_size);
    arr_out(task_arr_one, task_arr_two, arr_size);
}

