using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows;

namespace WpfApp_QuanLyBacSi
{
    // Lớp đối tượng dữ liệu BacSi
    public class BacSi
    {
        public string MaBS { get; set; }
        public string HoTen { get; set; }
        public int SoNgayTruc { get; set; }
        public double BacLuong { get; set; }
        public string Khoa { get; set; }
    }

    public partial class MainWindow : Window
    {
        // Danh sách lưu trữ dữ liệu gốc
        List<BacSi> danhSachBacSi = new List<BacSi>();

        public MainWindow()
        {
            InitializeComponent();
        }

        // Câu 2a & Câu 3: Thêm dữ liệu và bẫy 3 lỗi ngoại lệ
        private void btnThem_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                // [YÊU CẦU 1]: Kiểm tra dữ liệu rỗng
                if (string.IsNullOrWhiteSpace(txtMa.Text) || string.IsNullOrWhiteSpace(txtHoTen.Text))
                {
                    throw new Exception("Lỗi: Mã bác sĩ và Họ tên không được để trống!");
                }

                // [YÊU CẦU 2]: Kiểm tra định dạng số nguyên không âm cho Số ngày trực
                if (!int.TryParse(txtNgayTruc.Text.Trim(), out int ngayTruc) || ngayTruc < 0)
                {
                    throw new Exception("Lỗi: Số ngày trực phải là số nguyên dương (hoặc bằng 0)!");
                }

                // [YÊU CẦU 3]: Kiểm tra định dạng số thực lớn hơn 0 cho Bậc lương
                if (!double.TryParse(txtBacLuong.Text.Trim(), out double bacLuong) || bacLuong <= 0)
                {
                    throw new Exception("Lỗi: Bậc lương phải là số thực lớn hơn 0!");
                }

                // Bẫy lỗi logic nâng cao: Trùng mã bác sĩ
                if (danhSachBacSi.Any(bs => bs.MaBS.Equals(txtMa.Text.Trim(), StringComparison.OrdinalIgnoreCase)))
                {
                    throw new Exception("Lỗi: Mã bác sĩ này đã tồn tại trên bảng!");
                }

                // Tiến hành tạo đối tượng và thêm vào danh sách
                BacSi bsMoi = new BacSi()
                {
                    MaBS = txtMa.Text.Trim(),
                    HoTen = txtHoTen.Text.Trim(),
                    SoNgayTruc = ngayTruc,
                    BacLuong = bacLuong,
                    Khoa = cboKhoa.Text
                };

                danhSachBacSi.Add(bsMoi);

                // Cập nhật hiển thị DataGrid
                dgBacSi.ItemsSource = null;
                dgBacSi.ItemsSource = danhSachBacSi;

                // Xóa form nhập liệu
                txtMa.Clear(); txtHoTen.Clear(); txtNgayTruc.Clear(); txtBacLuong.Clear();
                cboKhoa.SelectedIndex = 0;
                txtMa.Focus();
            }
            catch (Exception ex)
            {
                // Hiển thị thông báo lỗi trực quan dạng MessageBox
                MessageBox.Show(ex.Message, "Cảnh báo lỗi", MessageBoxButton.OK, MessageBoxImage.Warning);
            }
        }

        // Câu 2b: Lọc dữ liệu ngày trực < 15 và mở cửa sổ mới
        private void btnLoc_Click(object sender, RoutedEventArgs e)
        {
            // Dùng LINQ lọc dữ liệu theo yêu cầu đề bài
            List<BacSi> dsLoc = danhSachBacSi.Where(bs => bs.SoNgayTruc < 15).ToList();

            if (dsLoc.Count == 0)
            {
                MessageBox.Show("Không có bác sĩ nào có số ngày trực < 15 để hiển thị!", "Thông báo", MessageBoxButton.OK, MessageBoxImage.Information);
                return;
            }

            // Tạo và truyền danh sách lọc vào Constructor của ReportWindow
            ReportWindow cuaSoBaoCao = new ReportWindow(dsLoc);
            cuaSoBaoCao.Owner = this;
            cuaSoBaoCao.ShowDialog(); // Mở cửa sổ dạng hộp thoại cố định
        }
    }
}
