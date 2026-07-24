#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void draw()
        {
            cout << "Generic drawing... " << endl;
        }
};

class Circle : public Shape 
{
    public:
        virtual void draw()
        {
            cout << "Circle drawing..." << endl;
        }
};

class Rectange : public Shape
{
    public:
        void draw()
        {
            cout << "Rectangle drawing..." << endl;
        }
};

void ShapeDrawing(Shape *s)
{
    s->draw();
}


int main() {
    Circle c;
    c.draw();
    ShapeDrawing(&c);
    return 0;
}