#include<iostream>
using namespace std;

class ArrayOperation 
{
public:
    virtual void performOperation() = 0;
};

class Unique : public ArrayOperation 
{
private:
    int *ptrw, z;

public:
    void set(int a[], int size)
    {
        ptrw = a;
        z = size;
    }

    void performOperation() override
    {
        for (int i = 0; i < z; i++)
        {
            bool isDuplicate = false;
            for (int j = 0; j < z; j++)
            {
                if (i != j && ptrw[i] == ptrw[j])
                {
                    isDuplicate = true;
                    break;
                }
            }
            if (!isDuplicate)
            {
                cout << ptrw[i] << endl;
            }
        }
    }
};

int main()
{
    int size, z;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    Unique d;
    d.set(a, size);
    d.performOperation();

    return 0;
}

