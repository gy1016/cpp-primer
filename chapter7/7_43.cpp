class Nodefault
{
public:
    Nodefault(int i) {}
};

class C
{
public:
    C() : def(0) {} // C的默认构造函数

private:
    Nodefault def;
};