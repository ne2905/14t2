public class Sach extends TaiLieu {
    public Sach(String maTL, String tenTL, int namXB, int soTrang) {
        super(maTL, tenTL, namXB, soTrang);
    }

    @Override
    public void inThongTin() {
        System.out.printf("%-10s %-20s %-10d %-10d %-10s\n", 
            maTL, tenTL, namXB, soTrang, "Sách");
    }

    @Override
    public boolean kiemTraSoTrang() {
        if (soTrang <= 0) {
            System.out.println("Số trang phải lớn hơn 0!");
            return false;
        }
        return true;
    }

    @Override
    public String loaiTaiLieu() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
}
