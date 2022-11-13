//Вариант 6 задача 12

#include <iostream>


void out_results(bool* results, const short arr_size, short counter = 0)
{
    
    for (short i = 0; i < arr_size; i++)
    {
        if (results[i] == true)
        {
            counter++;
        }
    }
    std::cout << "count of power of 5:" << counter << "\n";
}

bool IsPower5(short number, bool positive_outcome = true)
{
    short some_variable;
    while (number != 1)
    {
        some_variable = number % 5;
        if (some_variable != 0) 
        {
            return positive_outcome = false;
            break;
        }
        number /= 5;
    }
    return positive_outcome;
}

void set_all_null(unsigned short* task_arr, const short arr_size)
{
    for (short i = 0; i < arr_size; i++)
    {
        task_arr[i] = 0;
    }
}

void arr_out(unsigned short* task_arr, const short arr_size)
{
    for (short i = 0; i < arr_size; i++)
    {
        std::cout << task_arr[i] << "\n";
    }
}

void get_elements(unsigned short* task_arr, const short arr_size)
{
    for (short i = 0; i < arr_size; i++)
    {
            std::cout << "enter element #" << i << ":";
            std::cin >> task_arr[i];
            std::cout << "\n";
            system("cls");
    }
}

void start_program(bool* results, unsigned short* task_arr, const short arr_size)
{
    set_all_null(task_arr, arr_size);
    get_elements(task_arr, arr_size);
    arr_out(task_arr, arr_size);
    for (short i = 0; i < arr_size; i++)
    {
        results[i] = IsPower5(task_arr[i]);
    }
    out_results(results, arr_size);
}


int main()
{
    const short arr_size = 10;
    unsigned short task_arr[arr_size];
    bool results[arr_size];
    start_program(results, task_arr, arr_size);
}
