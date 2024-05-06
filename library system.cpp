#include <iostream>
using namespace std;
class flex_employee
{
private:
    string name;
    int age;
    int salary_coefficient = 1;
    float salary = 10000;
public:
    void set_name(string name)
    {
        this->name = name;
    }
    void get_name()
    {
        cout << this->name;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    void get_age()
    {
        cout << this->age;
    }
    void set_salary_coefficient(int days)
    {
        this->salary_coefficient = days;
    }
    void get_salary()
    {
        cout << salary_coefficient * salary;
    }
};
class fixed_employee : public flex_employee
{
private:
    int years;
    float salary_after_position = years * 2000;
public:
    void set_years(int years)
    {
        this->years = years;
    }
    void get_years()
    {
        cout << this->years;
    }
    void get_salary_after_position()
    {
        cout << salary_after_position;
    }
};
string story[9];
int story_counter = 9, story_top = -1;
void push_story(string story_name)
{
    if (story_top >= story_counter - 1)
    {
        cout << "Library Is Full With Stories \n";
    }
    else
    {
        story_top++;
        story[story_top] = story_name;
        cout << "Your Pushed Story Is : " << story[story_top];
        cout << "\n \n";
    }
}
void sale_story()
{
    if (story_top <= (0.3 * (story_counter - 1)))
    {
        cout << "You Can't Sale Any Story \n";
    }
    else
    {
        story_top--;
        cout << "You sale Story succesfuly  ";
        cout << endl;
    }
}
void borrow_story()
{
    if (story_top <= -1)
    {
        cout << "Library Under Flow \n";
    }
    else
    {
        story_top--;
        cout << "You borrow Story succesfuly : ";
        cout << endl;
    }
}
void display_stories()
{
    if (story_top >= 0)
    {
        cout << "Your Stories Are : ";
        for (int i = story_top; i >= 0; i--)
        {
            cout << story[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "Your Library Is Empty \n";
    }
}
string magazine[9];
int magazine_counter = 9, magazine_top = -1;
void push_magazine(string magazine_name)
{
    if (magazine_top >= magazine_counter - 1)
    {
        cout << "Library Is Full With Stories \n";
    }
    else
    {
        magazine_top++;
        magazine[magazine_top] = magazine_name;
        cout << "Your Pushed magazine Is : " << magazine[magazine_top];
        cout << "\n \n";
    }
}
void sale_magazine()
{
    if (magazine_top <= (0.3 * (magazine_counter - 1)))
    {
        cout << "You Can't Sale Any magazine \n";
    }
    else
    {
        magazine_top--;
        cout << "You sale magazine succesfuly ";
        cout << endl;
    }
}
void borrow_magazine()
{
    if (magazine_top <= -1)
    {
        cout << "Library Under Flow \n";
    }
    else
    {
        magazine_top--;
        cout << "You borrow Magazine succesfuly ";
        cout << endl;
    }
}
void display_magazines()
{
    if (magazine_top >= 0)
    {
        cout << "Your Magazines Are : ";
        for (int i = magazine_top; i >= 0; i--)
        {
            cout << magazine[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "Your Library Is Empty \n";
    }
}
string medical_books[9];
int medical_books_counter = 9, medical_books_top = -1;
void push_medical_books(string medical_name)
{
    if (medical_books_top >= medical_books_counter)
    {
        cout << "Your Library Is Full \n";
    }
    else
    {
        medical_books_top++;
        medical_books[medical_books_top] = medical_name;
        cout << "Your Pushed Book Is : " << medical_books[medical_books_top];
        cout << "\n \n";
    }
}
void sale_medical_books()
{
    if (medical_books_top <= (0.3 * (medical_books_counter - 1)))
    {
        cout << "Sory You Can't Sale Any More \n";
        cout << endl;
    }
    else
    {
        medical_books_top--;
        cout << "You Are Sale succesfuly ";
        cout << endl;
    }
}
void borrow_medical_books()
{
    if (medical_books_top <= -1)
    {
        cout << "Library Under Flow \n";
        cout << endl;
    }
    else
    {
        medical_books_top--;
        cout << "You borrow Book succesfuly ";
        cout << endl;
    }
}
void display_medical_books()
{
    if (medical_books_top >= 0)
    {
        cout << "Your Medical Books Are : ";
        for (int i = medical_books_top; i >= 0; i--)
        {
            cout << medical_books[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "Your Library Is Empty \n";
    }
}
string engineering_books[9];
int engineering_books_counter = 9, engineering_books_top = -1;
void push_engineering_books(string engineering_name)
{
    if (engineering_books_top >= engineering_books_counter)
    {
        cout << "Your Library Is Full \n";
    }
    else
    {
        engineering_books_top++;
        engineering_books[engineering_books_top] = engineering_name;
        cout << "Your Pushed Book Is : " << engineering_books[engineering_books_top];
        cout << "\n \n";
    }
}
void sale_engineering_books()
{
    if (engineering_books_top <= (0.3 * (engineering_books_counter - 1)))
    {
        cout << "Sory You Can't Sale Any More \n";
        cout << endl;
    }
    else
    {
        engineering_books_top--;
        cout << "You Are Sale succesfuly ";
        cout << endl;
    }
}
void borrow_engineering_books()
{
    if (engineering_books_top <= -1)
    {
        cout << "Library Under Flow \n";
        cout << endl;
    }
    else
    {
        engineering_books_top--;
        cout << "You borrow Book succesfuly ";
        cout << endl;
    }
}
void display_engineering_books()
{
    if (engineering_books_top >= 0)
    {
        cout << "Your Stories Are : ";
        for (int i = engineering_books_top; i >= 0; i--)
        {
            cout << engineering_books[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "Your Library Is Empty \n";
    }
}
string religious_books[9];
int religious_books_counter = 9, religious_books_top = -1;
void push_religious_books(string religious_name)
{
    if (religious_books_top >= religious_books_counter)
    {
        cout << "Your Library Is Full \n";
    }
    else
    {
        religious_books_top++;
        religious_books[religious_books_top] = religious_name;
        cout << "Your Pushed Book Is : " << religious_books[religious_books_top];
        cout << endl;
    }
}
void sale_religious_books()
{
    if (religious_books_top <= (0.3 * (religious_books_counter - 1)))
    {
        cout << "Sory You Can't Sale Any More \n";
        cout << endl;
    }
    else
    {
        religious_books_top--;
        cout << "You Are Sale Book succesfuly ";
        cout << endl;
    }
}
void borrow_religious_books()
{
    if (religious_books_top <= -1)
    {
        cout << "Library Under Flow \n";
        cout << endl;
    }
    else
    {
        religious_books_top--;
        cout << "You borrow Book succesfuly ";
        cout << endl;
    }
}
void display_religious_books()
{
    if (religious_books_top >= 0)
    {
        cout << "Your Stories Are : ";
        for (int i = religious_books_top; i >= 0; i--)
        {
            cout << religious_books[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "Your Library Is Empty \n";
    }
}
int main()
{
    fixed_employee fix_employee;
    flex_employee flexable_employee;
    string name, work1, work2, info, main_program = "no";
    int age, salary_coefficient, years;
    string magazine_name, story_name, medical_book_name, relegious_book_name, engineering_book_name;
    int section, choice_magazine, choice_story, choice_Book, choice_medical_book, choice_engineering_book, choice_religious_book;
    string program_loop = "no", magazine_loop = "no", story_loop = "no", Book_loop = "no", medical_book_loop = "no", engineering_book_loop = "no", religious_book_loop = "no";
    string fixed_employees_names[] = { "ahmed" ,"mohamed","ebrahim" ,"ali" ,"hosam" ,"amir" ,"bahaa","mamdouh","mohsen","tayser" };
    string flex_employees_names[] = { "rezk" , "mostafa" ,"baher" ,"khalifa" , "hatem" };
    string position;
    while (main_program != "yes")
    {
        cout << "Welcome \n \n";
        cout << "Are You Flex/Fixed Employee : ";
        cin >> position;
        if (position == "Fixed")
        {
            cout << "[ahmed - mohamed - ebrahim - ali - hosam - amir - bahaa - mamdouh - mohsen - tayser] \n \n ";
            cout << "Please Enter Your Name : ";
            cin >> name;
            fix_employee.set_name(name);
            for (int i = 0; i < 9; i++)
            {
                if (fixed_employees_names[i] == name)
                {
                    cout << "                                             { Welcome : " << fixed_employees_names[i] << " }";
                    cout << "\n \n ";
                    cout << "Please Enter Your Age : ";
                    cin >> age;
                    fix_employee.set_age(age);
                    cout << endl;
                    cout << "Please Enter Your Work Years : ";
                    cin >> years;
                    fix_employee.set_years(years);
                    cout << endl;
                    cout << "Do You Want To Start Work : ";
                    cin >> work1;
                    cout << "\n \n ";
                    if (work1 == "yes")
                    {
                        while (program_loop != "yes")
                        {
                            cout << "1)Magazine Section \n \n"
                                << "2)Story Section \n \n"
                                << "3)Book Section \n \n ";
                            cin >> section;
                            cout << endl;
                            switch (section)
                            {
                            case 1:
                                while (magazine_loop != "yes")
                                {
                                    cout << "1)push Magazine \n \n"
                                        << "2)Pull Magazine \n \n"
                                        << "3)Borrow Magazine \n \n"
                                        << "4)Display Magazines \n \n";
                                    cin >> choice_magazine;
                                    cout << endl;
                                    switch (choice_magazine)
                                    {
                                    case 1:
                                        cout << "Enter Your Magazine Name : ";
                                        cin >> magazine_name;
                                        cout << endl;
                                        push_magazine(magazine_name);
                                        break;
                                    case 2:
                                        sale_magazine();
                                        break;
                                    case 3:
                                        borrow_magazine();
                                        break;
                                    case 4:
                                        display_magazines();
                                        break;
                                    default:
                                        break;
                                    }
                                    cout << "Do You Want TO Exit Magazine Section  : ";
                                    cin >> magazine_loop;
                                    cout << endl;
                                }
                                break;
                            case 2:
                                while (story_loop != "yes")
                                {
                                    cout << "1)push Story \n \n"
                                        << "2)Pull Story \n \n"
                                        << "3)Borrow Story \n \n"
                                        << "4)Display Stories \n \n";
                                    cin >> choice_story;
                                    cout << endl;
                                    switch (choice_story)
                                    {
                                    case 1:
                                        cout << "Enter Your Story Name : ";
                                        cin >> story_name;
                                        cout << endl;
                                        push_story(story_name);
                                        break;
                                    case 2:
                                        sale_story();
                                        break;
                                    case 3:
                                        borrow_story();
                                        break;
                                    case 4:
                                        display_stories();
                                        break;
                                    default:
                                        break;
                                    }
                                    cout << "Do You Want TO Exit Story Section  : ";
                                    cin >> story_loop;
                                    cout << endl;
                                }
                                break;
                            case 3:
                                while (Book_loop != "yes")
                                {
                                    cout << "1)Medical Books \n \n"
                                        << "2)Engineering Books \n \n"
                                        << "3)Religious Books \n \n";
                                    cin >> choice_Book;
                                    cout << endl;
                                    switch (choice_Book)
                                    {
                                    case 1:
                                        while (medical_book_loop != "yes")
                                        {
                                            cout << "1)push Medical Book \n \n"
                                                << "2)Pull Medical Book \n \n"
                                                << "3)Borrow Medical Book \n \n"
                                                << "4)Display Medical Book \n \n";
                                            cin >> choice_medical_book;
                                            cout << endl;
                                            switch (choice_medical_book)
                                            {
                                            case 1:
                                                cout << "Enter Your Book Name : ";
                                                cin >> medical_book_name;
                                                cout << endl;
                                                push_medical_books(medical_book_name);
                                                break;
                                            case 2:
                                                sale_medical_books();
                                                break;
                                            case 3:
                                                borrow_medical_books();
                                                break;
                                            case 4:
                                                display_medical_books();
                                                break;
                                            default:
                                                break;
                                            }
                                            cout << "Do You Want TO Exit Medical Section  : ";
                                            cin >> medical_book_loop;
                                            cout << endl;
                                        }
                                        break;
                                    case 2:
                                        while (engineering_book_loop != "yes")
                                        {
                                            cout << "1)push Engineering Book \n \n"
                                                << "2)Pull Engineering Book \n \n"
                                                << "3)Borrow Engineering Book \n \n"
                                                << "4)Display Engineering Books \n \n";
                                            cin >> choice_engineering_book;
                                            cout << endl;
                                            switch (choice_engineering_book)
                                            {
                                            case 1:
                                                cout << "Enter Your Book Name : ";
                                                cin >> engineering_book_name;
                                                cout << endl;
                                                push_engineering_books(engineering_book_name);
                                                break;
                                            case 2:
                                                sale_engineering_books();
                                                break;
                                            case 3:
                                                borrow_engineering_books();
                                                break;
                                            case 4:
                                                display_engineering_books();
                                                break;
                                            default:
                                                break;
                                            }
                                            cout << "Do You Want TO Exit Engineering Section  : ";
                                            cin >> engineering_book_loop;
                                            cout << endl;
                                        }
                                        break;
                                    case 3:
                                        while (religious_book_loop != "yes")
                                        {
                                            cout << "1)push Religious Book \n \n"
                                                << "2)Pull Religious Book \n \n"
                                                << "3)Borrow Religious Book \n \n"
                                                << "4)Display Religious Books \n \n";
                                            cin >> choice_religious_book;
                                            cout << endl;
                                            switch (choice_religious_book)
                                            {
                                            case 1:
                                                cout << "Enter Your Book Name : ";
                                                cin >> relegious_book_name;
                                                cout << endl;
                                                push_religious_books(relegious_book_name);
                                                break;
                                            case 2:
                                                sale_religious_books();
                                                break;
                                            case 3:
                                                borrow_religious_books();
                                                break;
                                            case 4:
                                                display_religious_books();
                                                break;
                                            default:
                                                break;
                                            }
                                            cout << "Do You Want TO Exit Religious Section  : ";
                                            cin >> religious_book_loop;
                                            cout << endl;
                                        }
                                        break;
                                    default:
                                        break;
                                    }
                                    cout << "Do You Want TO Exit Book Section  : ";
                                    cin >> Book_loop;
                                    cout << endl;
                                }

                            }
                            cout << "Do You Want TO Exit This Program  : ";
                            cin >> program_loop;
                            cout << endl;
                        }

                    }
                    cout << "Get More Information About Employee : ";
                    cin >> info;
                    if (info == "yes")
                    {
                        int choice;
                        cout << "1)Employee Name \n"
                            << "2)Employee Age \n"
                            << "3)Employee Experience \n"
                            << "4)Employee Salary \n "
                            << "5)Employee Salary After Position \n "
                            << "6)All Information \n ";
                        cout << "\n \n";
                        cin >> choice;
                        switch (choice)
                        {
                        case 1:
                            cout << endl;
                            cout << "Employee Name : ";
                            fix_employee.get_name();
                            cout << endl;
                            break;
                        case 2:
                            cout << endl;
                            cout << "Employee Age : ";
                            fix_employee.get_age();
                            cout << endl;
                            break;
                        case 3:
                            cout << endl;
                            cout << "Employee Experience : ";
                            fix_employee.get_years();
                            cout << endl;
                            break;
                        case 4:
                            cout << endl;
                            cout << "Employee Salary : ";
                            fix_employee.get_salary();
                            cout << endl;
                            break;
                        case 5:
                            cout << endl;
                            cout << "Employee Salary After Position : ";
                            fix_employee.get_salary_after_position();
                            cout << endl;
                            break;
                        case 6:
                            cout << "Employee Name : ";
                            fix_employee.get_name();
                            cout << "\n \n";
                            cout << "Employee Age : ";
                            fix_employee.get_age();
                            cout << "\n \n";
                            cout << "Employee Experience : ";
                            fix_employee.get_years();
                            cout << "\n \n";
                            cout << "Employee Salary : ";
                            fix_employee.get_salary();
                            cout << "\n \n";
                            cout << "Employee Salary After Position : ";
                            fix_employee.get_salary_after_position();
                            cout << "\n \n";
                            break;
                        default:
                            break;
                        }
                    }
                }

            }
        }
        else if (position == "Flex")
        {
            cout << "[ rezk - mostafa - baher - khalifa - hatem] \n \n ";
            cout << "Please Enter Your Name : ";
            cin >> name;
            flexable_employee.set_name(name);
            for (int i = 0; i < 4; i++)
            {
                if (flex_employees_names[i] == name)
                {
                    cout << "                                              { Welcome : " << flex_employees_names[i] << " }";
                    cout << "\n \n ";
                    cout << "Please Enter Your Age : ";
                    cin >> age;
                    flexable_employee.set_age(age);
                    cout << endl;
                    cout << "Please Enter Number Of Days You Have Been Worked : ";
                    cin >> salary_coefficient;
                    flexable_employee.set_salary_coefficient(salary_coefficient);
                    cout << endl;
                    cout << "Do You Want To Start Work : ";
                    cin >> work2;
                    cout << "\n \n ";
                    if (work2 == "yes")
                    {
                        while (program_loop != "yes")
                        {
                            cout << "1)Magazine Section \n \n"
                                << "2)Story Section \n \n"
                                << "3)Book Section \n \n ";
                            cin >> section;
                            cout << endl;
                            switch (section)
                            {
                            case 1:
                                while (magazine_loop != "yes")
                                {
                                    cout << "1)Borrow Magazine \n \n";
                                    cin >> choice_magazine;
                                    cout << endl;
                                    switch (choice_magazine)
                                    {
                                    case 1:
                                        cout << "Congratulation ";
                                        borrow_magazine();
                                        break;
                                    default:
                                        break;
                                    }
                                    cout << "Do You Want TO Exit Magazine Section  : ";
                                    cin >> magazine_loop;
                                    cout << endl;
                                }
                                break;
                            case 2:
                                while (story_loop != "yes")
                                {
                                    cout << "1)Borrow Story \n \n";
                                    cin >> choice_story;
                                    cout << endl;
                                    switch (choice_story)
                                    {
                                    case 1:
                                        cout << "Congratulation ";
                                        borrow_story();
                                        break;
                                    default:
                                        break;
                                    }
                                    cout << "Do You Want TO Exit Story Section  : ";
                                    cin >> story_loop;
                                    cout << endl;
                                }
                                break;
                            case 3:
                                while (Book_loop != "yes")
                                {
                                    cout << "1)Medical Books \n \n"
                                        << "2)Engineering Books \n \n"
                                        << "3)Religious Books \n \n";
                                    cin >> choice_Book;
                                    cout << endl;
                                    switch (choice_Book)
                                    {
                                    case 1:
                                        while (medical_book_loop != "yes")
                                        {
                                            cout << "1)Borrow Medical Book \n \n";
                                            cin >> choice_medical_book;
                                            cout << endl;
                                            switch (choice_medical_book)
                                            {
                                            case 1:
                                                borrow_medical_books();
                                                break;
                                            default:
                                                break;
                                            }
                                            cout << "Do You Want TO Exit Medical Section  : ";
                                            cin >> medical_book_loop;
                                            cout << endl;
                                        }
                                        break;
                                    case 2:
                                        while (engineering_book_loop != "yes")
                                        {
                                            cout << "1)push Engineering Book \n \n";
                                            cin >> choice_engineering_book;
                                            cout << endl;
                                            switch (choice_engineering_book)
                                            {
                                            case 1:
                                                borrow_engineering_books();
                                                break;
                                            default:
                                                break;
                                            }
                                            cout << "Do You Want TO Exit Engineering Section  : ";
                                            cin >> engineering_book_loop;
                                            cout << endl;
                                        }
                                        break;
                                    case 3:
                                        while (religious_book_loop != "yes")
                                        {
                                            cout << "1)push Religious Book \n \n";
                                            cin >> choice_religious_book;
                                            cout << endl;
                                            switch (choice_religious_book)
                                            {
                                            case 1:
                                                borrow_religious_books();
                                                break;
                                            default:
                                                break;
                                            }
                                            cout << "Do You Want TO Exit Religious Section  : ";
                                            cin >> religious_book_loop;
                                            cout << endl;
                                        }
                                        break;
                                    default:
                                        break;
                                    }
                                    cout << "Do You Want TO Exit Book Section  : ";
                                    cin >> Book_loop;
                                    cout << endl;
                                }

                            }
                            cout << "Do You Want TO Exit This Program  : ";
                            cin >> program_loop;
                            cout << endl;
                        }

                    }
                    cout << "Get More Information About Employee : ";
                    cin >> info;
                    if (info == "yes")
                    {
                        int choice;
                        cout << "1)Employee Name \n"
                            << "2)Employee Age \n"
                            << "3)Employee Salary \n"
                            << "4)All Information \n ";
                        cout << "\n \n";
                        cin >> choice;
                        switch (choice)
                        {
                        case 1:
                            cout << endl;
                            cout << "Employee Name : ";
                            flexable_employee.get_name();
                            break;
                        case 2:
                            cout << endl;
                            cout << "Employee Age : ";
                            flexable_employee.get_age();
                            break;
                        case 3:
                            cout << endl;
                            cout << "Employee Salary : ";
                            flexable_employee.get_salary();
                            break;
                        case 4:
                            cout << "Employee Name : ";
                            flexable_employee.get_name();
                            cout << "\n \n";
                            cout << "Employee Age : ";
                            flexable_employee.get_age();
                            cout << "\n \n";
                            cout << "Employee Salary : ";
                            flexable_employee.get_salary();
                            cout << "\n \n";
                            break;
                        default:
                            break;
                        }
                    }
                }
            }
        }
        else
        {
            cout << "Wrong Answer \n \n";
        }
        cout << "Do You Want TO Exit Main Program Section  : ";
        cin >> main_program;
        cout << endl;
    }
}
