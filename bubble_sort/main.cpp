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
	
	std::vector<int> data;

	for( int i = 0; i < 10; i++ )
	{

		data.push_back( rand()%100 );

	}

	while( !isInOrder( data ) )
	{

		for( int i = 0; i < data.size()-1; i++ )
		{

			if( data.at( i ) > data.at( i+1 ) )
			{

				int temp = data.at(i);
				data.at(i) = data.at(i+1);
				data.at(i+1) = temp;

			}

		}

	}

	for( int i = 0; i < data.size(); i++ )
	{

		std::cout << data[i] << " ";

	}

	std::cout << std::endl;

}