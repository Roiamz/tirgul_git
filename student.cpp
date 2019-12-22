
class Student:virtual public Person
{
  public:
      int average;
      string institute;

      Student()
      {
        cout << "Average: ";
        cin >> average;
        cout << "Institute: ";
        cin >> institute;
      }
      void Details()
      {
        Person::Details();
        cout << "Average: " << average << endl;
        cout << "Institute: " << institute << endl;
      }
};
