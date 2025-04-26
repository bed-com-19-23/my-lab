#ifndef Circle_h
#define Circle_h

namespace shapes {
    class Circle {
    private:
        float radius;
    public:
        Circle();
        Circle(float r);
        ~Circle();

        void setRadius(float r);
        float getRadius() const;
        float calculateArea() const;
    };
}

#endif
