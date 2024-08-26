#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    int length;
    int breadth;

    public:
    Rectangle(int l=0, int b=0){
        length=l;
        breadth=b;
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    void setLength(int l){
        length=l;
    }

    void setBreadth(int b){
        breadth=b;
    }
};

class Cuboid: public Rectangle{
    int height;

    public:
    Cuboid(int l=0, int b=0, int h=0){
        height=h;
        setLength(l);
        setBreadth(b);
    }

    int getHeight(){
        return height;
    }

    void setHeight(int h){
        height=h;
    }

    int volume(){
        return getLength()*getBreadth()*height;
    }
};

int main(){

    Cuboid c(2, 3, 4);
    cout<<c.volume();

    return 0;
}