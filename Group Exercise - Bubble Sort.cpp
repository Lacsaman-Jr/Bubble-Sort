#include <iostream>
using namespace std;

void input(int num[], int size) //inputs the vaue of the elements
{
	cout <<"Input "<<size<<" numbers: ";
	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}
	cout <<endl;
}

void print(int num[], int size) //prisnts the elements
{
	for (int i = 0; i < size; i++)
	{
		cout << num[i]<<" ";
	}
	cout <<endl;
}

void sorter(int num[], int size) //sorts the elements to lowest to highest by checking it by pair
{
	int j = 0, i = 1;
	for(int k = 1; k < size; k++) //repeats the whole process
	{
		for(i = 1; i < size; i++) //shows the 2nd value
		{
			do //shows the first value
			{
				if(num[j] > num[i]) //if num[j] is greater than num[i], then it'll interchange
				{
					int x = num[i]; //keeps the second value
					num[i] = num[j]; //changes the second value to first value
					num[j] = x; //gets the value that was kept
					print(num, size); // to check the process of the sorting arrays
					cout <<endl;
				}
				j++; //increment	
			}while(j < i);	
		}
		j = 0; //resets the value of j to the start	
	}
}

int main()
{
	const int size = 6;
	int num[size] = {0};
	
	input(num, size);
	cout <<"Your inputs are: ";
	print(num, size);
	sorter(num, size);
	cout <<"The Sorted of your inputs is: ";
	print(num, size);
	
	return 0;
}