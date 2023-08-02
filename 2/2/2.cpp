
#include <iostream>
#include <map>


int main() {
    setlocale(0, "");
    std::map <int, int, std::greater<int>> mp;

    std::cout << "Введите количество элементов: "; int n; std::cin >> n;

    for (int i = 0; i < n; i++) {
        int a; std::cin >> a;
        mp[a]; // сохраняем
    }

    std::map <int, int> ::iterator it = mp.begin();
    std::cout << "Отсортированно: " << std::endl;
    for (; it != mp.end(); it++) {  
        std::cout << it->first << std::endl;
    }
    return 0;
}
