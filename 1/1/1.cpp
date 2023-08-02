#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    std::string text = "Hello, world!";
    std::unordered_map<char, int> frequency; // создаем карту для подсчета частоты символов

    // проходим по каждому символу текста
    for (char letter : text)
    {
            // увеличиваем счетчик для символа, если его частота меньше текущей
            frequency[letter]++; // увеличиваем cчеткик символов
    }

    std::vector<std::pair<char, int>> elems(frequency.begin(), frequency.end());

    auto compareBySecond = [](const pair<char, int>& lhs, const pair<char, int>& rhs) {
        return lhs.second > rhs.second; // сравниваем элементы по второму индексу
    };

    // сортируем
    std::sort(elems.begin(), elems.end(), compareBySecond);

    // печатаем
    std::cout << "[IN]:" << text << std::endl;
    std::cout << "[OUT]:" << std::endl;
    for (auto& i : elems)
    {
        std::cout << i.first << ": " << i.second << std::endl;
    }
    return 0; // завершаем программу
}