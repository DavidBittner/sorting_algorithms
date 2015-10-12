#include <iostream>
#include <vector>

bool isInOrder( std::vector<int> in )
{

	for( int i = 0; i < in.size()-1; i++ )
	{

		if( in.at(i) > in.at(i+1) )
		{

			return false;

		}

	}

	return true;

}

int main()
{

	//Create the main vector to store all the unsorted and sorted data.	
	std::vector<int> data;

	for( int i = 0; i < 1000; i++ )
	{

		data.push_back( rand()%100 );

	}

	//This loop is respnsbile fot the sorting, and runs as long as the array is not sorted.
	while( !isInOrder( data ) )
	{

		for( int i = 0; i < data.size()-1; i++ )
		{

			//If the data ahead is smaller than the data it's currently at, swap their positions.
			if( data.at( i ) > data.at( i+1 ) )
			{

				//Store the current value in a temporary int.
				int temp = data.at(i);
				data.at(i) = data.at(i+1);
				data.at(i+1) = temp;

			}

		}

	}

	//Print out all the data.
	for( int i = 0; i < data.size(); i++ )
	{

		std::cout << data[i] << " ";

	}

	std::cout << std::endl;

	data.clear();

}