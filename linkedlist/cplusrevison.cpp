#include <iostream>
#include <string>
using namespace std;

class Myclass{
          public:
               int myNum;
               string mystring;
               void myMethod(); 
};



class MyClass {     // The class
          public:           // Access specifier
               MyClass() {     // Constructor
                    cout << "Hello World!";
               }
     };

void Myclass::myMethod(){
     // Method/function defined inside the class
     cout << "Hello World!";
               
}

class Book{
     public:
          string title;
          string author;
          int year;

};

// class Car{
//      public:
//           int speed(int maxspeed);
// };

// int Car::speed(int maxspeed){
//      return maxspeed;
// }


class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute


    Car(){
     brand="unkown";
     model="unkown";
     year=2025;
    }
    Car(string x, string y, int z); 
//     { // Constructor with parameters
//       brand = x;
//       model = y;
//       year = z;
//     }
};

Car::Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }



class dog{
     public:
          void bark(){
               cout<<"Woof!"<<endl;
          }
};


int main()
{
     /* 
     // string &meal=food;
     // cout<<food<<endl;
     // cout<<meal<<endl; //A reference variable is an alias for an existing variable. It is created using the & operator:
     // Both food and meal refer to the same memory location. Changing one affects the other.
     */
     /* 
     to print the memory address of the variable use cout<<&variable name
     */
     // string food="pizza";
     // cout<<&food<<endl;

     // pointers 

     // string food = "Pizza";  // A food variable of type string
     // string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

     // // Output the value of food (Pizza)
     // cout << food << "\n";

     // // Output the memory address of food (0x6dfed4)
     // cout << &food << "\n";

     // // Output the memory address of food with the pointer (0x6dfed4)
     // cout << ptr << "\n";
     /*
          Create a pointer variable with the name ptr, 
          that points to a string variable, by using the asterisk sign * 
          (string* ptr). Note that the type of the pointer has to match the 
          type of the variable you're working with.
          Use the & operator to store the memory address of the 
          variable called food, and assign it to the pointer.
          Now, ptr holds the value of food's memory address.
     */
     /*
          string* means: "ptr is a pointer to a string".

          The string part tells the compiler what type of data the pointer will point to.

          The * indicates that it's a pointer, not a regular variable.


          * also acts as an dereferrance operator

     */

     // cout<<*ptr<<endl;


     // modifying the pointers 


     // string food = "Pizza";
     // string* ptr = &food;

     // // Output the value of food (Pizza)
     // cout << food << "\n";

     // // Output the memory address of food (0x6dfed4)
     // cout << &food << "\n";

     // // Access the memory address of food and output its value (Pizza)
     // cout << *ptr << "\n";

     // // Change the value of the pointer
     // *ptr = "Hamburger";

     // // Output the new value of the pointer (Hamburger)
     // cout << *ptr << "\n";

     // // Output the new value of the food variable (Hamburger)
     // cout << food << "\n";





     // cpp oops 

     

     // creating the objects for the class

     
     // cout<<obj1.myNum<<endl;

     
     // Book book1;
     // book1.title="Matilda";
     // book1.author="Ronald Dahl";
     // book1.year=1998;


     // Book book2;
     // book2.title="Tree";
     // book2.author="Shel silverstien";
     // book2.year=1964;


     
     // cout<<book1.title<<", "<<book1.author<<", "<<book1.year<<endl;
     // cout<<book2.title<<", "<<book2.author<<", "<<book2.year;


     //methods and functions in cpp

     // Myclass obj1;
     // obj1.myNum=15;
     // obj1.mystring="some text";

     // obj1.myMethod();


     // Car mycar;

     // int u=mycar.speed(200);

     // cout<<u<<endl;



     // dog mydog;
     // mydog.bark();


     //C++ CONSTRUCTORSS
     /*  A constructor is a special method that is automatically 
     called when an object of a class is created.
     */
     
          // RULES FOR CONSTRUCTORS 
     /* Constructor Rules
     The constructor has the same name as the class.
     It has no return type (not even void).
     It is usually declared public.
     It is automatically called when an object is created.
     */


     // Create an object of MyClass (this will call the constructor)
   
     MyClass myObj;
     
     
     Car mycar("MAHINDRA","BE6",2025);

     cout<<mycar.brand<<endl;
     cout<<mycar.model<<endl;
     cout<<mycar.year<<endl;




     //      Constructor Overloading
     // In C++, you can have more than one constructor in the same 
     //class. This is called constructor overloading.

     // Each constructor must have a different number or type of 
     //parameters, so the compiler knows which one to use when you create an object.

     Car car2;
     cout<<car2.brand<<endl;
     cout<<car2.model<<endl;
     cout<<car2.year<<endl;

}   


