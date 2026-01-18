#include <iostream>
using namespace std;
class student{
    protected:
    int rollNO;
    public:
    void set_roll_no(int);
    void get_rol_no(void);
};
  void student:: set_roll_no(int rollNO){
    this->rollNO=rollNO;
}

    void student:: get_rol_no(){
        cout <<"The roll no of student is: "<<rollNO<<endl;
    }
    class exam:public student{
        public:
        float math;
        float computer;
        void setMarks(float, float);
        void getMarks(void);
    };
    void exam:: setMarks(float m, float c){
        math=m;
        computer=c;

    }
    void exam:: getMarks(){
        cout <<"the marks of math is: "<<math<<endl;
        cout <<"the marks of computer is:"<<computer<<endl;
    }
    class result:public exam{
        public:
        float persentage;
        void show();
    };
    void result:: show(){
        get_rol_no();
        getMarks();
        cout <<"the total percentage of student is :"<<((math+computer)/2)<<endl;
    }
    int main(){
        result r;
        r.set_roll_no(22);
        r.setMarks(90,93);
        r.show();
        return 0;
    }

