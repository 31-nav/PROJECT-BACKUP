#include <iostream>
using namespace std;

class RBI {
public:
    virtual float ROI(float, float, float) = 0;
};

class PERSON {
public:
    int age;
    string name, gender, mob;
    void DETAIL() {
        cout << "Enter your Name : ";
        cin >> name;
        cout << "Enter your Age : ";
        cin >> age;
        cout << "Enter your Gender : ";
        cin >> gender;
        cout << "Enter your Mobile Number : ";
        cin >> mob;
    }
};

class BANK : public PERSON, public RBI {
public:
    float p, t, r, si;
    void getroi_detail() {
        cout << "Enter the Principal Amount : ";
        cin >> p;
        cout << "Enter the Time Period : ";
        cin >> t;
    }

    void A() {
        int acc_type;
        char input1;
        cout << "AVAILABLE BANK :  1.SBI /  2.HDFC /  3.PNB /  4.JRGB" << endl << endl;
        cout << "ENTER THE BANK YOU WANT TO OPEN ACCOUNT : ";
        cin >> input1;
        switch (input1) {
        case 'S':
            cout << endl << endl << "WELCOME IN SBI" << endl;
            cout << "Enter the type of account : Saving / Current / Fixed" << endl;
            cout << "1=SAVING  /  2=FIXED  /  3=CURRENT  " << endl;
            cout << "ENTER YOUR CHOICE : ";
            cin >> acc_type;
            switch (acc_type) {
            case 1:
                cout << endl << endl << "WELCOME IN SBI SAVING ACCOUNT" << endl;
                DETAIL();
                getroi_detail();
                si = ROI(r = 8, p, t);
                cout << "The ROI is : " << si;
                break;
            case 2:
                cout << endl << endl << "WELCOME IN SBI FIXED ACCOUNT" << endl;
                DETAIL();
                getroi_detail();
                si = ROI(r = 10, p, t);
                cout << "The ROI is : " << si;
                break;
            case 3:
                cout << endl << endl << "WELCOME IN SBI CURRENT ACCOUNT" << endl;
                DETAIL();
                getroi_detail();
                si = ROI(r = 15, p, t);
                cout << "The ROI is : " << si;
                break;
            default:
                cout << "INVALID CHOICE";
                break;
            }
            break;
        case 'H':
            cout << endl << endl << "WELCOME IN HDFC" << endl;
            cout << "Enter the type of account : Saving / Current / Fixed" << endl;
            cout << "1=SAVING  /  2=FIXED  /  3=CURRENT  " << endl;
            cout << "ENTER YOUR CHOICE : ";
            cin >> acc_type;
            switch (acc_type) {
            case 1:
                cout << endl << endl << "WELCOME IN HDFC SAVING ACCOUNT" << endl;
                DETAIL();
                getroi_detail();
                si = ROI(r = 10, p, t);
                cout << "The ROI is : " << si;
                break;
            case 2:
                cout << endl << endl << "WELCOME IN HDFC FIXED ACCOUNT" << endl;
                DETAIL();
                getroi_detail();
                si = ROI(r = 15, p, t);
                cout << "The ROI is : " << si;
                break;
            case 3:
                cout << endl << endl << "WELCOME IN HDFC CURRENT ACCOUNT" << endl;
                DETAIL();
                getroi_detail();
                si = ROI(r = 20, p, t);
                cout << "The ROI is : " << si;
                break;
            default:
                cout << "INVALID CHOICE";
                break;
            }
            break;
        case 'P':
            cout << endl << endl << "WELCOME IN PNB" << endl;
            cout << "Enter the type of account : Saving / Current / Fixed" << endl;
            cout << "1=SAVING  /  2=FIXED  /  3=CURRENT  " << endl;
            cout << "ENTER YOUR CHOICE : ";
            cin >> acc_type;
            switch (acc_type) {
            case 1:
                cout << endl << endl << "WELCOME IN PNB SAVING ACCOUNT" << endl;
                DETAIL();
                getroi_detail();
                si = ROI(r = 2.7, p, t);
                cout << "The ROI is : " << si;
                break;
            case 2:
                cout << endl << endl << "WELCOME IN PNB FIXED ACCOUNT" << endl;
                DETAIL();
                getroi_detail();
                si = ROI(r =5, p, t);
cout << "The ROI is : " << si;
break;
case 3:
cout << endl << endl << "WELCOME IN PNB CURRENT ACCOUNT" << endl;
DETAIL();
getroi_detail();
si = ROI(r = 11, p, t);
cout << "The ROI is : " << si;
break;
default:
cout << "INVALID CHOICE";
break;
}
break;
case 'J':
cout << endl << endl << "WELCOME IN JRGB" << endl;
cout << "Enter the type of account : Saving / Current / Fixed" << endl;
cout << "1=SAVING / 2=FIXED / 3=CURRENT " << endl;
cout << "ENTER YOUR CHOICE : ";
cin >> acc_type;
switch (acc_type) {
case 1:
cout << endl << endl << "WELCOME IN JRGB SAVING ACCOUNT" << endl;
DETAIL();
getroi_detail();
si = ROI(r = 5.4, p, t);
cout << "The ROI is : " << si;
break;
case 2:
cout << endl << endl << "WELCOME IN JRGB FIXED ACCOUNT" << endl;
DETAIL();
getroi_detail();
si = ROI(r = 8.8, p, t);
cout << "The ROI is : " << si;
break;
case 3:
cout << endl << endl << "WELCOME IN JRGB CURRENT ACCOUNT" << endl;
DETAIL();
getroi_detail();
si = ROI(r = 12, p, t);
cout << "The ROI is : " << si;
break;
default:
cout << "INVALID CHOICE";
break;
}
break;
default:
cout << "INVALID CHOICE";
break;
}
}
float ROI(float r, float p, float t) override {
    float si = 0.0;
    si = (p * r * t) / 100;
    return si;
}
};

int main() {
BANK B;
B.A();
}

