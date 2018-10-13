class Implementor
{
public:
    virtual void OperationImp() = 0;
};

class ConcreteImplementorA : public Implementor
{
public:
    virtual void OperationImp();
};

class ConcreteImplementorB : public Implementor
{
public:
    virtual void OperationImp();
};

class Abstraction
{
public:
    Abstraction(Implementor* imp) : m_imp(imp) {}
    void Operation() { m_imp->OperationImp() };
private:
    Implementor* m_imp;
};

void Client(Implementor* imp)
{
    Abstraction* abs = new Abstraction(imp);
    abs->Operation();
}