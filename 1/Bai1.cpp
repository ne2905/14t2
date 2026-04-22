#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//1. Doctor: lớp cơ sở
class Doctor {
protected:
    string id, fullName, gender, specialty, mobile;
    int experience;

public:
    Doctor() {}

    string getID() {
        return id;
    }

    int getExperience() {
        return experience;
    }

    virtual void input() {
        cout << "Nhap ID: ";
        cin >> id;
        cin.ignore();

        cout << "Nhap ho ten: ";
        getline(cin, fullName);

        cout << "Nhap gioi tinh: ";
        getline(cin, gender);

        cout << "Nhap chuyen khoa: ";
        getline(cin, specialty);

        cout << "Nhap so nam kinh nghiem: ";
        cin >> experience;
        cin.ignore();

        cout << "Nhap so dien thoai: ";
        getline(cin, mobile);
    }

    virtual void output() {
        cout << id << "\t"
             << fullName << "\t"
             << gender << "\t"
             << specialty << "\t"
             << experience << "\t"
             << mobile;
    }
};

//2. GeneralPractitioner: kế thừa từ Doctor
class GeneralPractitioner : public Doctor {
private:
    string workingHours;

public:
    void input() override {
        Doctor::input();
        cout << "Nhap gio lam viec: ";
        getline(cin, workingHours);
    }

    void output() override {
        Doctor::output();
        cout << "\t" << workingHours << endl;
    }
};

//3. Kiểm tra trùng ID
bool isDuplicate(vector<GeneralPractitioner> &ds, string id) {
    for (auto &x : ds) {
        if (x.getID() == id)
            return true;
    }
    return false;
}

//4. Thêm bác sĩ
void add(vector<GeneralPractitioner> &ds) {
    GeneralPractitioner gp;
    gp.input();

    if (isDuplicate(ds, gp.getID())) {
        cout << "ID bi trung! Khong them duoc.\n";
        return;
    }

    ds.push_back(gp);
    cout << "Them thanh cong!\n";
}

//5. Hiển thị danh sách
void display(vector<GeneralPractitioner> ds) {
    if (ds.empty()) {
        cout << "Danh sach rong!\n";
        return;
    }

    cout << "ID\tTen\tGioiTinh\tChuyenKhoa\tKinhNghiem\tSDT\tGioLam\n";

    for (auto &x : ds) {
        x.output();
    }
}

//6. Sắp xếp theo kinh nghiệm giảm dần
void sortList(vector<GeneralPractitioner> &ds) {
    sort(ds.begin(), ds.end(), [](GeneralPractitioner a, GeneralPractitioner b) {
        return a.getExperience() > b.getExperience();
    });

    cout << "Da sap xep!\n";
}

//7. Menu chương trình
void menu() {
    vector<GeneralPractitioner> ds;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Them\n";
        cout << "2. Hien thi danh sach\n";
        cout << "3. Sap xep theo kinh nghiem\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> choice;

        switch (choice) {
        case 1:
            add(ds);
            break;
        case 2:
            display(ds);
            break;
        case 3:
            sortList(ds);
            display(ds);
            break;
        case 0:
            cout << "Thoat chuong trinh!\n";
            break;
        default:
            cout << "Lua chon khong hop le!\n";
        }

    } while (choice != 0);
}

//8. Main
int main() {
    menu();
    return 0;
} 
