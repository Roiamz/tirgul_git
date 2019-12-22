class WorkingStudent: virtual public Employee, virtual public Person
{
    public:
    bool same_institute;
    WorkingStudent()
    {
        cout << "Same institue?: ";
        cin >> same_institute;
    }

    void Details()
    {
        Person::Details();
        cout << "Same institue?: " << same_institute << endl;
    }
};