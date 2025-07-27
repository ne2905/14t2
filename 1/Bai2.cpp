import java.util.*;

public class TaiLieuDemo {
    static Scanner sc = new Scanner(System.in);
    static ArrayList<TaiLieu> ds = new ArrayList<>();

    public static void main(String[] args) {
        int chon;
        do {
            System.out.println("====== MENU ======");
            System.out.println("1. Nhập dữ liệu mẫu");
            System.out.println("2. Nhập và in hàng");
            System.out.println("3. Sửa tài liệu");
            System.out.println("4. In theo phân loại");
            System.out.println("0. Thoát");
            System.out.print("Chọn: ");
            chon = Integer.parseInt(sc.nextLine());

            switch (chon) {
                case 1: nhapMau(); break;
                case 2: nhapThem(); break;
                case 3: suaThongTin(); break;
                case 4: inTheoLoai(); break;
            }
        } while (chon != 0);
    }

    static void nhapMau() {
        ds.clear();
        ds.add(new Sach("S001", "Java cơ bản", 2020, 150));
        ds.add(new Sach("S002", "OOP nâng cao", 2018, 400));
        ds.add(new Sach("S003", "Cấu trúc DL", 2021, 300));
        inDanhSach();
    }

    static void nhapThem() {
        System.out.print("Nhập số lượng tài liệu muốn thêm: ");
        int n = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < n; i++) {
            System.out.println("Tài liệu thứ " + (i + 1));
            System.out.print("Mã TL: ");
            String ma = sc.nextLine();
            if (ma.trim().isEmpty()) {
                System.out.println("Mã tài liệu không được để trống!");
                continue;
            }

            boolean tonTai = false;
            for (TaiLieu tl : ds) {
                if (tl.maTL.equalsIgnoreCase(ma)) {
                    tonTai = true;
                    break;
                }
            }

            if (tonTai) {
                System.out.println("Mã tài liệu đã tồn tại!");
                continue;
            }

            System.out.print("Tên TL: ");
            String ten = sc.nextLine();
            System.out.print("Năm XB: ");
            int nam = Integer.parseInt(sc.nextLine());
            System.out.print("Số trang: ");
            int trang = Integer.parseInt(sc.nextLine());

            TaiLieu tlMoi = new Sach(ma, ten, nam, trang);
            if (tlMoi.kiemTraSoTrang()) {
                ds.add(tlMoi);
            }
        }

        inDanhSach();
    }

    static void suaThongTin() {
        System.out.print("Nhập năm xuất bản muốn kiểm tra: ");
        int nam = Integer.parseInt(sc.nextLine());
        boolean found = false;

        for (TaiLieu tl : ds) {
            if (tl.namXB == nam) {
                found = true;
                System.out.println("Tài liệu trùng năm xuất bản:");
                tl.inThongTin();
                System.out.print("Nhập tên mới: ");
                tl.tenTL = sc.nextLine();
                System.out.print("Nhập số trang mới: ");
                tl.soTrang = Integer.parseInt(sc.nextLine());
                tl.kiemTraSoTrang();
            }
        }

        if (!found) {
            System.out.println("Không có tài liệu nào trùng năm xuất bản.");
        } else {
            System.out.println("Danh sách sau khi sửa:");
            inDanhSach();
        }
    }

    static void inTheoLoai() {
        System.out.println("Tài liệu theo phân loại:");
        inDanhSach();
    }

    static void inDanhSach() {
        System.out.printf("%-10s %-20s %-10s %-10s %-10s\n", "Mã TL", "Tên TL", "Năm XB", "Số Trang", "Loại");
        for (TaiLieu tl : ds) {
            tl.inThongTin();
        }
    }
}
