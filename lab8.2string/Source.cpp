#include <iostream>
#include <string>
#include<Windows.h>

using namespace std;

int CountWords(const string& str)
{
    int count = 0;
    size_t startPos = 0;

    while (true)
    {
        // ��������� ������� ���������� �����
        startPos = str.find_first_not_of(' ', startPos);
        if (startPos == string::npos)
            break;  // �� ����� ��������

        // ��������� ����� ��������� �����
        size_t endPos = str.find_first_of(' ', startPos);
        if (endPos == string::npos)
            endPos = str.length();

        // ����������, �� ������ � ������� ������ ����������
        if (str[startPos] == str[endPos - 1])
            count++;

        startPos = endPos;  // ���������� �� ���������� �����
    }

    return count;
}

int main()
{+
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string input;
    cout << "�����: ";
    getline(cin, input);

    int wordCount = CountWords(input);
    cout << "������� ���, � ���� ������ � ������� ������ � �������: " << wordCount << endl;

    return 0;
}