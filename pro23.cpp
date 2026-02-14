// array is colection of same of data if we store a large amout of data in array we can easily sortin and searching the data   a data is arange in the form of list is called one demenshion or lenear list the memory location in the array is called element the element in the aray are acess with reference  to its position of loacation is called index 
#include <iostream>
using namespace std;
int main(){
    int day=10;
    int month=5;
    int totaldays=0;
    int totalDays[12]={31, 28, 31, 30,31,30, 31,31,30,31,30,31};
    for(int i=0; i<month-1; i++){
        totaldays+=totalDays[i];

    }
    totaldays+=day;
    cout <<"user enter the month is:"<<month<<endl;
    cout <<"user enter the days is:"<<day<<endl;
    cout <<"The number of days in this year:"<<totaldays<<endl;
    return 0;
}
// a programe that input current day and month from th user it then calculate and display the total number of days in the current year till enterd date  use array