#include <iostream>
#include <conio.h>
#include<cstdlib>
#include<string>
#include<sstream>
#include <fstream>

using namespace std;

int main()
{

        int a[10000],count=0,n=0;
        int x,i=0,j=0;
        // clrscr();
        ifstream myfile;
        string line;
        myfile.open ("data10k.txt");

        while(!myfile.eof()){
                getline(myfile,line);
                stringstream(line)>>x;
                a[i]=x;
               // cout<< x<<endl;
                i++;
                }

     for(int i = 0; i < 10000; i++)

    {

        for(int j = 0; j < 10000; j++)

        {

            if(a[i] < a[j])

            {

                int temp = a[i];

                a[i] = a[j];

                a[j] = temp;

            }

        }

    }



    std::cout << "\n\nThe numbers in ascending orders are given below:\n\n";

    for(int i = 0; i < 10000; i++)

    {

       // std::cout << "Sorted [" << i + 1 << "] element: ";

        std::cout << a[i];

        std::cout << "\n";

    }



    delete [] a;
    myfile.close();

    return 0;

}


