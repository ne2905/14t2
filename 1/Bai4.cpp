import java.io.*;
import java.util.*;

public class CongNhanControl {
    private ArrayList<CongNhan> list = new ArrayList<>();

    public void addData(CongNhan n) {
        if (n.getTenCN() == null || n.getTenCN().isEmpty() || n.getTongGioLam() < 0) {
            System.out.println("❌ Dữ liệu không hợp lệ!");
            return;
        }
        for (CongNhan cn : list) {
            if (cn.getMaCN().equalsIgnoreCase(n.getMaCN())) {
                System.out.println("⚠️ Trùng mã CN, không thêm!");
                return;
            }
        }
        list.add(n);
    }

    public void getData() {
        if (list.isEmpty()) {
            System.out.println("📭 Danh sách rỗng!");
            return;
        }
        System.out.printf("%-10s %-20s %-10s %-10s\n", "Mã CN", "Tên CN", "Ca", "Giờ làm");
        for (CongNhan n : list) {
            n.outputData();
        }
    }

    public void fakeData() {
        list.add(new CongNhan("CN01", "Nguyễn Văn A", CaType.Ca1, 40));
        list.add(new CongNhan("CN02", "Trần Thị B", CaType.Ca2, 50));
        list.add(new CongNhan("CN03", "Lê Văn C", CaType.Ca3, 60));
    }

    public void sortData() {
        Collections.sort(list, (a, b) -> {
            int nameCompare = a.getTenCN().compareToIgnoreCase(b.getTenCN());
            if (nameCompare == 0) {
                return a.getCaLamViec().compareTo(b.getCaLamViec());
            }
            return nameCompare;
        });
    }

    public void saveToFile(String fileName) {
        try (PrintWriter pw = new PrintWriter(new FileWriter(fileName))) {
            for (CongNhan n : list) {
                pw.println(n.toFileString());
            }
            System.out.println("✅ Lưu file thành công!");
        } catch (IOException e) {
            System.out.println("❌ Ghi file lỗi: " + e.getMessage());
        }
    }

    public void readFromFile(String fileName) {
        list.clear();
        try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
            String line;
            while ((line = br.readLine()) != null) {
                list.add(CongNhan.fromFileString(line));
            }
            System.out.println("✅ Đọc file thành công!");
        } catch (IOException e) {
            System.out.println("❌ Đọc file lỗi: " + e.getMessage());
        }
    }
}
