// 9. ������� ��������� �������. ������ �����: �����������_�������� ��������
//  f. �������� (�������, ���, ���� �� ���������� ����)

#include <iostream>

int main()
{
    int I;
    float x;
    setlocale(LC_ALL, "Rus");
    std::cout << "������� ����������� ��������" << "\n" << "1-������� � ��������" << "\n" << "2-������� � ����������" << "\n" << "3-�������� � �������" << "\n" << "4-�������� � ����������" << "\n" << "5-���������� � �������" << "\n" << "6-���������� � ��������" << std::endl;
    std::cin >> I;
    std::cout << "������� ����� ��� ��������" << std::endl;
    std::cin >> x;
    if (I == 1) {
        x = x * 273.15;
        std::cout << x << " ��������";
    };
    if (I == 2) {
        x = x * 32;
        std::cout << x << "������� � ����������";
    };
    if (I == 3) {
        x = x * -273.15;
        std::cout << x << "�������� � �������";
    };
    if (I == 4) {
        x = x * -459.67;
        std::cout << x << "�������� � ����������";
    };
    if (I == 5) {
        x = x * -17.777777777778;
        std::cout << x << "���������� � �������";
    };
    if (I == 6) {
        x = x * 255.37222222222;
        std::cout << x << "���������� � ��������";
    }
}