#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    //Задание 1 - запрос имени файла и Задание 2 - чтение из файла
    
    string name, line1;
    cout << "Введите имя файла: ";
    cin >> name;
    ifstream inF(name.c_str());
    if (inF.is_open()) {
        while (getline(inF, line1))
            cout << line1 << endl;
        inF.close();
    }
    else
        cout << "Ошибка чтения, или файл не был найден." << endl;
    

    //Задание 3 - считывание из 1.txt и считает количество символов, записывает данные в 2.txt
    
    char a, b, c;
    char text[100]{ "\0" };
    string line2;
    int couA = 0, couB = 0, couC = 0;
    cout << "\nКакие символы найти? (3)" << endl;
    cout << "Первый: ";
    cin >> a;
    cout << "Второй: ";
    cin >> b;
    cout << "Третий: ";
    cin >> c;

    ifstream read("1.txt");
    if (read.is_open()) {
        while (getline(read, line2)) {
            for (int j = 0; j < line2.length(); j++) {
                text[j] = line2[j];
                if (text[j] == a) couA += 1;
                if (text[j] == b) couB += 1;
                if (text[j] == c) couC += 1;
            }
        }
        read.close();
    }
    else
        cout << "Файл не доступе или не существует." << endl;

    ofstream write("2.txt");
    if (write.is_open()) {
        write << "count " << a << " - " << couA << '\n';
        write << "count " << b << " - " << couB << '\n';
        write << "count " << c << " - " << couC << '\n';
        write.close();
    }
    else 
        cout << "Файл не доступе или не существует." << endl;
    

    //Задание 4 - 3.txt список из чисел, нужно посчитать их сумму, количество и среднее арифметическое. Записать всё в 4.txt

    string string;
    float sum = 0;
    unsigned quantity = 0;

    ifstream file("3.txt");
    if (file.is_open()) {
        getline(file, string);
        for (int i = 0; i < string.length(); i++) {
            if (string[i] != ' ') {
                quantity += 1;
                int a = string[i] - '0';
                sum += a;
            }
            else
                continue;
        }
        
        ofstream answers("4.txt");
        if (answers.is_open()) {
            answers << "Количество: " << quantity << endl;
            answers << "Сумма: " << sum << endl;
            answers << "Среднее арифметическое " << round((sum / quantity) * 100) / 100 << endl;
        }
        else
            cout << "Ошибка" << endl;
    }
    else
        cout << "Ошибка" << endl;

    
    return 0;
}





