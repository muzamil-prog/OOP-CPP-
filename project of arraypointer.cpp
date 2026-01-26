#include <iostream>
using namespace std;
class student{
 private:
 string name;
 int rollNo;
 int marks[5];
 public:
 void input(){
    cout <<"enter the student name"<<endl;
    cin >>name;
    cout <<"enter rol no of the student "<<endl;
    cin >>rollNo;
    cout <<"enter the marks of the student of four subjects:"<<endl;
    for(int i=0; i<5; i++){
        cin>> marks[i];
    }
 }
 float average(){
    int sum=0;
    for(int i=0; i<5; i++){
        sum+=marks[i];

    }
     return sum/5.0;

 }
 char calculateGrade(){
    float avg=average();
    if(avg >= 90){
        return 'A';
    }
    else if(avg >=80 && avg <90){
        return 'B';
    }else if(avg >=70 && avg <80){
        return 'C';
    }else if(avg >=60 && avg <70){
        return 'D';
    }else{
        return 'F';
    }
 }
 int rollNO(){
    return rollNo;
 }
 void show(){
    cout <<"=====student details====="<<endl;
    cout <<"name:"<<name<<endl;
    cout <<"roll no:"<<rollNo<<endl;
    cout <<"marks:"<<endl;
    for(int i=0; i<5; i++){
        cout <<marks[i]<<" ";
    }
    cout <<endl;
    cout <<"average:"<<average()<<endl;
    cout <<"grades:"<<calculateGrade()<<endl;
 }
};
int main(){
    student *arr[50];
    int count=0;
    int choice;
    do{
        cout <<"=============astudents analyses==========="<<endl;
        cout <<"1... add students"<<endl;
        cout <<"2... show all students"<<endl;
        cout <<"3... search student  by rolNo"<<endl;
        cout <<"4.... delte students"<<endl;
        cout <<"5.... chect highst average"<<endl;
        cout <<"6.. exit"<<endl;
        cout <<"enter your choice"<<endl;
        cin>> choice;
        switch(choice){
            case 1:{
                arr[count]= new student;
                arr[count]->input();
                count++;
                cout <<"add student succsessfulyy:"<<endl;
                break;
            }
            case 2:{
            if(choice==0){
            cout <<"students are not avilable:"<<endl;
        }else{

            for(int i=0; i<count; i++){
                arr[i]->show();
            }

    }
    break;
}
case 3:{
    int r;
    cout <<"enter the roll no :"<<endl;
    cin>>r;
    bool found= false;
    for(int i=0; i<count; i++){
        if(arr[i]->rollNO()==r){
            arr[i]->show();
            found= true;
           
        }
          break;
       
        if(!found){

            cout <<"student is not found:"<<endl;
        }
        
    }
    break;

}
case 4:{
    int r;
    cout <<"enter the roll no you want delte:"<<endl;
    cin >>r;
    bool found= false;
    for(int i=0; i<count; i++){
        if(arr[i]->rollNO()==r){
             delete arr[i];
             for(int j=i; j=count-1; j++){
                arr[j]= arr[j+1];
                count--;
               
                
                
             }
           
             
                break;
        }
        if(!found){
            cout <<"student was not found"<<endl;
        }
        
    }
    break;
    

}
case 5:{
    if(count==0){
        cout <<"studnet are not available"<<endl;
         break;
    }
   
    int index=0;
    float maxAvg= arr[0]->average();
    for(int i=1; i<count; i++){
         float avg=arr[i]->average();
        if(avg > maxAvg){
            maxAvg= avg;
            index=i;
            
        }
    }
    cout <<"the student with highst average is:"<<endl;
    arr[index]->show();
    break;

}
case 6:{
    cout <<"exit the programe:"<<endl;
    break;
}default:
cout <<"invalid choice please try again"<<endl;


        }



    } while(choice !=6);
    return 0;
}









































































































































































































