#include <iostream>
#include <cmath>

using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int choice;
    double num1, num2;

    while (true) {
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Частное" << endl;
        cout << "4. Произведение" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Выберите операцию (1-9): ";
        cin >> choice;

        if (choice == 9) {
            break;
        }

        switch (choice) {
        case 1:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Результат: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Результат: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Введите делимое: ";
            cin >> num1;
            cout << "Введите делитель: ";
            cin >> num2;
            if (num2 == 0) {
                cout << "Ошибка! Деление на ноль невозможно." << endl;
            }
            else {
                cout << "Результат: " << num1 / num2 << endl;
            }
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Результат: " << num1 * num2 << endl;
            break;
        case 5:
            cout << "Введите основание: ";
            cin >> num1;
            cout << "Введите показатель степени: ";
            cin >> num2;
            cout << "Результат: " << pow(num1, num2) << endl;
            break;
        case 6:
            cout << "Введите число для извлечения квадратного корня: ";
            cin >> num1;
            if (num1 < 0) {
                cout << "Ошибка! Квадратный корень из отрицательного числа не существует." << endl;
            }
            else {
                cout << "Результат: " << sqrt(num1) << endl;
            }
            break;
        case 7:
            cout << "Введите число для нахождения 1 процента: ";
            cin >> num1;
            cout << "Результат: " << 0.01 * num1 << endl;
            break;
        case 8:
            cout << "Введите число для вычисления факториала: ";
            cin >> num1;
            if (num1 < 0) {
                cout << "Ошибка! Факториал отрицательного числа не существует." << endl;
            }
            else {
                cout << "Результат: " << factorial(static_cast<int>(num1)) << endl;
            }
            break;
        default:
            cout << "Некорректный выбор операции. Пожалуйста, выберите от 1 до 9." << endl;
        }
    }

    return 0;
}
