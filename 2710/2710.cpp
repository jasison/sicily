#include <iostream>

using namespace std;

class numCal {
public:
    numCal(int [], int); //    ���캯�����βηֱ����������顢���鳤��
    numCal(const numCal&); //�������캯��
    ~numCal();                      //      ����������Ҫ����ͷ��ڴ�Ĳ���
    int sum();              //      ��̬����arr��size��Ԫ��ֵ��
    numCal& operator=(const numCal&); //=���������
	numCal& operator++();                    //ǰ��++��������أ�ʹ��++A��A.arr��ÿ��Ԫ��ֵ��1(AΪnumCal���͵Ķ�����ͬ)��
    numCal operator++(int);                  //����++��������أ�ʹ��A++��A.arr��ÿ��Ԫ��ֵ��1��
private:
    int size;                       //      ����arrԪ�ظ���
    int *arr;                      //      ��̬����
};

numCal::numCal(int a[],int s)
{
	arr = new int[s];
	for(int i = 0; i < s; i++){
		arr[i] = a[i];
	}
	size = s;
}

numCal::numCal(const numCal& n)
{
	size = n.size;
	arr = new int[n.size];
	for(int i = 0; i < size; i++){
		arr[i] = n.arr[i];
	}
}

numCal::~numCal()
{
	delete [] arr;
}

int numCal::sum()
{
	int s = 0;
	for(int i = 0; i < size; i++){
		s += arr[i];
	}
	return s;
}

numCal& numCal::operator=(const numCal& n)
{
	size = n.size;
	arr = new int[n.size];
	for(int i = 0; i < size; i++){
		arr[i] = n.arr[i];
	}
	return *this;
}

numCal& numCal::operator++()
{
	for(int i = 0; i < size; i++){
		++arr[i];
	}
	return *this;
}

numCal numCal::operator++(int)
{
	numCal b = *this;
	for(int i = 0; i < size; i++){
		arr[i]++;
	}
	return b;
}

int main()
{
	int a[5] = {1,2,3,4,5};
	numCal c(a,5);
	cout << c.sum() << endl;
	numCal d(c++);
	cout << d.sum() << endl;
	cout << c.sum() << endl;
	++c;
	cout << c.sum() << endl;

	return 0;
}