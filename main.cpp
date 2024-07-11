#include <iostream>
#include <cstdlib> // фаил для формирования рандомного числа
#include <ctime>   // определяется максимальный предел рандомного числа

using namespace std;
int main()
{
    int numbers{};
    int Choise{};
    int attempts{};

    srand(static_cast<unsigned int>(time(0))); // псевдо генератор случайных чисел с типом unsigned int
    int randomNumber = rand();                 // генерация случайных чисел
    int die = (randomNumber % 100) + 1;        // получаем число между 1 и 100

    cout << "Select distify levels" << endl;
    cout << "1: Easy" << endl;
    cout << "2: Normal" << endl;
    cout << "3: Hard" << endl;

    cin >> Choise;

    if (Choise == 1)
    {
        attempts = 50;
    }
    if (Choise == 2)
    {
        attempts = 25;
    }
    if (Choise == 3)
    {
        attempts = 5;
    }
    else
    {
        attempts = 50;
    }

    while (true)
    {
        cout << "enter the number: " << endl;
        cin >> numbers;

        if (numbers > die and attempts > 0)
        {
            cout << "a lot of " << endl;
            attempts -= 1;
            cout << "attempts left: " << attempts << endl;
        }

        if (numbers < die and attempts > 0)
        {
            cout << "few " << endl;
            attempts -= 1;
            cout << "attempts left: " << attempts << endl;
        }

        if (attempts <= 0)
        {
            cout << "you've run out of attempts" << endl;
            cout << "You lose " << endl;
            break;
        }

        if (numbers == die and attempts > 0)
        {
            cout << "You winner " << endl;
            cout << "attempts left: " << attempts << endl;
            break;
        }
    }
    return 0;
}