// FinalFunctions.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


//ввод массива в консоль
template <typename T>

void print_arr(T arr[], const int length) {
    std::cout << '[';
    for (int i = 0; i < length; i++)
        std::cout << arr[i] << ", ";
    std::cout << "\b\b]\n";
}

//Заполнение массива случайными числами

template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % (right - left) + left;
    }
}

//Задача 1. Создайте ф-цию, которая принемает любое число и выводит его тип данных


void type_of(int num) { std::wcout << "INT\n"; }
void type_of(double num) { std::wcout << "DOUBLE\n"; }
void type_of(char num) { std::wcout << "CHAR\n"; }
void type_of(float num) { std::wcout << "FLOAT\n"; }

//Задача2. Рекурсиваная ф-ция, вычисляющую сумму двух чисел от n до m

int sum_AB(int a, int b) {
    if (a > b) std::swap(a, b);
    if (a == b) return a;
    return sum_AB(a, b - 1) + b;
}

//Задача 3. Массив случайных чисел от -20 до 20. Сортировку середины

template <typename T>
void middle_sort(T arr[], const int length) {
    int first_index = 0;
    int last_index = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0) {
            int first_index = i;
            break;
        }
        }
    for (int i = length - 1; i >= 0; i--) {
        if (arr[i] < 0) {
            int last_index = i;
            break;
        }
    }
    //Быстрая сортировка
    //if (first_index != last_index)
    //std::sort(arr + first_index + 1, arr + last_index);

    // Пузырьковая сортировка
    for (int i = last_index - 1; i >= 0; i--)
        for (int j = first_index + 1; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
}

// Задача 4. Сдвиг массива. Сдвигает массив вправо на переданное число

template <typename T>
void move_arr(T arr[], const int length, int num) {

    for (int k = 0; k < num; k++) {
        for (int i = length - 1; i > 0; i--)
            std::swap(arr[i - 1], arr[i]);


    }
}
    
    



int main()
{
    setlocale(LC_ALL, "rus");
    int n, m;

    /*std::cout << "Задача 1.\n";

    std::cout << "7 -";    type_of(7);
    std::cout << "7.5 -";    type_of(7.5);
    std::cout << "\'A\' -";    type_of('A');
    std::cout << "7.5F -";    type_of(7.5F);
    std::wcout << std::endl;

    std::cout << "Введите два числа: ";
    std::cin >> n >> m;
    std::cout << "Сумма чисел от " << '\n' <<
        "до" << sum_AB(n, m) << "\n\n";

    std::cout << "Задача3.\nИзначальниый массив:\n";
    const int SIZE3 = 10;
    int arr3[SIZE3];
    fill_arr(arr3, SIZE3, -20, 20);
    print_arr(arr3, SIZE3);

    std::cout << "Итоговый массив: " << '\n';
    middle_sort(arr3, SIZE3);
    std::cout << std::endl;*/
    
    std::cout << "Изначальный массив: ";
    const int SIZE4 = 5;
    int arr4[SIZE4]{ 1, 2, 3, 4, 5 };


   
    print_arr(arr4, SIZE4);
     std::cin >> n;
     std::cout << "Итоговый массив: " << '\n';
    move_arr(arr4, SIZE4, n);
    print_arr(arr4, SIZE4);
    

    return 0;
}

