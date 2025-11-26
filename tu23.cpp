#include <iostream>
using namespace std;
class employee{
   private:
   int id;
   static int  counter;
   public:
   void getValue(){
      cout <<"enter the id of employee"<<id<<endl;
      cin >> id;
      counter++;
   }
   void setValue(){
      cout <<"the id of employee:"<<id<<"the counter of empolyee is" <<counter<<endl;
   }
   static void getcounter(){
      cout<<"enter your counter"<< counter<<endl;
   }
};
int employee:: counter=0;
int main(){
   employee haron , ali , hasan;
   employee::getcounter();
   haron.getValue();
   haron.setValue();
   employee:: getcounter();
   ali.getValue();
   ali.setValue();
   employee:: getcounter();
   hasan.getValue();
   hasan.setValue();
   return 0;
}
