class Date
{
public:
    Date(int y, int m, int d) { year=y; month=m; day=d; }
    int getYear() { return year; }
    void setYear(int y) { year = y; }
//private:
    int year, month, day;
};
 
class Person
{
public:
    Person(int id, int year, int month, int day) {
        this->id = id;
        birthDate = new Date(year, month, day);
    }
	Person(const Person& p)
	{
		id = p.id;
		birthDate = new Date(p.birthDate->year,p.birthDate->month,p.birthDate->day);
	}
    ~Person() { delete birthDate; }
    int getId() { return id; }
    Date* getBirthDate() { return birthDate; }
private:
    int id;
    Date* birthDate;
};
