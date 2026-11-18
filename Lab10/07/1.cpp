#include <iostream>
int main(){
std::cout << reinterpret_cast <char*>(3000) - reinterpret_cast <char*>(2000) << std::endl;
}