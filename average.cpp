#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc,char* argv[]){
    int a=0,b=0;
    if(argc == 1) cout << "Please input numbers to find average.";
    else{
        for(int i=1;i<argc;i++){
            a += atoi(argv[i]);
            b += 1;
        }
        cout << "---------------------------------" << endl;
        cout << "Average of " << b << " numbers = " << a/b << endl; 
        cout << "---------------------------------" << endl;
    }
    return 0;
}