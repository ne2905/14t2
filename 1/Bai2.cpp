import java.util.Scanner;

public class CongNhan implements IUtils {
    private String maCN;
    private String tenCN;
    private CaType caLamViec;
    private int tongGioLam;

    public CongNhan() {}

    public CongNhan(String maCN, String tenCN, CaType caLamViec, int tongGioLam) {
        this.maCN = maCN;
        this.tenCN = tenCN;
        this.caLamViec = caLamViec;
        this.tongGioLam = tongGioLam;
    }

    public String getMaCN() {
        return maCN;
    }

    public String getTenCN() {
        return tenCN;
    }

    public int getTongGioLam() {
        return tongGioLam;
    }

    public CaType getCaLamViec() {
        return caLamViec;
    }

    @Override
    public void inputData() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập mã CN: ");
        maCN = sc.nextLine();
        System.out.print("Nhập tên CN: ");
        tenCN = sc.nextLine();
        System.out.print("Nhập tổng giờ làm: ");
        tongGioLam = Integer.parseInt(sc.nextLine());

        System.out.print("Chọn ca làm (1 - Ca1, 2 - Ca2, 3 - Ca3): ");
        int ca = Integer.parseInt(sc.nextLine());
        switch (ca) {
            case 1 -> caLamViec = CaType.Ca1;
            case 2 -> caLamViec = CaType.Ca2;
            case 3 -> caLamViec = CaType.Ca3;
        }
    }

    @Override
    public void outputData() {
        System.out.printf("%-10s %-20s %-10s %-10d\n", maCN, tenCN, caLamViec, tongGioLam);
    }

    public String toFileString() {
        return maCN + ";" + tenCN + ";" + caLamViec + ";" + tongGioLam;
    }

    public static CongNhan fromFileString(String line) {
        String[] parts = line.split(";");
        return new CongNhan(parts[0], parts[1], CaType.valueOf(parts[2]), Integer.parseInt(parts[3]));
    }
}
