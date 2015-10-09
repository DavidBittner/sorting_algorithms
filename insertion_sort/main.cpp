#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
	
	//Create the data vector.
	std::vector<int> data;
	std::vector<int> output;

	srand( time( nullptr ) );

	//Add a whole buncha numbahs to it!
	for( int i = 0; i < 10; i++ )
	{

		data.push_back( (rand()%10)+1 );

	}

	output.push_back( data.at(0) );

	for( int i = 0; i < data.size(); i++ )
	{

		for( int j = output.size()-1; j >= 0; j-- )
		{

			if( data.at(i) >= output.at(j) )
			{

				output.insert( output.begin()+j+1, data.at(i) );
				break;

			}else if( j == 0 )
			{

				output.insert( output.begin(), data.at(i) );
				break;

			}

		}

	}

	for( int i = 0; i < output.size(); i++ )
	{

		std::cout << output.at(i) << ",";

	}
	std::cout << std::endl;

}