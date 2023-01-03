#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    float count=0;
    float sum,mean,std=0,y=0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        y += pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    mean =sum/count;
    cout << "Mean = "<< mean << endl;
    std=sqrt(((1/count)*y)-pow(mean,2));
    cout << "Standard deviation = "<< std ;
}