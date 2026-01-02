#include<iostream>
using namespace std;
class complex {
private:
    int real;
    int img;
public:
 complex(int r=0,int i=0){
    real=r;
    img=i;
}
 complex add(complex c){
    complex temp;
    temp.real=real + c.real;
    temp.img=img+c.img;
    return temp;
}
void display(){
    cout<<real<<" + "<<img<<"i"<<endl;
}
};
int main(){
    complex c1(10,5),c2(3,4),c3;
    c3=c1.add(c2);
    cout<<"first complex number is";
    c1.display();
    cout<<"second complex number is";
    c2.display();
    cout<<"sum";
    c3.display();

}