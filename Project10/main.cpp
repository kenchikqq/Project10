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
    std::cout << "�������� ������ ��� ������:" << std::endl;
    std::cout << "1. ������" << std::endl;
    std::cout << "2. ����" << std::endl;
    std::cout << "3. ����" << std::endl;
    std::cout << "4. �����" << std::endl;
    std::cout << "5. ����" << std::endl;
    std::cout << "������� ����� ��������� ������ (1-5): ";
}

double convertCurrency(double rubles, double ) {
    return rubles;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double rubles;
    char repeat;

    do {
        std::cout << "������� ���������� ������ ��� ������: ";
        std::cin >> rubles;

        if (rubles <= 0) {
            std::cout << "������� ������������� ���������� ������." << std::endl;
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
            std::cout << "�� ������ ������ " << std::fixed << std::setprecision(2) << currencyAmount << " ��������." << std::endl;
            break;
        case 2: 
            currencyAmount = convertCurrency(rubles - commission, EURO);
            std::cout << "�� ������ ������ " << std::fixed << std::setprecision(2) << currencyAmount << " ����." << std::endl;
            break;
        case 3: 
            currencyAmount = convertCurrency(rubles - commission, YUAN);
            std::cout << "�� ������ ������ " << std::fixed << std::setprecision(2) << currencyAmount << " �����." << std::endl;
            break;
        case 4: 
            currencyAmount = convertCurrency(rubles - commission, FARIT);
            std::cout << "�� ������ ������ " << std::fixed << std::setprecision(2) << currencyAmount << " �������." << std::endl;
            break;
        case 5: 
            currencyAmount = convertCurrency(rubles - commission, YEN);
            std::cout << "�� ������ ������ " << std::fixed << std::setprecision(2) << currencyAmount << " ���." << std::endl;
            break;
        default:
            std::cout << "�������� �����. ����������, ���������� �����." << std::endl;
            continue;
        }

        std::cout << "����� �������� �����: " << std::fixed << std::setprecision(2) << commission << " ������." << std::endl;

        std::cout << "������ ��������� �����? (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    std::cout << "������� �� ������������� ���������� �����!" << std::endl;

    return 0;
}