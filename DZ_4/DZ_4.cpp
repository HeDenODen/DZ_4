#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //1
    double gb;
    cout << "Enter GB: ";
    cin >> gb;
    double mbit;
    cout << "Enter MBIT: ";
    cin >> mbit;
    double hour = (int)(gb * 8 / (mbit / 1024)) / 3600;
    double minute = (int)(gb * 8 / (mbit / 1024)) % 3600 / 60;
    double second = (int)(gb * 8 / (mbit / 1024)) % 3600 % 60;
    cout << hour << " hours ";
    cout << minute << " minurs ";
    cout << second << " seconds" << "\n\n";
    
    
    //2
    double gbyte;
    cout << "Enter GB: ";
    cin >> gbyte;
    const int mb = 760;
    int count = (int)(gbyte * 1024) / mb;
    cout << count << " films" << "\n\n";
    

    //3
    double num;
    cout << "Enter numbre: ";
    cin >> num;
    double integer = floor(num * 100) / 100;
    cout << "Result = " << integer << "\n\n";
    

    //4
    int studentsP;
    cout << "Enter number 'passed': ";
    cin >> studentsP;
    int studentsM;
    cout << "Enter number 'must': ";
    cin >> studentsM;
    int percent = ((studentsM) * 100) / (studentsM + studentsP);
    cout << "Result = " << percent << " %" << "\n\n";
    

    //5
    int sec;
    cout << "Enter seconds: ";
    cin >> sec;
    int leftH = (int)24 - (sec / 3600);
    int leftM = (int)60 - ((sec % 3600) / 60);
    int leftS = (int)60 - (((sec % 3600) % 60) / 60);
    cout << "Left " << leftH << " h ";
    cout << leftM << " m ";
    cout << leftS << " s" << "\n\n";
    

    //6
    double uah;
    cout << "Enter uah: ";
    cin >> uah;
    double month;
    cout << "Enter month: ";
    cin >> month;
    double pYear;
    cout << "Enter percent/year: ";
    cin >> pYear;
    double result = uah + ((month / 12) * ((uah * pYear) / 100));
    cout << "Result = " << result << " uah" << "\n\n";
    

    //7
    double R;
    cout << "Enter R: ";
    cin >> R;
    const double pi = 3.14;
    double S = 4 * pi * pow(R, 2);
    cout << "S = " << S << "\n\n";
}

