#include <iostream>
#include <vector>
using namespace std;

int main()
{
int A[6]={1,9,44,422,676,78}; //массив тортов
vector<int> MyPie(A,A+6); // вектор и запись в него шести элементов из массива

//прямой осмотр "тортов"
for (vector<int>::iterator it=MyPie.begin(); it != MyPie.end(); it++)
{
cout <<"Pie "<<*it<<" verity"<< endl;
}

std::cout<<std::endl;

//обратный осмотр "тортов"

for (vector<int>::reverse_iterator it=MyPie.rbegin(); it != MyPie.rend(); it++)
{
cout <<"Pie "<<*it<<" verity"<< endl;
}
return 0;
}
