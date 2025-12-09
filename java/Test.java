class Employee{
String name,address;
int age,no;
float salary;
Employee(String name,int age,int no,String address,float salary){
this.name=name;
this.age=age;
this.no=no;
this.address=address;
this.salary=salary;
}
void printSalary(){
System.out.println("The salary is "+salary+"\n");
}
}
class Officer extends Employee{
String spec;
Officer(String name,int age,int no,String address,float salary,String spec){
super(name,age,no,address,salary);
this.spec=spec;
}
void printInfo(){
System.out.println("Name: "+name+"\n"+"Age: "+age+"\n"+"Address: "+address+"\n"+"Number: "+no+"\n"+"Salary: "+salary+"\n"+"Specialization: "+spec+"\n");
}
}
class Manager extends Employee{
String dept;
Manager(String name,int age,int no,String address,float salary,String dept){
super(name,age,no,address,salary);
this.dept=dept;
}
void printInfo(){
System.out.println("Name: "+name+"\n"+"Age: "+age+"\n"+"Address: "+address+"\n"+"Number: "+no+"\n"+"Salary: "+salary+"\n"+"Department: "+dept+"\n");
}
}
class Test{
public static void main(String[]args){
Officer o=new Officer("Robert",21,54321,"ABC House",60000.0f,"Design");
Manager m=new Manager("Smith",23,45678,"XYZ House",15000f,"HR");
System.out.println("Officer Details");
System.out.println("_______________");
o.printInfo();
o.printSalary();
System.out.println("Manager Details");
System.out.println("_______________");
m.printInfo();
m.printSalary();
}
}