#include <iostream>
#include <string>
using namespace std;

void printmap(string k[100][100]) {
    for (int i=0;i<100;i++) {
        for (int j=0;j<100;j++) {
            cout << k[i][j];
        }
        cout << "" << endl;
    }
    
}
int main() 
{
    string map[77][77] = 
    {
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},
        {"K","o","w","l","o","o","n"," ","","","","Symphony of Lights","","","","","","","","","","","","",""," "," ","M","o","n","g"," ","K","o","k"," "," ","","","","","","Ladies' Market","","","","","","",""," "," "," "," "," ",""," ","S","o","h","o"," "," "," "," "," "," ","","Nor","t","h"," ","P","o","i","n","t"},
        {" "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "},
        {"x","x","x","x","x","x","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x","x","x","x","x","x","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," ","","","Wong Tai Sin","","","","","","","","",""," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","","Night Market"," "," ","","","","","","","","","","","x"," "," "," "," "," ","x"},
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},
        {" ","H","K","S","M"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," ","Golden Computer Arcade","","","","","","","","","","","","",""},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," Elements Mall","","","","","","","","","","","","",""," "," "," "," "," "," "," "," "," "," "," ","Promenade","","","","","","","",""," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},
        {" ","H","K","M","O","H"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","    Langham Place","","","","","","","","","","","","",""},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","T","s","i","m"," ","S","a"," ","T","s","u","i"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},
        {" ","H","K","M","O","A"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," ","Avenue of Stars","","","","","","","","","",""},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," ","",""," "," ","Clock Tower","","","","","","","",""," "," "," "," "," "," "," "," ","","  Lan Kwai Fong","","","","","","","","","","","","",""," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x","x","x","x","x","x","x"," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," ","x","x","x","x","x","x","x"},
        {"Repluse Bay","","","","","","","","",""," ","","x"," "," "," "," "," ","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," ","T","a","i"," ","O"," "},
        {" "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," ","","","","","","Victoria Peak","","","","","",""," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","","","T","a","i"," ","K","w","u","n  "," "," "," "," "," "," "," "," "," "," "," "},
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"," "," "," "," "," "," "," ","x"," "," "," "," "," ","x"},
        {"x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"," "," "," "," "," "," "," ","x","x","x","x","x","x","x"},   
        {" "," ","H","K","U"," "," "," "," "," "," "," ","","","Disneyland","","","","","","",""," "," ",""," "," ","Ocean Park","","","","","","","",""," "," "," "," "," "," ","M","a","n"," ","M","o"," "," "," "," ","","","","","Western Market","","","","","","","","",""," "," "," A","d","m","i","r","a","l","t","y"},
    };
    int index[29][2] =
    {
        { 2, 2 },
        { 2, 16 },
        { 2, 30 },
        { 2, 44 },
        { 2, 58 },
        { 2, 72 },
        { 10, 14 },
        { 10, 60 },
        { 12, 2 },
        { 12, 72 },
        { 19, 26 },
        { 19, 48 },
        { 23, 2 },
        { 23, 72 },
        { 28, 37 },
        { 33, 2 },
        { 33, 72 },
        { 37, 26 },
        { 37, 48 },
        { 44, 2 },
        { 44, 72 },
        { 46, 14 },
        { 46, 60 },
        { 54, 2 },
        { 54, 16 },
        { 54, 30 },
        { 54, 44 },
        { 54, 58 },
        { 54, 72 },
    };
    printmap(map);
}
