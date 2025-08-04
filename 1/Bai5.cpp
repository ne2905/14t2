import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        CongNhanControl control = new CongNhanControl();
        Scanner sc = new Scanner(System.in);

        // 1. Fake + hiển thị
        System.out.println("🧪 FAKE DATA:");
        control.fakeData();
        control.getData();

        // 2. Thêm n công nhân
        System.out.print("\nNhập số CN muốn thêm: ");
        int n = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < n; i++) {
            System.out.printf("\n-- Nhập công nhân %d --\n", i + 1);
            CongNhan cn = new CongNhan();
            cn.inputData();
            control.addData(cn);
        }
        System.out.println("\n📋 Danh sách sau khi thêm:");
        control.getData();

        // 3. Sắp xếp + hiển thị
        System.out.println("\n🔃 Danh sách sau khi sắp xếp:");
        control.sortData();
        control.getData();

        // 4. Ghi file
        control.saveToFile("congnhan.txt");

        // 5. Đọc lại file để kiểm tra
        System.out.println("\n📂 Đọc lại file:");
        control.readFromFile("congnhan.txt");
        control.getData();
    }
}
