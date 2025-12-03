#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    string country;
    int jersey;
    // Constructor
    Cricketer(string country, int jersey){
        this->country = country;
        this->jersey = jersey;
    } 
};

int main(){
    Cricketer* dhoni = new Cricketer("India" , 59);
    Cricketer* kohli = new Cricketer("India" , 18);

    // kohli = dhoni;       // dosn't work
       *kohli = *dhoni;     // perfectly work

    // kohli->country = dhoni->country;
    // kohli->jersey = dhoni->jersey;

    delete dhoni;

    // cout << dhoni->jersey << endl;
    cout << kohli->country << " " << kohli->jersey << endl;

    return 0;
}