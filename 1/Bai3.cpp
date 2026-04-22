static void Display(List<GeneralPractitioner> list)
{
    if (list.Count == 0)
    {
        Console.WriteLine("Danh sach rong!");
        return;
    }

    Console.WriteLine("\n---------------------------------------------------------------------------------------------------------------");
    Console.WriteLine("{0,-10} {1,-20} {2,-10} {3,-15} {4,-10} {5,-15} {6,-15}",
        "ID", "Ten", "GioiTinh", "ChuyenKhoa", "KinhNghiem", "SDT", "GioLam");
    Console.WriteLine("---------------------------------------------------------------------------------------------------------------");

    foreach (var x in list)
    {
        x.Output();
        Console.WriteLine();
    }

    Console.WriteLine("---------------------------------------------------------------------------------------------------------------");
}
