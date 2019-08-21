#pragma once
#include <iostream>

using namespace std;
class Vector
{
	int *arr;
	int arrLength;
	int duped[10];

	public: 

		Vector(int count)
		{
			arr = new int[count];
			arrLength = count;
			for (int i = 0; i < 10; i++)
			{
				duped[i] = 0;
			}
		}

		~Vector()
		{
			delete arr;
		}

		void fillArray()
		{
			cout << "Filling array..." << endl;
			for (int i = 0; i < arrLength; i++)
			{
				arr[i] = (rand() % 10);
				duped[arr[i]]++;
			}
			cout << "Filled array" << endl;
		}

		void printArray()
		{
			cout << "Current array: " << endl;
			for (int i = 0; i < arrLength; i++)
			{
				cout << i + 1 << ") " << arr[i] << endl;
			}
		}

		void printDupes(bool skipEmpty = false)
		{
			cout << "Fixed duplications: " << endl;
			for (int i = 0; i < 10; i++)
			{
				if (duped[i] == 0 && skipEmpty)
					continue;
				cout << i << ") " << duped[i] << endl;
			}
		}

		void shuffleArray()
		{
			cout << "Started  shuffling..." << endl;
			for (int i = 0; i < arrLength; i++)
			{
				loopthrew:
				int rnd = rand() % arrLength;
				int buffer = arr[rnd];
				arr[rnd] = arr[i];
				while (arr[i] == buffer)
				{
					int buffer = arr[rand() % arrLength];
				}
				arr[i] = buffer;
			}

			cout << "Shuffle ended" << endl;
		}
};

