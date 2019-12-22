#include "Person.cpp"
#include "Employee.cpp"
#include "student.cpp"
#include "WorkingStudent.cpp"

int main()
{
    Person** arr;
    int count;
    cout << "How many objects to be created?" << endl;
    cin >> count;
    arr = new Person*[count];

    for (int i = 0; i < count; i++)
    {
        int selection;
        cout << "Which kind of object to be created?\n";
        cout << "1.Person\n";
        cout << "2.Student\n";
        cout << "3.Employee\n";
        cout << "4.WorkingStudent\n";
        cin >> selection;

        switch (selection)
        {
        case 1:
            arr[i] = new Person;
            break;
        case 2:
            arr[i] = new Student;
            break;
        case 3:
            arr[i] = new Employee;
            break;
        case 4:
            arr[i] = new WorkingStudent;
        default:
            break;
        }
    }

    for (int i = 0; i < count; i++)
    {
        arr[i]->Details();
        delete arr[i];
    }
    delete arr;
    return 0;
}