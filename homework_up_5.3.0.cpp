// homework_up_5.3.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Functor_three
{
public:

    void operator() (int a)
    {
        if (a % 3 == 0)
        {
            sum_three += a;
            count_three++;
        }
    }
    int get_sum()
    {
        return sum_three;
    }

    int get_count()
    {
        return count_three;
    }

private:
    int sum_three = 0;
    int count_three = 0;
};

int main()
{
    setlocale(LC_ALL, "ru");
    int size;
    std::cout << "Введите количество чисел, с которыми Вы планируете работать\n";
    std::cin >> size;
    
    int* arr = new int[size];

    std::cout << "Введите числа, с которыми будете работать" << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << " " << std::endl; 
    Functor_three f_r;
    for (int i = 0; i < size; i++)
    {
        f_r(arr[i]);
    }

    std::cout << "Количество чисел, делящихся на три равно " << f_r.get_count() << std::endl;

    std::cout << "Сумма чисел, делящихся на три, равна " << f_r.get_sum() << std::endl;

    return 0;

}

