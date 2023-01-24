#include <iostream>

using namespace std;
	#include <fstream>
int main()
{ 
    float height[4]={17.5,15.0,3.8,5.0};
    ofstream outfile;
    outfile.open("abc");
    outfile.write(( char *)height,sizeof(height));
    outfile.close();
    
    float p[4];
    ifstream infile;
    infile.open("abc");
    infile.read((char*) p,32);
    cout<<p[0]<<p[1];
    
    return 0;
}

