// 3.7-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define MODE 5

#ifndef MODE
#error needs mode
#endif 
void add(int a, int b) {
    std::cout << a + b;
}



int main(){
#if MODE==0
std::cout << "train mode ";


#elif MODE==1
    std::cout << "W mode ";
    int a, b;
    std::cout << "input 2 numbers \n";
    std::cin >> a >> b;
    add(a, b);
# else 
    std::cout << "unknown MODE ";

#endif





 
}

