#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
std::string s1, s2;
std::size_t cnt = 0, pos = 0;
std::cout<<"Первая строка, S1="<<std::endl;
std::getline(std::cin, s1);
std::cout<<"Вторая строка, S2="<<std::endl;
std::getline(std::cin, s2);
const std::size_t s2_len = s2.size();
while((pos = s1.find(s2, pos)) != std::string::npos)
{
pos += s2_len;
++cnt;
}
if(cnt)
std::cout<<"Найдено "<<cnt<<" совпадение"<<std::endl;
else
std::cout<<"Нет совпадений"<<std::endl;
}
