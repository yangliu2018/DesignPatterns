class Component
{
public:
    virtual void Operatoion() = 0;
}

class ConcreteComponent : public Component
{
public:
    virtual void Operation();
};

class Decorator : public Component
{
public:
    Decorator(Component* component): m_component(component) {}
    virtual void Operatoion() { m_component->Operatoion(); };
private:
    Component* m_component;
};

class ConcreteDecoratorA : public Decorator
{
public:
    ConcreteDecoratorA(Component* component): Decorator(component) {}
    virtual void Operatoion();
private:
    int m_addedState;
};

class ConcreteDecoratorB : public Decorator
{
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {}
    virtual void Operatoion()
    {
        Decorator::Operatoion();
        AddedBehavior();
    }
    void AddedBehavior();
};

void Client()
{
    Component* component = new ConcreteComponent();
    Component* myComponent = new ConcreteDecoratorA(component);
    myComponent->Operatoion();
}