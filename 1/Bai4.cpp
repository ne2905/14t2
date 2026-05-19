using System.Collections.Generic;
using System.Windows;

namespace WpfApp_QuanLyBacSi
{
    public partial class ReportWindow : Window
    {
        // Hàm khởi tạo nhận danh sách đã lọc từ MainWindow truyền sang
        public ReportWindow(List<BacSi> danhSachNhanVao)
        {
            InitializeComponent();

            // Gán nguồn dữ liệu trực tiếp vào bảng của cửa sổ mới này
            dgBaoCao.ItemsSource = danhSachNhanVao;
        }
    }
}
