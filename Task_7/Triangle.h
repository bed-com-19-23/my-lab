#ifndef TRIANGLE_h
#define TRIANGLE_h

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;
        static int value;

    public:
        Triangle();
        Triangle(float b, float h);
        ~Triangle();

        void setBase(float b);
        void setHeight(float h);
        float getBase() const;
        float getHeight() const;
        static int getValue();
        static void setValue(int v);
    };
}

#endif
