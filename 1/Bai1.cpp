import java.io.*;
import java.util.*;

public class CongNhanControl {
    private ArrayList<CongNhan> list = new ArrayList<>();
    private final Scanner sc = new Scanner(System.in);

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
        // Có thể comment 3 dòng này để test lỗi
        list.add(new CongNhan("CN01", "Nguyễn Văn A", CaType.Ca1, 40));
        list.add(new CongNhan("CN02", "Trần Thị B", CaType.Ca2, 50));
        list.add(new CongNhan("CN03", "Lê Văn C", CaType.Ca3, 60));

        if (list.isEmpty()) {
            System.err.println("❌ fakeData() chưa có dữ liệu!");
            throw new IllegalStateException("Danh sách công nhân bị rỗng!");
        }
    }

    // ✅ Ghi file với xác nhận ghi đè nếu file tồn tại
    public void saveToFile(String fileName) {
        File file = new File(fileName);
        if (file.exists()) {
            System.out.print("\n⚠️ File \"" + fileName + "\" đã tồn tại. Ghi đè? (y/n): ");
            String choice = sc.nextLine().trim();
            if (!choice.equalsIgnoreCase("y")) {
                System.out.println("❌ Không ghi file.");
                return;
            }
        }

        try (PrintWriter pw = new PrintWriter(new FileWriter(file))) {
            for (CongNhan cn : list) {
                pw.println(cn.toFileString());
            }
            System.out.println("✅ Ghi file thành công: " + fileName);
        } catch (IOException e) {
            System.err.println("❌ Lỗi ghi file: " + e.getMessage());
        }
    }

    // ✅ Đọc file: chỉ đọc nếu file tồn tại
    public void readFromFile(String fileName) {
        File file = new File(fileName);
        if (!file.exists()) {
            System.err.println("❌ File \"" + fileName + "\" không tồn tại!");
            return;
        }

        list.clear();
        try (BufferedReader br = new BufferedReader(new FileReader(file))) {
            String line;
            while ((line = br.readLine()) != null) {
                list.add(CongNhan.fromFileString(line));
            }
            System.out.println("✅ Đọc file thành công: " + fileName);
        } catch (IOException e) {
            System.err.println("❌ Lỗi đọc file: " + e.getMessage());
        }
    }
}
