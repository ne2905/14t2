public abstract class TaiLieu {
    protected String maTL;
    protected String tenTL;
    protected int namXB;
    protected int soTrang;

    public TaiLieu() {
        this.maTL = "";
        this.tenTL = "";
        this.namXB = 2020;
        this.soTrang = 1;
    }

    public TaiLieu(String maTL, String tenTL, int namXB, int soTrang) {
        this.maTL = maTL;
        this.tenTL = tenTL;
        this.namXB = namXB;
        this.soTrang = soTrang;
    }

    public boolean kiemTraSoTrang() {
        if (soTrang == 0) {
            System.out.println("Số trang bằng 0, vui lòng kiểm tra lại!");
            return false;
        } else if (soTrang < 0) {
            System.out.println("Dữ liệu không hợp lệ (số trang < 0)!");
            return false;
        } else if (soTrang > 500) {
            System.out.println("Tài liệu có số trang quá dày!");
        }
        return true;
    }

    public abstract String loaiTaiLieu(); // để phân loại khi hiển thị

    public void inThongTin() {
        System.out.printf("%-10s %-20s %-10d %-10d %-10s\n", maTL, tenTL, namXB, soTrang, loaiTaiLieu());
    }

    // Getters và Setters
    // ...
}
