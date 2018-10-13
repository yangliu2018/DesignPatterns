class Prototype
{
public:
    virtual void Clone() = 0;
};

class ConcretePrototype1 : Prototype
{
public:
    virtual void Clone() { return new ConcretePrototype1(*this); }
};

class ConcretePrototype2 : Prototype
{
public:
    virtual void Clone() { return new ConcretePrototype2(*this); }
};

void Client(Prototype* prototype)
{
    Prototype* p = prototype->Clone();
}