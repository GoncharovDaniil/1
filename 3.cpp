#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main()
{
setlocale(LC_ALL, "rus");
int a[10] {}, z;
srand(time(NULL));
for (int i = 0; i < 10; i++)
{
a[i] = rand() % 41 - 20;
if (a[i]<0)
z=z+a[i];
}
cout<<endl << "Массив c числами oт -20 до 20: ";
for (int i = 0; i < 10; i++)
{
cout<<a[i]<<" ";
}
cout<<endl<<"Сумма всех отрицательных элементов: z="<<z;
return 0;
}


