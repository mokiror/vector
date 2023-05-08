#include <iostream>
#include <vector>


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//1
	std::vector<int> myVector(5);
	myVector.reserve(6); //��������� ������� ���������� ������ ���� � capacity
	
	//2
	std::cout << "����� �������: ";
	for (int i = 0; i < myVector.size(); i++)
	{
	    myVector[i] = rand() % 5 + 1;
		std::cout << myVector[i] << " ";
	}
	std::cout << std::endl;

	//3
	std::cout << "������ �������: " << myVector.size();
	std::cout << std::endl;

	//4
	std::cout << "\n������ ��� ���������� ���������: ";
	myVector.pop_back();
	for (int i = 0; i < myVector.size(); i++)
	{
		std::cout << myVector[i] << " ";
	}
	std::cout << "\n������ �������: " << myVector.size();
	std::cout << std::endl;

	//5
	std::cout << "\n���������� ������� �� 2 ������. \n������ �������: " << myVector.capacity() << std::endl;
	myVector.insert(myVector.begin(), 99);
	myVector.insert(myVector.end(), 55);
	std::cout << "����� ������: ";
	for (int i = 0; i < myVector.capacity(); i++)
	{
		std::cout << myVector[i] << " ";
	}
	std::cout << std::endl;






	return 0;
}


