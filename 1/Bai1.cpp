using System;
using System.Collections.Generic;
using System.Linq;

//1. Doctor: lớp cơ sở
class Doctor
{
    protected string id, fullName, gender, specialty, mobile;
    protected int experience;

    public string GetID()
    {
        return id;
    }

    public int GetExperience()
    {
        return experience;
    }

    public virtual void Input()
    {
        Console.Write("Nhap ID: ");
        id = Console.ReadLine();

        Console.Write("Nhap ho ten: ");
        fullName = Console.ReadLine();

        Console.Write("Nhap gioi tinh: ");
        gender = Console.ReadLine();

        Console.Write("Nhap chuyen khoa: ");
        specialty = Console.ReadLine();

        Console.Write("Nhap so nam kinh nghiem: ");
        experience = int.Parse(Console.ReadLine());

        Console.Write("Nhap so dien thoai: ");
        mobile = Console.ReadLine();
    }

    public virtual void Output()
    {
        Console.Write(id + "\t" +
                      fullName + "\t" +
                      gender + "\t" +
                      specialty + "\t" +
                      experience + "\t" +
                      mobile);
    }
}

//2. GeneralPractitioner: kế thừa Doctor
class GeneralPractitioner : Doctor
{
    private string workingHours;

    public override void Input()
    {
        base.Input();
        Console.Write("Nhap gio lam viec: ");
        workingHours = Console.ReadLine();
    }

    public override void Output()
    {
        base.Output();
        Console.WriteLine("\t" + workingHours);
    }
}

//3. Program: chương trình chính
class Program
{
    static List<GeneralPractitioner> ds = new List<GeneralPractitioner>();

    // kiểm tra trùng ID
    static bool IsDuplicate(string id)
    {
        foreach (var x in ds)
        {
            if (x.GetID() == id)
                return true;
        }
        return false;
    }

    // thêm
    static void Add()
    {
        GeneralPractitioner gp = new GeneralPractitioner();
        gp.Input();

        if (IsDuplicate(gp.GetID()))
        {
            Console.WriteLine("ID bi trung! Khong them duoc.");
            return;
        }

        ds.Add(gp);
        Console.WriteLine("Them thanh cong!");
    }

    // hiển thị
    static void Display()
    {
        if (ds.Count == 0)
        {
            Console.WriteLine("Danh sach rong!");
            return;
        }

        Console.WriteLine("ID\tTen\tGioiTinh\tChuyenKhoa\tKinhNghiem\tSDT\tGioLam");

        foreach (var x in ds)
        {
            x.Output();
        }
    }

    // sắp xếp giảm dần theo experience
    static void SortList()
    {
        ds = ds.OrderByDescending(x => x.GetExperience()).ToList();
        Console.WriteLine("Da sap xep!");
    }

    static void Main(string[] args)
    {
        int choice;

        do
        {
            Console.WriteLine("\n===== MENU =====");
            Console.WriteLine("1. Them");
            Console.WriteLine("2. Hien thi danh sach");
            Console.WriteLine("3. Sap xep theo kinh nghiem");
            Console.WriteLine("0. Thoat");
            Console.Write("Chon: ");

            choice = int.Parse(Console.ReadLine());

            switch (choice)
            {
                case 1:
                    Add();
                    break;
                case 2:
                    Display();
                    break;
                case 3:
                    SortList();
                    Display();
                    break;
                case 0:
                    Console.WriteLine("Thoat chuong trinh!");
                    break;
                default:
                    Console.WriteLine("Lua chon khong hop le!");
                    break;
            }

        } while (choice != 0);
    }
} 
