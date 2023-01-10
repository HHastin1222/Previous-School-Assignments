#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //open first file
	ifstream data;
	data.open("datafile.txt");

    //variables
    double sum = 0, total = 0, averages, number;
    
	
    //open second file
    ofstream average;
	average.open("averagefile.txt");
        
    //file check
    if (data.fail())
    {
        cout << "Error opening the file." << endl;
    }
    else
    {
       // run through data to eof
        while (data >> number)
        {
            //calculations
            sum += number;
            total++;
            
            averages = sum / total;

        }
        //add calculations to new file
        average.put(averages);
       
    }
    //close files

	data.close();
	average.close();

	return 0;

}