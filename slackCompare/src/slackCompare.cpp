//============================================================================
// Name        : slackCompare.cpp
// Author      : Jeremy Beard
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}*/
#include <iostream>
#include <sstream>
#include <fstream>
#include <iterator>

using namespace std;
/*
template <class T>
class csv_istream_iterator: public iterator<input_iterator_tag, T>
{
    istream * _input;
    char _delim;
    string _value;
public:
    csv_istream_iterator( char delim = ',' ): _input( 0 ), _delim( delim ) {}
    csv_istream_iterator( istream & in, char delim = ',' ): _input( &in ), _delim( delim ) { ++*this; }

    const T operator *() const {
        istringstream ss( _value );
        T value;
        ss >> value;
        return value;
    }

    istream & operator ++() {
        if( !( getline( *_input, _value, _delim ) ) )
        {
            _input = 0;
        }
        return *_input;
    }

    bool operator !=( const csv_istream_iterator & rhs ) const {
        return _input != rhs._input;
    }
};

    template <>
    const string csv_istream_iterator<string>::operator *() const {
        return _value;
    }

    int main( int argc, char * args[] )
    {
        { // test for integers
            ifstream fin( "data.csv" );
            if( fin )
            {
                copy( csv_istream_iterator<int>( fin ),
                      csv_istream_iterator<int>(),
                      ostream_iterator<int>( cout, " " ) );

                fin.close();
            }
        }

        cout << endl << "----" << endl;

        { // test for strings
            ifstream fin( "data.csv" );
            if( fin )
            {
                copy( csv_istream_iterator<string>( fin ),
                      csv_istream_iterator<string>(),
                      ostream_iterator<string>( cout, "|" ) );

                fin.close();
            }
        }

        return 0;
    } //maybe another } after?
*/

int DisplayMenu();

int main()
{

	DisplayMenu();
	return 0;
}

int DisplayMenu()
{
	int choice = 0;
	cout << "poop" << endl;
	cout << "Choice? [#] : ";
	cin >> choice;
	cout << "Choice = " << choice << endl;



}

