#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;

//void main()
//{
//	int rows, cols;
//	int** arr = new int* [5];
//	cout << "enter rows ";
//	cin >> rows;
//	cout << "enter cols ";
//	cin >> cols;
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i] = new int[cols];
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < rows; j++)
//		{
//			arr[i][j] = rand()%20;
//			cout << setw(5)<<arr[i][j] << " ";
//		}
//		cout << endl;		
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		delete[] arr[i];
//	}
//	delete[] arr;
//}
//void main()
//{
//	char arr[] = { 'H','i','\0' };
//	for (size_t i = 0; arr[i] != '\0'; i++)
//	{
//		cout << arr[i];
//	}	
//	cout << sizeof(arr) << endl; 
//	cout << strlen(arr) << endl;
//	cout << arr << endl;
//}
//void main()
//{
//	char arr[255];
//	cin.getline(arr, 255); // by keyboard
//	/*for (size_t i = 0; arr[i] != '\0'; i++)
//	{
//		cout << arr[i];
//	}*/
//	cout << sizeof(arr) << endl;//bit
//	cout << strlen(arr) << endl;//element
//	cout << arr << endl;
//}
//void main()
//{
//	char arr[255]; // perepusye 2 masuv y pershuy
//	char arr2[] = "world";
//	cout << arr << endl;
//	strcpy_s(arr, arr2);
//	cout << arr << endl;
//}
//void main()
//{
//	char arr[255];
//	char arr2[] = "123456789";
//	strncpy_s(arr, arr2, 5);
//	cout << arr << endl; //perepusue pershi 5 sumvoliv
//}
//void main()
//{
//	char arr[255]="Hi";
//	char arr2[] = "123456789";
//	strcat_s(arr, arr2); //v pershuy masuv dopusye dryguy
//	cout << arr << endl; 
//}
//void main()
//{
//	char arr[255]="Hi\t";
//	char arr2[] = "123456789";
//	strncat_s(arr, arr2,5); //v pershuy masuv dopusye 5 elementiv drugogo
//	cout << arr << endl; 	
//}
void main()
{
	char arr[255];
	cin.getline(arr, 255);
	cout << arr << endl;
}