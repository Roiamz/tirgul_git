class Employee : virtual public Person
{
  public:
    float salary;

    Employee()
    {
      cout << "Salary: ";
      cin >> salary;
    }

    void Details()
    {
      Person::Details();
      cout << "Salary: " << salary;
    }
};
