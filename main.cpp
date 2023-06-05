#include <iostream>
#include <string>

using namespace std;

class hotel
{
public:
    void welcome()
    {
        cout << " ---------------------------" << endl;
        cout << "| WELCOME TO DELTIN RESORT! |" << endl;
        cout << " ---------------------------" << endl;
        cout << "Myself DELTABOT, I will be helping you to pick out a suitable room for you" << endl
             << endl;
        cout << "So here are some of the options we have" << endl;
        cout << endl
             << "1. Regular Rooms:" << endl;
        cout << "\tThis includes Double Bed" << endl;
        cout << endl
             << "2. Deluxe Rooms:" << endl;
        cout << "\tThis includes private swimming pool and also a balcony with great view and morning breakfast" << endl;
        cout << endl
             << "3. Honeymoon Suite:" << endl;
        cout << "\tThis includes Room Decor, Free Couple Photoshoot as well as morning breakfast" << endl;
        cout << endl
             << "4. Banquet Hall (for meetings):" << endl;
        cout << "\tThis includes AC with free refreshments" << endl
             << endl;
    }

    void info()
    {
        system("cls");
        string name;
        long int addhar, mobile, age;
        cout << "Enter your details for our record" << endl
             << endl;
        cout << "Enter your first name: ";
        cin >> name;
        cout << "Enter your ID: ";
        cin >> addhar;
        cout << "Enter mobile no.: ";
        cin >> mobile;
        cout << "Enter age: ";
        cin >> age;
    }

    void feed()
    {
        int rate;
        char star = '*';
        string feedback;
        cout << endl
             << endl
             << "Lastly you could help us with a feedback" << endl
             << endl;
        cout << "Rate our services from 1[lowest] to 5[highest]: ";
        cin >> rate;
        if (rate <= 4)
        {
            cout << endl
                 << string(rate, star) << endl;
            cout << endl
                 << "How can we do better?";
            cin >> feedback;
        }
        else
        {
            cout << endl
                 << string(rate, star) << endl;
            cout << endl
                 << "THANK YOU!";
        }
    }
};

class regular : public hotel
{
public:
    float r;
    int night;
    void info_regular()
    {
        system("cls");
        cout << "As per your choice of regular room..." << endl
             << endl;
        cout << "Cost per room: 1000/- night" << endl;
        cout << "No. of people allowed per room: 2 [max]" << endl;
        cout << "How many room do you want? ";
        cin >> r;
        cout << endl
             << "For how many nights do you want? ";
        cin >> night;
    }

    void bill_regular()
    {
        string y;
        float cost = 1000, total;
        cost = cost * r * night;
        total = cost + (cost * 18) / 100;
        cout << endl
             << "Total amount to be paid including GST: " << total;
        cout << endl
             << "Do you want to reserve the room? " << endl;

        cin >> y;
        if ((y == "yes") || (y == "y") || (y == "Yes"))
        {
            cout << endl
                 << "Your booking has been made" << endl
                 << "Pay money while checking in";
        }
        else
            cout << endl
                 << "Thank you for using me";
    }
};

class deluxe : public hotel
{
public:
    float r;
    int night;
    void info_deluxe()
    {
        system("cls");
        cout << "As per your choice of deluxe room..." << endl;
        cout << "Cost per room: 3000/- night" << endl;
        cout << "No. of people allowed per room: 2 [max]" << endl;
        cout << "How many room do you want? ";
        cin >> r;
        cout << endl
             << "For how many nights do you want";
        cin >> night;
    }

    void bill_deluxe()
    {
        string y;
        float cost = 3000, total;
        cost = cost * r * night;
        total = cost + (cost * 18) / 100;
        cout << "Total amount to be paid including GST: " << total;
        cout << endl
             << "Do you want to reserve the room" << endl
             << "\t\t\t\tI can do that for you:";
        cin >> y;
        if ((y == "yes") || (y == "y") || (y == "Yes"))
            cout << endl
                 << "Your booking has been made" << endl
                 << "Pay money while checking in";
        else
            cout << endl
                 << "Thank you for using me";
    }
};

class honeymoon : public hotel
{
public:
    float r;
    int night;
    void info_honeymoon()
    {
        system("cls");
        cout << "As per your choice of honeymoon room..." << endl;
        cout << "Cost per room: 5000/- night" << endl;
        cout << "No. of people allowed per room: 2 [max]" << endl;
        cout << endl
             << "For how many nights do you want";
        cin >> night;
    }

    void bill_honeymoon()
    {
        string y;
        float cost = 5000, total;
        cost = cost * night;
        total = cost + (cost * 18) / 100;
        cout << "Total amount to be paid including GST: " << total;
        cout << endl
             << "Do you want to reserve the room" << endl
             << "\t\t\t\tI can do that for you:";
        cin >> y;
        if ((y == "yes") || (y == "y") || (y == "Yes"))
            cout << endl
                 << "Your booking has been made" << endl
                 << "Pay money while checking in";
        else
            cout << endl
                 << "Thank you for using me";
    }
};

class banquet : public hotel
{
public:
    float r;
    int days;
    void info_banquet()
    {
        system("cls");
        cout << "As per your choice of banquet room..." << endl;
        cout << "Cost per room: 2000/- hour " << endl;
        cout << "No. of people allowed per room: 10 [max]" << endl;
        cout << "How many hours do you want? ";
        cin >> r;
        cout << endl
             << "For how many nights do you want";
        cin >> days;
    }

    void bill_banquet()
    {
        string y;
        float cost = 2000, total;
        cost = cost * r * days;
        total = cost + (cost * 18) / 100;
        cout << "Total amount to be paid including GST: " << total;
        cout << endl
             << "Do you want to reserve the hall" << endl
             << "\t\t\t\tI can do that for you:";
        cin >> y;
        if ((y == "yes") || (y == "y") || (y == "Yes"))
            cout << endl
                 << "Your booking has been made!" << endl
                 << "Pay money while checking in";
        else
            cout << endl
                 << "Thank you for using me";
    }
};

int main()
{
    hotel h1;

    h1.welcome();

    int ch;
    cout << "Enter your choice according to the room you want: ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        regular r1;
        r1.info();
        r1.info_regular();
        r1.bill_regular();
        break;

    case 2:
        deluxe d1;
        d1.info();
        d1.info_deluxe();
        d1.bill_deluxe();
        break;

    case 3:
        honeymoon m1;
        m1.info();
        m1.info_honeymoon();
        m1.bill_honeymoon();
        break;

    case 4:
        banquet b1;
        b1.info();
        b1.info_banquet();
        b1.bill_banquet();
        break;

    default:
        cout << "INVALID CHOICE!";
        break;
    }

    h1.feed();
}
