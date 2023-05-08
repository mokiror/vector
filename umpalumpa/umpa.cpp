#include <iostream>
#include <vector>


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//1
	std::vector<int> myVector(5);
	myVector.reserve(6); //указываем сколько эллементов должно быть в capacity
	
	//2
	std::cout << "Вывод вектора: ";
	for (int i = 0; i < myVector.size(); i++)
	{
	    myVector[i] = rand() % 5 + 1;
		std::cout << myVector[i] << " ";
	}
	std::cout << std::endl;

	//3
	std::cout << "Размер вектора: " << myVector.size();
	std::cout << std::endl;

	//4
	std::cout << "\nВектор без последнего эллемента: ";
	myVector.pop_back();
	for (int i = 0; i < myVector.size(); i++)
	{
		std::cout << myVector[i] << " ";
	}
	std::cout << "\nРазмер вектора: " << myVector.size();
	std::cout << std::endl;

	//5
	std::cout << "\nУвеличение вектора на 2 ячейки. \nРазмер вектора: " << myVector.capacity() << std::endl;
	myVector.insert(myVector.begin(), 99);
	myVector.insert(myVector.end(), 55);
	std::cout << "Новый вектор: ";
	for (int i = 0; i < myVector.capacity(); i++)
	{
		std::cout << myVector[i] << " ";
	}
	std::cout << std::endl;






	return 0;
}


