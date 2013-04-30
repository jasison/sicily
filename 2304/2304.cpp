#include <iostream>

using namespace std;

class Object {
public:
    Object(int i) {
		flag = true;
        id = i;
        count++;
        cout<<"Object "<<id<<" is created, we've got "<<count<<" object(s) now!"<<endl;
    }
    ~Object() { 
		if(flag){
			count--;
			cout<<"Object "<<id<<" is deleted, we've got "<<count<<" object(s) now!"<<endl;
			flag = false;
		}
    }
private:
    int id;
	bool flag;
    static int count;
};
int Object::count = 0;

int main()
{
	Object ob1(1);
	Object ob2(2);
	Object ob3(3);
	ob3.~Object();
	ob2.~Object();
	Object ob4(4);

	return 0;
}