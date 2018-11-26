#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream f;
    f.open("hello.txt",ios::app);
    if(!f)
    {
        cout<<"file not available";
    }
    else{
    cout<<"file created\n";    
        f<<"bahuguna\nhello\n";   
    }
    f.close();
    return 0;
} 