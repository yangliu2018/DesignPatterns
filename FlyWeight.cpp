class Flyweight
{
public:
    virtual void Operation() = 0;
};

class ConcreteFlyweight : public Flyweight
{
public:
    virtual void Operation();
private:
    static int m_state;
};

class UnsharedConcreteFlyweight : public Flyweight
{
public:
    virtual void Operation();
private:
    int m_state;
};

class FlyweightFactory
{
public:
    Flyweight* GetFlyweight(int key);
};

void Client()
{
    int key = 0;
    FlyweightFactory factory;
    Flyweight* flyweight = factory->GetFlyweight(key);
}