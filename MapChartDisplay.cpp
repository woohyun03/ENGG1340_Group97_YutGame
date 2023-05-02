#include "MapChartDisplay.h"
#include <string>
using namespace std;

// 2D array representing the external map
string external_map[60][77] = 
{
    // Each row of the map is represented as a string array
    // The map consists of 60 rows and 77 columns
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
