

class Employee {
	// field
public:
	string name;
	int salary;
};

int main() {
	// Object
	Employee emp1;
	emp1.name = "chanadee";
	emp1.salary = 25000;
	cout << "Name " + emp1.name + ", salary " << emp1.salary << endl;
}