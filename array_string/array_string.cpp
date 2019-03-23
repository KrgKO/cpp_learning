#include <iostream>
#include <vector>
#include <algorithm>

// vector can call as array
// std is standard command
using namespace std;

// std::<cmd> -> call cmd from std namespace

class Student
{
  private:
    int id;
    // public constructor
  public:
    Student(int n)
    {
        cout << "student constructor with arg " << n << "\n";
        this->id = n;
    }
};

// vector<data_type> {declare_var};
int main()
{
    // vector<Student> v; // create empty vector to hold student class
    // vector<bool> v(100, true); // init 100 elems as all true
    // vector<bool> v;
    // v.push_back(1); // add elem 1 to vector
    // v.push_back(2);

    // vector<Student> s;
    // Student std1(1); // <class> <assigned_variable>(<variable>)
    // Student std2(2);
    // Student std3(3);
    // Student std0(0);
    // s.push_back(std1); // push element to a vector
    // s.push_back(std2);
    // s.push_back(std0);
    // s.push_back(std3);

    vector<int> v;
    for (int i = 10; i >= 0; --i)
    {
        v.push_back(i);
    }

    cout << "before sort\n";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }

    sort(v.begin(), v.end());
    cout << "after sort\n";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }

    cout << "\nbefore erase " << v.size() << endl;
    v.erase(v.begin() + 1); // remove element with index 0 + 1
    // erase can be interval like erase(start, end)

    cout << "after erase " << v.size() << endl;
    return 0;
}

// https://kbtg.udemy.com/data-structures-and-algorithms-cplusplus-for-interviews/learn/v4/t/lecture/8853286?start=1 -> cont on comparator implement