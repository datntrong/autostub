#include <iostream>
using namespace std;
class A_virtual
{
    int i;

public:
    virtual int ret0_virtual(int a)
    {
        cout << "I am A_ret0_virtual" << endl;
        return 0;
    }
    virtual int ret1_virtual()
    {
        cout << "I am A_ret1_virtual" << endl;
        return 1;
    }
    virtual int ret5_virtual()
    {
        cout << "I am A_ret1_virtual" << endl;
        return 5;
    }
};

class B_virtual : A_virtual
{
public:
    int ret0_virtual(int a)
    {
        cout << "I am A_ret0_virtual" << endl;
        return 0;
    }
    int ret1_virtual()
    {
        cout << "I am A_ret1_virtual" << endl;
        return 1;
    }
    int ret2_virtual()
    {
        cout << "I am A_ret2_virtual" << endl;
        return 2;
    }
};

class C_virtual : B_virtual
{
public:
    int ret0_virtual(int *a)
    {
        cout << "I am A_ret0_virtual" << endl;
        return 0;
    }
    int ret1_virtual()
    {
        cout << "I am A_ret1_virtual" << endl;
        return 1;
    }
    int ret2_virtual(int a)
    {
        cout << "I am A_ret2_virtual" << endl;
        return 2;
    }
};

class D_virtual : C_virtual, A_virtual
{
public:
    int ret0_virtual(int *a)
    {
        cout << "I am A_ret0_virtual" << endl;
        return -1;
    }
    int ret1_virtual()
    {
        cout << "I am A_ret1_virtual" << endl;
        return 0;
    }
    int ret2_virtual(int a)
    {
        cout << "I am A_ret2_virtual" << endl;
        return 1;
    }
};

int uutFuncvirtual(int a, double b)
{
    A_virtual objA;
    if (objA.ret0_virtual(a))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    if (objA.ret1_virtual())
    {
        cout << 2 << endl;
    }
    else
    {
        cout << -2 << endl;
    }
    return 0;
    //   obj.fun1(); // Allowed
    //   obj.fun2(); // Allowed
    //   A::fun1(); // Error!
    //   A::fun2(); // Allowed
}

int uutFuncvirtual_nonpara(int a, double b)
{
    A_virtual objA;

    if (objA.ret1_virtual())
    {
        cout << 2 << endl;
    }
    else
    {
        cout << -2 << endl;
    }

    if (objA.ret5_virtual() == 6)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << -2 << endl;
    }
    return 0;
    //   obj.fun1(); // Allowed
    //   obj.fun2(); // Allowed
    //   A::fun1(); // Error!
    //   A::fun2(); // Allowed
}

int multipleReferencevirtual(int a, double b)
{
    A_virtual objA;
    B_virtual obj;
    if (obj.ret0_virtual(a) == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    if (obj.ret0_virtual(a) == 2)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << -2 << endl;
    }

    if (objA.ret1_virtual() == 6)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << -2 << endl;
    }
    return 0;
}

int multilevelInheritance(int *a, int b)
{
    C_virtual objC;
    if (objC.ret0_virtual(a) == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    if (objC.ret1_virtual() == 1)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << -2 << endl;
    }

    if (objC.ret2_virtual(b) == 2)
    {
        cout << 3 << endl;
    }
    else
    {
        cout << -3 << endl;
    }
    return 0;
}

int multipleInheritance(int *a, int b)
{
    D_virtual objD;
    if (objD.ret0_virtual(a) == -1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    if (objD.ret1_virtual() == 0)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << -2 << endl;
    }

    if (objD.ret2_virtual(b) == 1)
    {
        cout << 3 << endl;
    }
    else
    {
        cout << -3 << endl;
    }
    return 0;
}