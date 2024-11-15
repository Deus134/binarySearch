#include <iostream>
using namespace std;


void FillArray(int nums[], const int sizeOfNums)
{
	for (int index = 0; index < sizeOfNums; index++)
	{
		nums[index] = (index + 1) * 2;
	}
}

/*void OutPutArray(int nums[], const int sizeOfNums)
{
	cout << "[";

	for (int index = 0; index < sizeOfNums; index++)
	{
		cout << nums[index] << ", ";
	}
	cout << "\b\b]" << endl;
}*/

void binarySearch(int nums[], const int sizeOfNums, int item)
{
	int counter = 0, guess, mid, low = 0, high = sizeOfNums - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		guess = nums[mid];

		counter++ ;

		if (guess == item)
		{
			cout << "Ваше число найдено, оно находится в списке на позиции " << mid + 1 << endl;
			cout << "Найдено с " << counter << " попытки" << endl;
			return;
		}
		if (guess > item)
			high = mid - 1;
		else
			low = mid + 1;
	}
	cout << "Введенное вами число не найдено в списке";
}

int main()
{
	setlocale(LC_ALL, "ru");

	const int SIZEofArray = 100;

	int nums[SIZEofArray];

	FillArray(nums, SIZEofArray);

	//OutPutArray(nums, SIZEofArray);

	int requiredNumber;

	cout << "Введите любое число и программа проверит, присутствует ли оно в списке: ";
	cin >> requiredNumber;

	binarySearch(nums, SIZEofArray, requiredNumber);
}