#include"iostream"
#include"fstream"
using namespace std;
int main(){
    string path; fstream file;
    cout<<"file path:\n";
    getline(cin, path);
    file.open(path.c_str(), fstream::in | fstream::out | fstream::app);
    file<<" welcome to game theory";
    file.close();
}
// C:\Users\datmobile\Documents\test test test.txt
// C:/Users/datmobile/Documents/test test test.txt