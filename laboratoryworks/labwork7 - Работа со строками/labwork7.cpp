#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    //Задание 1
    string flipOver1, flipOver2;
    int len;

    cout << "\tПрограмма-Перевёртыш\n\n";
    cout << "Ваше слово: ";
    cin >> flipOver1;

    len = flipOver1.length(); //Считает длину слова
    char* arr = new char[len];
    for (int i = 0; i < len; i++) 
        arr[i] = flipOver1[i]; //Заполняет массив буквами из введённого слова

    cout << "\nНаш перевёртыш: ";
    for (int i = (len - 1); i >= 0; i--)
        cout << arr[i]; //Выводится каждый элемент массива начиная с последнего и до первого.

    delete[] arr;
    cout << endl;

    //Более простая версия первого задания
    cout << "\nВаше слово: ";
    cin >> flipOver2;
    cout << "\nНаш перевёртыш два: ";
    for (int i = flipOver2.length() - 1; i >= 0; i --) 
        cout << flipOver2[i]; //Выводит каждый символ строки начиная с последнего (\0 - пропускаем)
    cout << endl;
    
    //Задание 2
    string findLetter;
    char letter;
    int count = 0;
    
    cout << "\tИщейка букв в слове\n\n";
    cout << "Слово: ";
    cin >> findLetter;
    cout << "\nБуква: ";
    cin >> letter;

    for (int i = 0; i <= (findLetter.length() - 1); i++) 
        if (letter == findLetter[i]) count += 1; // Сравнивает каждый символ слова с нужным и считает их количество
    cout << "Букв в слове " << count << "\n\n";
    
    //Задание 3
    string word;
    int regist;

    cout << "\tУкорачиватель/Растягиватель букв\n\n";
    cout << "Ваше слово ";
    cin >> word;
    cout << "Какой регистр? [нижний - 1] [верхний - 2]" << endl;
    cin >> regist;

    switch(regist) { //Производит нужную операцию, в зависимости от того что выбрал пользователь
        case 1:
            for (int i = 0; i < word.length(); i++)
                word[i] = tolower(word[i]);
                cout << word;
            cout << endl;
            break;
        case 2:
            for (int i = 0; i < word.length(); i++)
                word[i] = toupper(word[i]);
                cout << word;
            cout << endl;
            break;
        default:
            cout << "ОШИБКА - неверно ввели данные" << endl;
            break;
    }
    
    //Задание 4
    string text;
    cout << "\tРазделитель Текста\n\n";
    cout << "Текст: ";
    getline(cin, text);

    for (int i = 0; i <= (text.length() - 1); i++) {
        if (text[i] != text[i + 1]);
        else i += 1; //Проверка на двойной пробел
        if (text[i] == '.' or text[i] == '?' or text[i] == '!') {
            text[i] = ' ';
            if (text[i + 1] == '.' or text[i] == '?' or text[i] == '!') 
                text[i + 1] = ' ';
            cout << endl;
            i += 2;
        }
        cout << text[i];
    }
    cout << endl;

    //Задание 5
    string reWord;
    char let, zamena;

    cout << "\tЗамена букв на другие буквы\n\n";
    cout << "Введите ваше слово: ";
    cin >> reWord;
    cout << "Какую букву заменить: ";
    cin >> let;
    cout << "На что заменить: ";
    cin >> zamena;

    for (int i = 0; i <= (reWord.length() - 1); i++) 
        if (let == reWord[i]) 
            reWord[i] = zamena; //Сравнивает каждый элемент с введённым. Если они совпадают, то буква меняется
    cout << "Изменённое слово " << reWord << endl;

    return 0;
}
