#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{

	std::vector<int> data;
	int amountOfVals = 10000;

	for( int i = 0; i < amountOfVals; i++ )
	{

		data.push_back( rand()%1000 );

	}

	int sortedNums = 0;

	while( sortedNums < amountOfVals )
	{

		int max = 0;
		int maxAdr = 0;

		for( int i = 0; i < amountOfVals-sortedNums; i++ )
		{

			if( data.at(i) > max )
			{

				max = data.at(i);
				maxAdr = i;

			}

		}

		data.erase( data.begin()+maxAdr );
		data.insert( data.begin()+(amountOfVals-sortedNums-1), max );
		sortedNums++;

	}

	for( int i = 0; i < data.size(); i++ )
	{

		std::cout << data.at(i) << std::endl;

	}

}