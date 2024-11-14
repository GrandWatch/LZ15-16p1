// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>  // для роботи з файлами
#include <cmath>    // для обчислення квадратів

using namespace std;

int main() {
    // Відкриваємо файл chusla.txt для читання
    ifstream inputFile("chusla.txt");

    // Перевіряємо, чи файл успішно відкрився
    if (!inputFile) {
        cerr << "Не вдалося відкрити файл chusla.txt" << endl;
        return 1;
    }

    int number;           // Змінна для зчитування чисел з файлу
    int sumOfSquares = 0; // Змінна для суми квадратів додатних чисел

    // Читання даних з файлу
    while (inputFile >> number) {
        // Перевіряємо, чи число додатне
        if (number > 0) {
            // Додаємо квадрат числа до загальної суми
            sumOfSquares += pow(number, 2);
        }
    }

    // Закриваємо файл
    inputFile.close();

    // Виводимо результат
    cout << "Сума квадратів додатних чисел: " << sumOfSquares << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
