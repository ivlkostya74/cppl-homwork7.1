// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

 

#include <iostream>
#include <string>
#include <map>
#include <set>

template<class T>
void print(const T& m0, const std::string* simvols)
{
   
    for (const auto& m : m0)
    {
        std::cout <<"  "<< m.second << ": " << m.first << '\n';
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    size_t numberOfRepetitions = 0;
    std::string simvols = "Hello world!";
    std::multimap<size_t, char, std::greater<size_t>> m;

    
    std::set<char> s1;

   
    for (size_t i = 0; i < simvols.length(); i++)
    {
        s1.insert(simvols[i]);
    }

  
    for (const auto& i : s1)
    {
        numberOfRepetitions = std::count(simvols.begin(), simvols.end(), i);
        m.emplace(numberOfRepetitions, i);
    }
    print(m, &simvols);
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
