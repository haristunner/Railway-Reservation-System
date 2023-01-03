#include <bits/stdc++.h>
using namespace std;

void Mainmenu();

class Application
{
public:
    Application()
    {
        Mainmenu();
    }
};

class Details
{
public:
    static int Cid, ph_no;
    static string name;
    int d, m, y;
    string gender;
    void info()
    {
        cout << "Enter the Customer id :" << endl;
        cin >> Cid;
        cout << "Enter the Customer Name :" << endl;
        cin >> name;
        cout << "Enter date of birth (d/m/y) :" << endl;
        cin >> d >> m >> y;
        cout << "Enter your Gender :" << endl;
        cin >> gender;
        cout << "Enter your Mobile Number :" << endl;
        cin >> ph_no;
    }
};

int Details::Cid;
int Details::ph_no;
string Details::name;

class Reservation
{
public:
    static int choice, charges;
    int choice1, back;
    void reserve()
    {

        cout << "Enter your Destination :" << endl;
        cout << "1. Chennai" << endl
             << "2. Bengaluru" << endl
             << "3. Mumbai" << endl
             << "4. Delhi" << endl;
        cout << "Enter your choice :" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter your Reservation train class for Chennai:" << endl;
            cout << "1. First class Train no : 208 Cost - Rs:325" << endl;
            cout << "2. Second class Train no : 208 Cost - Rs:205" << endl;
            cout << "3. Unreserved Train no : 208 Cost - Rs:125" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 325;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            else if (choice1 == 2)
            {
                charges = 205;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            else if (choice1 == 3)
            {
                charges = 125;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            break;
        }
        case 2:
        {
            cout << "Enter your Reservation train class for Bengaluru:" << endl;
            cout << "1. First class Train no : 208 Cost - Rs:375" << endl;
            cout << "2. Second class Train no : 208 Cost - Rs:235" << endl;
            cout << "3. Unreserved Train no : 208 Cost - Rs:150" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 375;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            else if (choice1 == 2)
            {
                charges = 235;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            else if (choice1 == 3)
            {
                charges = 150;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            break;
        }
        case 3:
        {
            cout << "Enter your Reservation train class for Mumbai:" << endl;
            cout << "1. First class Train no : 208 Cost - Rs:525" << endl;
            cout << "2. Second class Train no : 208 Cost - Rs:355" << endl;
            cout << "3. Unreserved Train no : 208 Cost - Rs:205" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 525;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            else if (choice1 == 2)
            {
                charges = 355;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            else if (choice1 == 3)
            {
                charges = 205;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            break;
        }
        case 4:
        {
            cout << "Enter your Reservation train class for Delhi:" << endl;
            cout << "1. First class Train no : 208 Cost - Rs:1025" << endl;
            cout << "2. Second class Train no : 208 Cost - Rs:595" << endl;
            cout << "3. Unreserved Train no : 208 Cost - Rs:385" << endl;
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 1025;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            else if (choice1 == 2)
            {
                charges = 595;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            else if (choice1 == 3)
            {
                charges = 385;
                cout << "You have successfully booked your ticket" << endl;
                cout << "Go to main menu and collect your ticket" << endl;
                cout << "Press any key to go main menu" << endl;
                cin >> back;
                if (back == 1)
                {
                    Mainmenu();
                }
                else
                {
                    Mainmenu();
                }
            }
            break;
        }
        default:
        {
            cout << "Enter a valid input ";
            reserve();
        }
        }
    }
};

int Reservation::choice;
int Reservation::charges;

class Ticket : public Reservation, Details
{
public:
    void bill()
    {
        ofstream myfile("reservation.txt");
        myfile << "_____Railway Reservation System_____" << endl;
        myfile << "_________Tickets____________" << endl;
        myfile << endl;

        myfile << "Customer Id: " << Details::Cid << endl;
        myfile << "Customer name: " << Details::name << endl;
        myfile << "Customer Gender: " << Details::ph_no << endl;

        myfile << "Details" << endl;
        string destination = "";

        if (Reservation::choice == 1)
        {
            destination = "Chennai";
        }

        else if (Reservation::choice == 2)
        {
            destination = "Bengaluru";
        }

        else if (Reservation::choice == 3)
        {
            destination = "Mumbai";
        }

        else if (Reservation::choice == 4)
        {
            destination = "Delhi";
        }

        myfile << "Destination :" << destination << endl;
        myfile << "Train Charges :" << Reservation::charges << endl;
        myfile.close();
    }
    void display()
    {
        ifstream file("reservation.txt");
        if (!file)
        {
            cout << "File Error" << endl;
        }

        string text;

        while (getline(file, text))
        {
            cout << text;
        }
        file.close();
    }
};

void Mainmenu()
{
    cout << "Welcome to Railway Reservation System" << endl;
    cout << endl;
    cout << "Enter the Option :" << endl;
    cout << "Press 1 to add the Customer details \t" << endl;
    cout << "Press 2 for Railway reservation \t" << endl;
    cout << "Press 3 for Ticket and charges \t" << endl;
    cout << "Press 4 for Exit \t" << endl;

    int choice;
    int key;
    cout << "Enter the choice : ";
    cin >> choice;

    Details d;
    Reservation r;
    Ticket t;

    switch (choice)
    {
    case 1:
    {
        cout << "Enter the information " << endl;
        d.info();
        cout << "Press any key to Mainmenu" << endl;
        cin >> key;
        if (key == 1)
        {
            Mainmenu();
        }
        else
        {
            Mainmenu();
        }
        break;
    }
    case 2:
    {
        cout << "Railway Reservation System " << endl;
        r.reserve();
        cout << "Press any key to Mainmenu" << endl;
        cin >> key;
        if (key == 1)
        {
            Mainmenu();
        }
        else
        {
            Mainmenu();
        }
        break;
    }
    case 3:
    {
        cout << "Ticket and Charges" << endl;
        t.bill();
        cout << "Press 1 to print Ticket " << endl;
        cin >> key;
        if (key == 1)
        {
            t.display();
        }
        else
        {
            Mainmenu();
        }
        break;
    }
    case 4:
    {
        cout << "Exit" << endl;
        cout << "Press any key to Mainmenu" << endl;
        cin >> key;
        if (key == 1)
        {
            Mainmenu();
        }
        else
        {
            Mainmenu();
        }
        break;
    }

    default:
    {
        cout << "Enter the correct choice !!" << endl;
        Mainmenu();
        break;
    }
    }
}

int main()
{
    Application m;
    return 0;
}
