#include <iostream>
using namespace std;
class salary{
    private:
    int basicSalary;
    int bouns;
    int total;
    public:
    salary():basicSalary(0),bouns(0),total(0){}
    salary(int basicSalary, int bouns){
        this->basicSalary=basicSalary;
        this->bouns=bouns;
        total= basicSalary+bouns;
    }
    salary Calculate(salary& obj){
        salary result;
        result.total= basicSalary+bouns;
        // result.bouns=bouns+obj.bouns;
        // result.basicSalary= basicSalary+obj.basicSalary;
        // result.total=result.basicSalary+bouns;
        return result;

    }
    void show(){
        cout <<"total salary is:"<<total<<endl;
    }

     
};
int main(){
    // salary s1(20000, 5000),s2(10000,2000),s3; for two salary 
    salary s1(20000, 5000), s2;// for single salary
    s2=s1.Calculate(s1);
    s2.show();
    return 0;
}