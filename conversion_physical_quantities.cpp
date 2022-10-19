#include <iostream>
#include <string>
#include <math.h>
#include <Windows.h>

using namespace std;
double ConLen()
{
    cout << "Введите числовое значение: ";
    double InLen = 0;
    cin >> InLen;
    cout << "Единица измерения: \n0)мм\n1)см\n2)дм\n3)м\n4)км\n";
    int choice1 = 0;
    cin >> choice1;
    string unit[]{ "мм","см","дм","м","км" };
    double quantity1[]{1e-3, 1e-2, 1e-1,1,1e+3};
    cout << "Перевести в: \n0)мм\n1)см\n2)дм\n3)м\n4)км\n";
    int choice2 = 0;
    cin >> choice2;
    double res = 0;
    res = InLen * quantity1[choice1] * pow(quantity1[choice2],-1);
    cout << "Результат: " << InLen << ' ' << unit[choice1] << " = " << res << ' ' << unit[choice2];
    return res;
}

double ConArea()
{
    cout << "Введите числовое значение: ";
    double InLen = 0;
    cin >> InLen;
    cout << "Единица измерения: \n0)мм^2\n1)см^2\n2)дм^2\n3)м^2\n4)км^2\n";
    int choice1 = 0;
    cin >> choice1;
    string unit[]{ "мм^2","см^2","дм^2","м^2","км^2" };
    double quantity1[]{ 1e-6, 1e-4, 1e-2,1,1e+6 };
    cout << "Перевести в: \n0)мм^2\n1)см^2\n2)дм^2\n3)м^2\n4)км^2\n";
    int choice2 = 0;
    cin >> choice2;
    double res = 0;
    res = InLen * quantity1[choice1] * pow(quantity1[choice2], -1);
    cout << "Результат: " << InLen << ' ' << unit[choice1] << " = " << res << ' ' << unit[choice2];
    return res;
}

double ConVolume()
{
    cout << "Введите числовое значение: ";
    double InLen = 0;
    cin >> InLen;
    cout << "Единица измерения: \n0)мм^3\n1)см^3\n2)дм^3\n3)л\n4)м^3\n5)км^3\n";
    int choice1 = 0;
    cin >> choice1;
    string unit[]{ "мм^3","см^3","дм^3","л","м^3","км^3"};
    double quantity1[]{ 1e-9, 1e-6, 1e-3,1e-3,1,1e+9 };
    cout << "Перевести в: \n0)мм^3\n1)см^3\n2)дм^3\n3)л\n4)м^3\n5)км^3\n";
    int choice2 = 0;
    cin >> choice2;
    double res = 0;
    res = InLen * quantity1[choice1] * pow(quantity1[choice2], -1);
    cout << "Результат: " << InLen << ' ' << unit[choice1] << " = " << res << ' ' << unit[choice2];
    return res;
}

double ConTime()
{
    cout << "Введите числовое значение: ";
    double InLen = 0;
    cin >> InLen;
    cout << "Единица измерения: \n0)c\n1)мин\n2)ч\n3)сут\n";
    int choice1 = 0;
    cin >> choice1;
    string unit[]{ "с","м","ч","сут"};
    double quantity1[]{ 1, 60, 3600,86400};
    cout << "Перевести в: \n0)c\n1)мин\n2)ч\n3)сут\n";
    int choice2 = 0;
    cin >> choice2;
    double res = 0;
    res = InLen * quantity1[choice1] * pow(quantity1[choice2], -1);
    cout << "Результат: " << InLen << ' ' << unit[choice1] << " = " << res << ' ' << unit[choice2];
    return res;
}
double ConSpeed()
{
    cout << "Введите числовое значение: ";
    double InLen = 0;
    cin >> InLen;
    cout << "Единица измерения  в числителе: \n0)мм\n1)см\n2)дм\n3)м\n4)км\n";
    int choice1_top = 0;
    cin >> choice1_top;
    cout << "Единица измерения в знаменателе: \n0)c\n1)мин\n2)ч\n3)сут\n";
    int choice1_bot = 0;
    cin >> choice1_bot;
    string unit_top[]{ "мм","см","дм^","м","км" };
    double quantity_top[]{ 1e-3, 1e-2, 1e-1,1,1e+3 };
    string unit_bot[]{ "с","м","ч","сут" };
    double quantity_bot[]{ 1, 60, 3600,86400 };
    cout << "Перевести в (знаменатель): \n0)мм\n1)см\n2)дм\n3)м\n4)км\n";
    int choice2_top = 0;
    cin >> choice2_top;
    cout << "Перевести в (числитель): \n0)c\n1)мин\n2)ч\n3)сут\n";
    int choice2_bot = 0;
    cin >> choice2_bot;
    double res = 0;
    res = InLen * quantity_top[choice1_top]/ quantity_bot[choice1_bot] * pow(quantity_top[choice2_top], -1) / pow(quantity_bot[choice2_bot], -1);
    cout << "Результат: " << InLen << ' ' << unit_top[choice1_top] <<"/" 
        <<  unit_bot[choice1_bot] << " = " << res << ' ' << unit_top[choice2_top] 
        << "/" << unit_bot[choice2_bot];
    return res;
}

int main()
{

    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string refresh = "да";
    while (refresh == "Да" || refresh == "да")
    {
        cout << "Добро пожаловать в конвектор физических величин!" << '\n';

        cout << "С какими величинами хотите работать?\n1)Длина\n2)Площадь\n3)Объем\n4)Время\n5)Скорость" << '\n';
        int choice = 0;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Работаем с длиной\n";
            ConLen();
            break;
        case 2:
            cout << "Работаем с площадями\n";
            ConArea();
            break;
        case 3:
            cout << "Работаем с объемами\n";
            ConVolume();
            break;
        case 4:
            cout << "Работаем с временем\n";
            ConTime();
            break;
        case 5:
            cout << "Работаем со скоростями\n";
            ConSpeed();
            break;

        default:
            cout << "Неверный ввод!" << '\n';
            break;
        }
        cin.clear();
        cout << "\nХотите продолжить?\n";
        cin.ignore();
        getline(cin, refresh);
    }

    

    return 0;
}

