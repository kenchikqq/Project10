#include <iostream>
#include <iomanip>
#include <windows.h>

const double DOLLAR = 75.0;  
const double EURO = 80.0;    
const double YUAN = 11.0;    
const double FARIT = 2.0;     
const double YEN = 0.7;       
const double COMMISSION = 0.05;  

void showMenu() {
    std::cout << "Выберите валюту для обмена:" << std::endl;
    std::cout << "1. Доллар" << std::endl;
    std::cout << "2. Евро" << std::endl;
    std::cout << "3. Юань" << std::endl;
    std::cout << "4. Фарит" << std::endl;
    std::cout << "5. Иена" << std::endl;
    std::cout << "Введите номер выбранной валюты (1-5): ";
}

double convertCurrency(double rubles, double ) {
    return rubles;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double rubles;
    char repeat;

    do {
        std::cout << "Введите количество рублей для обмена: ";
        std::cin >> rubles;

        if (rubles <= 0) {
            std::cout << "Введите положительное количество рублей." << std::endl;
            continue;
        }

        showMenu();

        int choice;
        std::cin >> choice;

        double currencyAmount = 0.0;
        double commission = rubles * COMMISSION;

        switch (choice) {
        case 1: 
            currencyAmount = convertCurrency(rubles - commission, DOLLAR);
            std::cout << "Вы можете купить " << std::fixed << std::setprecision(2) << currencyAmount << " долларов." << std::endl;
            break;
        case 2: 
            currencyAmount = convertCurrency(rubles - commission, EURO);
            std::cout << "Вы можете купить " << std::fixed << std::setprecision(2) << currencyAmount << " евро." << std::endl;
            break;
        case 3: 
            currencyAmount = convertCurrency(rubles - commission, YUAN);
            std::cout << "Вы можете купить " << std::fixed << std::setprecision(2) << currencyAmount << " юаней." << std::endl;
            break;
        case 4: 
            currencyAmount = convertCurrency(rubles - commission, FARIT);
            std::cout << "Вы можете купить " << std::fixed << std::setprecision(2) << currencyAmount << " фаритов." << std::endl;
            break;
        case 5: 
            currencyAmount = convertCurrency(rubles - commission, YEN);
            std::cout << "Вы можете купить " << std::fixed << std::setprecision(2) << currencyAmount << " иен." << std::endl;
            break;
        default:
            std::cout << "Неверный выбор. Пожалуйста, попробуйте снова." << std::endl;
            continue;
        }

        std::cout << "Сумма комиссии банка: " << std::fixed << std::setprecision(2) << commission << " рублей." << std::endl;

        std::cout << "Хотите повторить обмен? (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    std::cout << "Спасибо за использование конвертера валют!" << std::endl;

    return 0;
}